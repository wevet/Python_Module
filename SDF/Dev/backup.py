import cv2
import numpy as np
import os
import matplotlib.pyplot as plt

# 量子化の段階数（4096 にすると最終的に 12bit 相当の階調。必要に応じて 16384 などに増やしても OK）
LEVELS = 32768
# 水平ブラー（cv2.blur）の半径：（2*RADIUS+1）×(2*RADIUS+1) カーネルを使う
RADIUS = 1
# トレンド除去のために左右何割を利用するか
EDGE_RATIO = 0.1



def show_diff_heatmap(output, sample, fname="diff_heatmap.png"):
    diff = cv2.absdiff(output, sample).astype(np.float32)
    # 正規化して 0..1 に
    diff_norm = diff / diff.max()
    plt.imshow(diff_norm, cmap='hot', vmin=0, vmax=1)
    plt.colorbar(label='Normalized Absolute Difference')
    plt.title("Difference Heatmap")
    plt.axis('off')
    plt.savefig(fname, bbox_inches='tight', pad_inches=0)
    print(f"▶️ ヒートマップを {fname} に保存しました")


def load_images(folder):
    files = sorted([
        os.path.join(folder, f)
        for f in os.listdir(folder)
        if f.lower().endswith(('.png','jpg','jpeg'))
    ])
    images = [cv2.imread(p, cv2.IMREAD_GRAYSCALE).astype(np.float32) for p in files]
    return images


def evaluate(output, sample):
    # output と sample はどちらも uint8 のはず
    diff = cv2.absdiff(output, sample)
    print(f"🔍 完全一致: {np.mean(diff == 0) * 100:.2f}%")
    print(f"🟡 ±1まで一致: {np.mean(diff <= 1) * 100:.2f}%")
    print(f"📊 平均差分: {np.mean(diff):.2f}")
    print(f"📈 最大差分: {np.max(diff)}")
    return diff


