import cv2
import numpy as np
import os


def load_images(folder):
    files = sorted([
        os.path.join(folder, f)
        for f in os.listdir(folder)
        if f.lower().endswith(('.png', '.jpg', '.jpeg'))
    ])
    images = [cv2.imread(p, cv2.IMREAD_GRAYSCALE) for p in files]
    return images


def evaluate(output, sample):
    diff = cv2.absdiff(output, sample)
    exact = np.sum(diff == 0)
    loose = np.sum(diff <= 1)
    total = diff.size
    print(f"🔍 完全一致: {exact / total * 100:.2f}%")
    print(f"🟡 ±1まで一致: {loose / total * 100:.2f}%")
    print(f"📊 平均差分: {np.mean(diff):.2f}")
    print(f"📈 最大差分: {np.max(diff)}")
    return diff


def create_gray_binary(img, threshold=128):
    _, binary = cv2.threshold(img, threshold, 255, cv2.THRESH_BINARY)
    return binary


def create_sdf(img_bin):
    # OpenCVは255 or 0のuint8の1ch画像でないとエラー
    img_bin = img_bin.astype(np.uint8)
    return cv2.distanceTransform(img_bin, cv2.DIST_L2, 5).astype(np.float32)


def blend_with_sdf_transition_v4(images):
    h, w = images[0].shape
    accumulation = np.zeros((h, w), dtype=np.float32)
    count = 0

    def sdf_weight(imgA, imgB):
        binA = create_gray_binary(imgA)
        binB = create_gray_binary(imgB)
        sdfA = create_sdf(binA)
        sdfB = create_sdf(255 - binB)
        return sdfA / (sdfA + sdfB + 1e-6)

    for i in range(1, len(images) - 1):
        img_prev = images[i - 1].astype(np.float32)
        img_curr = images[i].astype(np.float32)
        img_next = images[i + 1].astype(np.float32)

        # SDFベースの重み（中心基準で左右ブレンド）
        w_prev = sdf_weight(img_curr, img_prev)
        w_next = sdf_weight(img_curr, img_next)
        w_curr = 1.5  # 中心を強調するため直接加算

        # 重み付き合成（中心主役・左右からフェード的に加算）
        blend = (
            img_prev * (1.0 - w_prev) +
            img_curr * w_curr +
            img_next * (1.0 - w_next)
        ) / (w_curr + 1.0 - w_prev + 1.0 - w_next)

        accumulation += blend
        count += 1

    accumulation /= count
    accumulation = cv2.normalize(accumulation, None, 0, 255, cv2.NORM_MINMAX)
    return accumulation.astype(np.uint8)



if __name__ == "__main__":
    asset_folder = "./Assets"  # a.png〜h.png の格納フォルダ
    sample_path = "./sample.png"

    images = load_images(asset_folder)
    sample = cv2.imread(sample_path, cv2.IMREAD_GRAYSCALE)

    accumulation = blend_with_sdf_transition_v4(images)

    cv2.imwrite("sdf_combined.png", accumulation)
    evaluate(accumulation, sample)

