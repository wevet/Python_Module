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


def create_gray_binary(img, threshold=128):
    _, binary = cv2.threshold(img, threshold, 255, cv2.THRESH_BINARY)
    return binary


def create_sdf(img_bin):
    img_bin = img_bin.astype(np.uint8)
    return cv2.distanceTransform(img_bin, cv2.DIST_L2, 5).astype(np.float32)


def smooth_weight(sdfA, sdfB, scale=30.0):
    x = np.clip((sdfA - sdfB) / scale * 0.5 + 0.5, 0, 1)
    return x * x * (3 - 2 * x)  # Hermite補間（smoothstep）


def blend_with_sdf_transition_v5(images, scale=30.0, center_weight=2.0):
    h, w = images[0].shape
    accumulation = np.zeros((h, w), dtype=np.float32)
    count = 0

    for i in range(1, len(images) - 1):
        img_prev = images[i - 1].astype(np.float32)
        img_curr = images[i].astype(np.float32)
        img_next = images[i + 1].astype(np.float32)

        bin_curr = create_gray_binary(img_curr)
        bin_prev = create_gray_binary(img_prev)
        bin_next = create_gray_binary(img_next)

        sdf_to_prev = create_sdf(bin_curr)
        sdf_from_prev = create_sdf(255 - bin_prev)
        w_prev = smooth_weight(sdf_to_prev, sdf_from_prev, scale)

        sdf_to_next = create_sdf(bin_curr)
        sdf_from_next = create_sdf(255 - bin_next)
        w_next = smooth_weight(sdf_to_next, sdf_from_next, scale)

        blend = (
            img_prev * (1.0 - w_prev) +
            img_curr * center_weight +
            img_next * (1.0 - w_next)
        ) / (center_weight + (1.0 - w_prev) + (1.0 - w_next))

        accumulation += blend
        count += 1

    accumulation /= count
    accumulation = cv2.normalize(accumulation, None, 0, 255, cv2.NORM_MINMAX)
    return accumulation.astype(np.uint8)


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


if __name__ == "__main__":
    asset_folder = "./Assets"       # a.png〜h.png の格納フォルダ
    sample_path = "./sample.png"    # 正解画像

    images = load_images(asset_folder)
    sample = cv2.imread(sample_path, cv2.IMREAD_GRAYSCALE)

    result = blend_with_sdf_transition_v5(images)
    cv2.imwrite("sdf_combined.png", result)

    evaluate(result, sample)
