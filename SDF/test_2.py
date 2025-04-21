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
    return cv2.distanceTransform(img_bin, cv2.DIST_L2, 5).astype(np.float32)


def create_distance_sdf(imgA, imgB):
    binA = create_gray_binary(imgA)
    binB = create_gray_binary(imgB)
    sdfA = create_sdf(binA)
    sdfB = create_sdf(255 - binB)
    add = sdfA + sdfB + 1e-6
    return sdfA / add


def directional_blur_based_on_gradient(img, soft_ksize=11, strong_ksize=31, soft_sigma=2, strong_sigma=8):
    # Sobelで勾配取得
    grad_x = cv2.Sobel(img, cv2.CV_32F, 1, 0, ksize=3)
    grad_y = cv2.Sobel(img, cv2.CV_32F, 0, 1, ksize=3)
    grad_mag = np.sqrt(grad_x**2 + grad_y**2)

    # 勾配強度が小さい = ブラー強く
    grad_mask = cv2.normalize(grad_mag, None, 0, 1, cv2.NORM_MINMAX)
    blur_mask = 1.0 - grad_mask

    # 2種類のぼかし
    blur_soft = cv2.GaussianBlur(img, (soft_ksize, soft_ksize), soft_sigma)
    blur_strong = cv2.GaussianBlur(img, (strong_ksize, strong_ksize), strong_sigma)

    # 重み付き合成
    out = blur_soft * blur_mask + blur_strong * (1.0 - blur_mask)
    return out.astype(np.uint8)


def blend_with_sdf_transition_v2(images, blendingtimes=50, alpha=0.08):
    h, w = images[0].shape
    accumulation = np.zeros((h, w), dtype=np.float32)

    for i in range(len(images) - 1):
        layer = np.zeros((h, w), dtype=np.float32)
        for t in range(blendingtimes):
            alpha_t = alpha * (1.0 - t / blendingtimes)
            dsdf = create_distance_sdf(images[i], images[i + 1])
            layer = layer * (1 - alpha_t) + dsdf * alpha_t
        accumulation += layer

    accumulation /= (len(images) - 1)
    accumulation = cv2.normalize(accumulation, None, 0, 255, cv2.NORM_MINMAX)
    return accumulation


if __name__ == "__main__":
    asset_folder = "./Assets"  # a.png〜h.png の格納フォルダ
    sample_path = "./sample.png"

    images = load_images(asset_folder)
    sample = cv2.imread(sample_path, cv2.IMREAD_GRAYSCALE)

    accumulation = blend_with_sdf_transition_v2(
        images,
        blendingtimes=2,
        alpha=0.01
    )

    blurred = directional_blur_based_on_gradient(
        accumulation,
        soft_ksize=11,
        strong_ksize=31,
        soft_sigma=2,
        strong_sigma=8
    )

    cv2.imwrite("sdf_combined.png", blurred)
    evaluate(blurred, sample)

