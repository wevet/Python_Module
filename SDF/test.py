import cv2
import numpy as np
import os


def load_images(folder):
    files = sorted([
        os.path.join(folder, f)
        for f in os.listdir(folder)
        if f.lower().endswith(('.png', '.jpg', '.jpeg'))
    ])
    images = [cv2.imread(p, cv2.IMREAD_GRAYSCALE).astype(np.float32) / 255.0 for p in files]
    return images


def evaluate(output, sample):
    diff = cv2.absdiff((output * 255).astype(np.uint8), sample)
    exact = np.sum(diff == 0)
    loose = np.sum(diff <= 1)
    total = diff.size
    print(f"🔍 完全一致: {exact / total * 100:.2f}%")
    print(f"🟡 ±1まで一致: {loose / total * 100:.2f}%")
    print(f"📊 平均差分: {np.mean(diff):.2f}")
    print(f"📈 最大差分: {np.max(diff)}")
    return diff


def blend_with_soft_masks(images):
    h, w = images[0].shape

    # マスクをブラーして正規化
    blurred = [cv2.GaussianBlur(img, (21, 21), 0) for img in images]
    stack = np.stack(blurred, axis=-1)
    mask_sum = np.clip(np.sum(stack, axis=-1, keepdims=True), 1e-6, None)
    weights = stack / mask_sum

    # 重み付き合成
    result = np.zeros((h, w), dtype=np.float32)
    for img, weight in zip(images, np.rollaxis(weights, 2)):
        result += img * weight

    # ガンマ補正（リニア → sRGB）
    result = np.power(np.clip(result, 0, 1), 1/2.2)
    return result


if __name__ == "__main__":
    asset_folder = "./Assets"
    sample_path = "./sample.png"

    images = load_images(asset_folder)
    sample = cv2.imread(sample_path, cv2.IMREAD_GRAYSCALE)

    result = blend_with_soft_masks(images)

    cv2.imwrite("sdf_combined.png", (result * 255 + 0.5).astype(np.uint8))
    evaluate(result, sample)