def blend_with_quantized_global_side(images, levels=4096, radius=1):
    """
    sample.png に極力近づけるため、中央および左右のバンディングを除去する。
    """

    N = len(images) - 1
    h, w = images[0].shape

    # --- 1) 2値化と SDF 計算 ---
    bins = [(img > 128).astype(np.uint8) for img in images]
    sdist = np.zeros((N, h, w), dtype=np.float32)
    acc = np.zeros((h, w), dtype=np.float32)

    for i in range(N):
        prev = images[i - 1].astype(np.float32)
        curr = images[i].astype(np.float32)

        # 1) SDF 重み
        bin_curr = (curr > 85).astype(np.uint8) * 255
        bin_prev = (prev > 85).astype(np.uint8) * 255

        sdfA = cv2.distanceTransform(bins[i], cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        sdfB = cv2.distanceTransform(1 - bins[i], cv2.DIST_L2, cv2.DIST_MASK_PRECISE)

        # 2) 重み w を計算
        w_sdf = sdfA / (sdfA + sdfB + 1e-6)

        # 3) まず水平ブラー（float）
        w_blur = cv2.blur(w_sdf, (2 * radius + 1, 2 * radius + 1))

        # 4) 量子化（重みを LEVELS 段階に丸める）
        wq = np.floor(w_blur * levels + 0.5)
        wq = np.clip(wq, 0, levels) / float(levels)

        # 5) 量子化後の wq に再度水平ブラー
        w_smooth = cv2.blur(wq, (2 * radius + 1, 2 * radius + 1))

        # 6) ブレンド → acc に足し込み
        blend = bin_prev * (1.0 - w_smooth) + bin_curr * w_smooth
        acc += blend

        si = sdfA.copy()
        si[bins[i] == 0] = -sdfB[bins[i] == 0]
        sdist[i] = si

    # --- 後半：平均化した float32 画像を改めて LEVELS 段階に丸め込んで uint8 化 ---
    avg_img = acc / (len(images) - 2)  # float32, 範囲はおおよそ 0～255

    # --- 2) 各スライス間の補間を算出 ---
    inside = (sdist > 0)
    count = inside.sum(axis=0)
    i_idx = count - 1
    ys = np.arange(h, dtype=np.int32)[:, None]
    xs = np.arange(w, dtype=np.int32)[None, :]
    i_clipped = np.clip(i_idx, 0, N - 2).astype(np.int32)
    s_i = sdist[i_clipped, ys, xs]
    s_next = sdist[i_clipped + 1, ys, xs]
    denom = (s_i - s_next)
    denom[np.abs(denom) < 1e-6] = 1e-6
    f = np.clip(s_i / denom, 0.0, 1.0)

    cont = np.zeros((h, w), dtype=np.float32)
    mask = (i_idx >= 0) & (i_idx < N - 1)
    cont[mask] = i_idx[mask] + f[mask]
    cont[i_idx >= (N - 1)] = float(N - 1)

    # --- 3) 中央縦バンディング対策：横方向ブラーとの加重平均 ---
    cont_hblur = cv2.blur(cont, (9, 1))  # 横方向にぼかす（縦線をぼかす）
    cont = cv2.addWeighted(cont, 0.5, cont_hblur, 0.5, 0.0)

    # --- 4) 軽度ガウシアン（縦横）で全体補正（radius=1固定） ---
    cont = cv2.GaussianBlur(cont, (0, 0), sigmaX=radius, sigmaY=radius, borderType=cv2.BORDER_REPLICATE)

    # --- 5) グローバル正規化 ---
    mn, mx = float(cont.min()), float(cont.max())
    if mx > mn:
        cont = (cont - mn) / (mx - mn)
    else:
        cont = np.clip(cont, 0.0, 1.0)

    # --- 6) 量子化 + 再ガウスブラーで微細な縞を吸収 ---
    q = np.floor(cont * levels + 0.5) / float(levels)
    q = cv2.GaussianBlur(q, (0, 0), sigmaX=radius, sigmaY=radius, borderType=cv2.BORDER_REPLICATE)

    # --- 7) 出力（8bit） ---
    output8 = np.clip(q * 255.0, 0.0, 255.0).astype(np.uint8)
    return output8


def blend_with_quantized_global_center(images, levels=4096, radius=1):
    """
    ・フレームペアごとに SDF 重みを計算し、水平ブラー→量子化→再度ブラー をかけた後に合成
    ・最後にできた float32 の結果画像全体を改めて LEVELS 段階に丸め込んでから uint8 化
    """

    h, w = images[0].shape
    acc = np.zeros((h, w), dtype=np.float32)

    # --- 前半：各フレームペアごとにブレンドして acc に足し込む ---
    for i in range(1, len(images) - 1):
        prev = images[i - 1].astype(np.float32)
        curr = images[i].astype(np.float32)

        # 1) SDF 重み
        bin_curr = (curr > 85).astype(np.uint8) * 255
        bin_prev = (prev > 85).astype(np.uint8) * 255
        sdfA = cv2.distanceTransform(bin_curr, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        sdfB = cv2.distanceTransform(255 - bin_prev, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)

        # 2) 重み w を計算
        w_sdf = sdfA / (sdfA + sdfB + 1e-6)

        # 3) まず水平ブラー（float）
        w_blur = cv2.blur(w_sdf, (2 * radius + 1, 2 * radius + 1))

        # 4) 量子化（重みを LEVELS 段階に丸める）
        wq = np.floor(w_blur * levels + 0.5)
        wq = np.clip(wq, 0, levels) / float(levels)

        # 5) 量子化後の wq に再度水平ブラー
        w_smooth = cv2.blur(wq, (2 * radius + 1, 2 * radius + 1))

        # 6) ブレンド → acc に足し込み
        blend = prev * (1.0 - w_smooth) + curr * w_smooth
        acc += blend

    # --- 後半：平均化した float32 画像を改めて LEVELS 段階に丸め込んで uint8 化 ---
    avg_img = acc / (len(images) - 2)  # float32, 範囲はおおよそ 0～255

    threshold = 255.0
    # 例: ここで画素値[0,255]をまず [0,1] に正規化し、LEVELS 段階に量子化→再度 [0,255] に戻す
    norm = np.clip(avg_img / threshold, 0.0, 1.0)      # [0,1] の float32
    q = np.floor(norm * levels) # [0, LEVELS] の float
    q = np.clip(q, 0, levels) / float(levels)     # [0,1] の float に戻す
    output = np.clip(q * threshold, 0, threshold).astype(np.uint8)
    return output


def blend_with_quantized_global(images, levels=1, trans_blur=1):
    """
    a~h のグレースケール画像リスト images を受け取り、
    φ2/(φ2−φ1) のペアごと遷移率を累積し、
    平均→グローバル量子化（levels=255）→軽いガウシアンブラー→
    明度を1段階上げる → 'sdf_combined.png' に出力します。
    """
    # 1) パラメータ固定
    #levels = 255
    h, w = images[0].shape
    acc = np.zeros((h, w), dtype=np.float32)
    k = (2*trans_blur+1, 2*trans_blur+1)

    # 2) 符号付き距離場 φ を作るヘルパー
    def signed_sdf(bin_img):
        d_out = cv2.distanceTransform(255 - bin_img, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        d_in = cv2.distanceTransform(bin_img, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        return d_in - d_out

    # 3) 各ペア prev->curr で遷移率 w を計算し累積
    for i in range(1, len(images) - 1):
        prev = images[i - 1].astype(np.float32)
        curr = images[i].astype(np.float32)

        b1 = (prev > 128).astype(np.uint8)*255
        b2 = (curr > 128).astype(np.uint8)*255

        sigma_1 = signed_sdf(b1)
        sigma_2 = signed_sdf(b2)

        denom = (sigma_2 - sigma_1) + 1e-6
        w_raw = sigma_2 / denom
        np.clip(w_raw, 0.0, 1.0, out=w_raw)

        w = cv2.blur(w_raw.astype(np.float32), k)
        acc += prev * (1.0 - w) + curr * w

    # 4) 平均化 → 0..1 正規化
    n_pairs = len(images) - 1
    avg = acc / float(n_pairs)
    norm = np.clip(avg / 255.0, 0.0, 1.0)

    # 5) グローバル量子化 → 0..255 に戻す
    q = np.floor(norm * levels + 0.5)
    #q = np.rint(norm * 255)  # 最近接整数に丸め
    #q = np.clip(q, 0, 255)
    np.clip(q, 0, levels, out=q)
    out = (q / float(levels) * 255.0).astype(np.uint8)

    # ── ここで「1段階分」明るくする ──
    # levels=255 なのでステップ幅は 255/255=1
    brightened = cv2.add(out, 10)  # 自動クリップ

    # 6) 軽いガウシアンブラーでバンディング抑制
    out_smooth = cv2.GaussianBlur(brightened, (0,0), sigmaX=0.3, sigmaY=0.3)

    return out_smooth


def blend_and_save_each(images, out_dir="blends"):
    os.makedirs(out_dir, exist_ok=True)
    h, w = images[0].shape
    k_trans = (2*TRANS_BLUR+1, 2*TRANS_BLUR+1)

    for idx in range(1, len(images)):
        prev = images[idx-1].astype(np.float32)
        curr = images[idx].astype(np.float32)

        # 1) 前後フレームのバイナリ
        bin1 = (prev > 128).astype(np.uint8) * 255
        bin2 = (curr > 128).astype(np.uint8) * 255

        # 2) 符号付き距離場 φ1, φ2 を計算
        def signed_sdf(bin_img):
            d_out = cv2.distanceTransform(255 - bin_img, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
            d_in  = cv2.distanceTransform(bin_img,         cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
            return d_in - d_out

        φ1 = signed_sdf(bin1)
        φ2 = signed_sdf(bin2)

        # 3) 遷移率 w_raw = φ2 / (φ2 - φ1) で 0→1
        denom = (φ2 - φ1) + 1e-6
        w_raw = φ2 / denom
        w_raw = np.clip(w_raw, 0.0, 1.0)

        # ログ出力
        print(f"--- Pair {idx-1}->{idx} ---")
        print(f"raw    : min={w_raw.min():.3f}, max={w_raw.max():.3f}, mean={w_raw.mean():.3f}")

        # 4) 大きなブラーで滑らかに
        w_smooth = cv2.blur(w_raw.astype(np.float32), k_trans)
        print(f"smoothed: min={w_smooth.min():.3f}, max={w_smooth.max():.3f}, mean={w_smooth.mean():.3f}")

        # 5) 合成
        blended = prev * (1.0 - w_smooth) + curr * w_smooth
        out_u8  = np.clip(blended, 0, 255).astype(np.uint8)

        # 6) 保存
        path = os.path.join(out_dir, f"blend_{idx-1:02d}_{idx:02d}.png")
        cv2.imwrite(path, out_u8)
        print(f"▶️ 保存しました: {path}\n")

    print("✅ 全ペアの合成が完了しました。")




if __name__ == "__main__":
    images = load_images("./Assets")
    sample = cv2.imread("./sample.png", cv2.IMREAD_GRAYSCALE)
    result = blend_with_quantized_global(images, levels=LEVELS)
    cv2.imwrite("sdf_combined.png", result)
    evaluate(result, sample)

    show_diff_heatmap(result, sample)


