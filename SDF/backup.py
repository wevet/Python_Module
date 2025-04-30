import cv2
import numpy as np
import os

LEVELS = 16
R = 8  # 水平方向のぼかし範囲


def load_images(folder):
    files = sorted([
        os.path.join(folder, f)
        for f in os.listdir(folder)
        if f.lower().endswith(('.png', '.jpg', '.jpeg'))
    ])
    images = [cv2.imread(p, cv2.IMREAD_GRAYSCALE).astype(np.float32) for p in files]
    return images


def evaluate(output, sample):
    diff = cv2.absdiff(output, sample)
    print(f"🔍 完全一致: {np.mean(diff==0)*100:.2f}%")
    print(f"🟡 ±1まで一致: {np.mean(diff<=1)*100:.2f}%")
    print(f"📊 平均差分: {np.mean(diff):.2f}")
    print(f"📈 最大差分: {np.max(diff)}")
    return diff


def create_gray_binary(img, threshold=85):
    _, binary = cv2.threshold(img, threshold, 255, cv2.THRESH_BINARY)
    return binary.astype(np.uint8)


def create_sdf(img_bin):
    return cv2.distanceTransform(img_bin, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)


def debug_and_save(images, idx, outdir="debug"):
    os.makedirs(outdir, exist_ok=True)
    prev = images[idx-1].astype(np.float32)
    curr = images[idx].astype(np.float32)

    # 1) 生のSDF重み
    bin_c = (curr > 85).astype(np.uint8) * 255
    bin_p = (prev > 85).astype(np.uint8) * 255
    sdfA = cv2.distanceTransform(bin_c,   cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
    sdfB = cv2.distanceTransform(255 - bin_p, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
    w = sdfA / (sdfA + sdfB + 1e-6)
    cv2.imwrite(f"{outdir}/w_raw_{idx}.png", (w * 255).astype(np.uint8))

    # 2) 水平ブラー
    w_h = cv2.blur(w, (2*R+1, 1))
    cv2.imwrite(f"{outdir}/w_h_{idx}.png", (w_h * 255).astype(np.uint8))

    # 3) 量子化
    wq = np.floor(w_h * LEVELS + 0.5)
    wq = np.clip(wq, 0, LEVELS) / LEVELS
    cv2.imwrite(f"{outdir}/w_q_{idx}.png", (wq * 255).astype(np.uint8))


def blend_with_quantized_horizontal_blur(images):
    h, w = images[0].shape
    acc = np.zeros((h, w), dtype=np.float32)

    for i in range(1, len(images)-1):
        prev = images[i-1].astype(np.float32)
        curr = images[i].astype(np.float32)

        # 1) SDF 重み
        bin_curr = (curr > 85).astype(np.uint8) * 255
        bin_prev = (prev > 85).astype(np.uint8) * 255
        sdfA = cv2.distanceTransform(bin_curr, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        sdfB = cv2.distanceTransform(255 - bin_prev, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        w = sdfA / (sdfA + sdfB + 1e-6)

        # 2–4) 量子化
        wq = np.floor(w * LEVELS + 0.5)
        wq = np.clip(wq, 0, LEVELS) / LEVELS

        # 5) 水平方向ボックスブラー
        w_smooth = cv2.blur(wq, (2*R+1, 1))

        # 6) 合成
        blend = prev * (1 - w_smooth) + curr * w_smooth
        acc += blend

    acc /= (len(images) - 2)
    return np.clip(acc, 0, 255).astype(np.uint8)


if __name__ == "__main__":
    images = load_images("./Assets")
    sample = cv2.imread("./sample.png", cv2.IMREAD_GRAYSCALE)

    result = blend_with_quantized_horizontal_blur(images)

    cv2.imwrite("sdf_combined.png", result)
    evaluate(result, sample)


