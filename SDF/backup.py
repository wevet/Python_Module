import cv2
import numpy as np
import os

# 量子化の段階数（4096 にすると最終的に 12bit 相当の階調。必要に応じて 16384 などに増やしても OK）
LEVELS = 4096
# 水平ブラー（cv2.blur）の半径：（2*RADIUS+1）×(2*RADIUS+1) カーネルを使う
RADIUS = 1
# トレンド除去のために左右何割を利用するか
EDGE_RATIO = 0.1


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


def blend_with_quantized_global(images, levels=LEVELS, radius=1):
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
    # [0,1] の float32
    norm = np.clip(avg_img / threshold, 0.0, 1.0)
    # [0, LEVELS] の float
    q = np.floor(norm * levels)
    # [0,1] の float に戻す
    q = np.clip(q, 0, levels) / float(levels)
    output = np.clip(q * threshold, 0, threshold).astype(np.uint8)
    return output





if __name__ == "__main__":
    images = load_images("./Assets")
    sample = cv2.imread("./sample.png", cv2.IMREAD_GRAYSCALE)
    result = blend_with_quantized_global(images, levels=LEVELS)
    cv2.imwrite("sdf_combined.png", result)
    evaluate(result, sample)


