import cv2
import numpy as np
import os

# 量子化の段階数（4096 にすると最終的に 12bit 相当の階調。必要に応じて 16384 などに増やしても OK）
LEVELS = 4096
# 水平ブラー（cv2.blur）の半径：（2*RADIUS+1）×(2*RADIUS+1) カーネルを使う
RADIUS = 1


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
    - a~h の画像からのみ合成
    - load_images, evaluate の変更禁止
    - main 関数は変更せず、関数名は blend_with_quantized_global で固定
    - radius=1 のままで最大限バンディングを除去
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




if __name__ == "__main__":
    images = load_images("./Assets")
    sample = cv2.imread("./sample.png", cv2.IMREAD_GRAYSCALE)
    result = blend_with_quantized_global_center(images, levels=LEVELS, radius=RADIUS)
    cv2.imwrite("sdf_combined.png", result)  # uint8 の PNG

    evaluate(result, sample)

