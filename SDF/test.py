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



def blend_with_quantized_global_backup(images, levels=4096, radius=5):
    # -----------------------------------------------------------
    # [1] 画像を二値化 (0/1) して SDF を計算
    # -----------------------------------------------------------
    bins = [(img > 128).astype(np.uint8) for img in images]
    N = len(bins)
    h, w = bins[0].shape

    sdist = np.zeros((N, h, w), dtype=np.float32)
    for i in range(N):
        # inside/outside それぞれで距離変換
        pos = cv2.distanceTransform(bins[i], cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        neg = cv2.distanceTransform(1 - bins[i], cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        s_i = pos.copy()
        s_i[bins[i] == 0] = -neg[bins[i] == 0]
        sdist[i] = s_i

    # -----------------------------------------------------------
    # [2] 各ピクセルで「何枚目のスライスか」と「次のスライスへの補間比率 f」を求める
    # -----------------------------------------------------------
    inside = (sdist > 0)  # 各スライス内側なら True
    count = inside.sum(axis=0)  # 各ピクセルで「何枚目まで inside か（整数）」
    i_idx = count - 1  # 『内側スライス番号』に対応。0～(N-1) の範囲
    mask_lin = (i_idx >= 0) & (i_idx < N - 1)
    i_clipped = np.clip(i_idx, 0, N - 2).astype(np.int32)

    ys = np.arange(h, dtype=np.int32)[:, None]
    xs = np.arange(w, dtype=np.int32)[None, :]

    s_i = sdist[i_clipped, ys, xs]
    s_next = sdist[i_clipped + 1, ys, xs]

    # f = s_i / (s_i - s_next) だが、ゼロ除算を避ける
    denom = (s_i - s_next).astype(np.float32)
    denom_safe = denom.copy()
    denom_safe[np.abs(denom_safe) < 1e-6] = 1e-6
    f = (s_i / denom_safe).astype(np.float32)
    f = np.clip(f, 0.0, 1.0)

    # cont に「整数スライス番号 + 補間比率 f」を積算
    cont = np.zeros((h, w), dtype=np.float32)
    cont[mask_lin] = (i_idx[mask_lin] + f[mask_lin]).astype(np.float32)

    # もし i_idx >= (N-1) なら最終スライス扱い
    mask_top = (i_idx >= (N - 1))
    cont[mask_top] = float(N - 1)

    # -----------------------------------------------------------
    # [3] 【最重要変更点】まず“整数的な cont” を先に横方向ガウシアンブラー
    # -----------------------------------------------------------
    # sigmaX=1.5 程度で中央バンディングはかなり目立たなくなります。
    # 必要に応じて 1.0～2.0 の間で微調整してください。
    cont_blur = cv2.GaussianBlur(
        cont,
        ksize=(0, 0), # 自動で奇数カーネルを選択
        sigmaX=1.5, # ← ここを変えると中央部の帯の消え具合が変わります
        sigmaY=0.0,
        borderType=cv2.BORDER_REPLICATE
    )

    # -----------------------------------------------------------
    # [4] ブラー後に正規化 → 8bit に丸める
    # -----------------------------------------------------------
    cont_norm2 = cont_blur / float(N - 1)           # 0..1 に落とし込む
    output8 = np.clip((cont_norm2 * 255.0), 0.0, 255.0).astype(np.uint8)
    return output8



def blend_with_quantized_global(images, levels=4096, radius=5):
    h, w = images[0].shape
    acc = np.zeros((h, w), dtype=np.float32)
    n_pairs = len(images) - 2     # ← 正しくは N-2 ペア
    bt = cv2.BORDER_REFLECT_101

    # --- (1) SDF 計算 ---
    bins = [(img > 85).astype(np.uint8) for img in images]
    N = len(bins)
    sdist = np.zeros((N, h, w), dtype=np.float32)
    for i in range(N):
        pos = cv2.distanceTransform(bins[i],     cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        neg = cv2.distanceTransform(1 - bins[i], cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        si = pos.copy()
        si[bins[i] == 0] = -neg[bins[i] == 0]
        sdist[i] = si

    # --- (2) cont 素 → 正規化 ---
    inside = (sdist > 0)
    count = inside.sum(axis=0)
    i_idx = count - 1
    mask = (i_idx >= 0) & (i_idx<N-1)
    i_cl = np.clip(i_idx, 0, N-2).astype(np.int32)
    ys = np.arange(h)[:,None]; xs = np.arange(w)[None,:]
    si = sdist[i_cl, ys, xs]
    snext = sdist[i_cl+1, ys, xs]
    denom = si - snext
    denom[np.abs(denom)<1e-6] = 1e-6
    f = np.clip(si/denom, 0.0,1.0)
    cont = np.zeros((h,w), np.float32)
    cont[mask] = i_idx[mask] + f[mask]
    cont[i_idx >= N-1] = float(N-1)
    cont_norm = cont / float(N-1)   # → [0,1]

    # --- (3) 横方向1Dガウス ×2 & 量子化 ---
    h1 = cv2.GaussianBlur(cont_norm, (0,0), sigmaX=radius, sigmaY=0.0, borderType=bt)
    q1 = np.clip(np.floor(h1*levels+0.5), 0, levels)/float(levels)
    h2 = cv2.GaussianBlur(q1, (0,0), sigmaX=radius, sigmaY=0.0, borderType=bt)

    # --- (4) 中央帯除去 2D ブラー ---
    blur2 = cv2.GaussianBlur(h2, (0,0), sigmaX=1.0, sigmaY=1.0, borderType=bt)

    # --- (5) 最終量子化: round(x*255) ---
    # 再正規化 → 量子化 → uint8
    norm = np.clip(blur2, 0.0, 1.0)
    out = np.round(norm * 255.0).astype(np.uint8)
    return out



if __name__ == "__main__":
    images = load_images("./Assets")
    sample = cv2.imread("./sample.png", cv2.IMREAD_GRAYSCALE)
    result = blend_with_quantized_global(images, levels=LEVELS, radius=RADIUS)
    cv2.imwrite("sdf_combined.png", result)  # uint8 の PNG

    evaluate(result, sample)

