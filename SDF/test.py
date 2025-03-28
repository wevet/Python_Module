import cv2
import numpy as np
import os


def createGray(img, threshold_value=128):
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) if len(img.shape) == 3 else img
    _, binary = cv2.threshold(gray, threshold_value, 255, cv2.THRESH_BINARY)
    return binary


def createSDF(img, threshold=128, dist_type=cv2.DIST_L2):
    binary = createGray(img, threshold)
    dist = cv2.distanceTransform(binary, dist_type, 5)
    return dist


def createDSDF(imgA, imgB, threshold=128, dist_type=cv2.DIST_L2):
    sdfA = createSDF(imgA, threshold, dist_type).astype(np.float32)
    sdfB = createSDF(imgB, threshold, dist_type).astype(np.float32)
    add = sdfA + sdfB + 1e-6
    div = sdfA / add
    return div


def apply_sigmoid_curve(img, gain=6.0, midpoint=128):
    lut = np.array([
        255 / (1 + np.exp(-gain * ((i - midpoint) / 255.0)))
        for i in range(256)
    ], dtype=np.uint8)
    return cv2.LUT(img, lut)


def evaluate_match(output_img, sample_img):
    diff = cv2.absdiff(output_img, sample_img)
    exact = np.sum(diff == 0)
    loose = np.sum(diff <= 1)
    total = diff.size
    mean_diff = np.mean(diff)
    max_diff = np.max(diff)

    print(f"🔍 一致率（完全一致）: {exact / total * 100:.2f} %")
    print(f"🟡 一致率（±1までOK）: {loose / total * 100:.2f} %")
    print(f"📊 平均差分: {mean_diff:.2f}")
    print(f"📈 最大差分: {max_diff}")


def export_images():
    script_dir = os.path.dirname(os.path.abspath(__file__))
    assets_dir = os.path.join(script_dir, "Assets")
    sample_path = os.path.join(script_dir, "sample.png")

    file_paths = sorted([
        os.path.join(assets_dir, f)
        for f in os.listdir(assets_dir)
        if f.lower().endswith((".png", ".jpg", ".jpeg"))
    ])
    images = [cv2.imread(p, cv2.IMREAD_GRAYSCALE) for p in file_paths]
    base_shape = images[0].shape
    images = [cv2.resize(img, (base_shape[1], base_shape[0])) for img in images]

    output = np.zeros_like(images[0], dtype=np.float32)
    for i in range(len(images) - 1):
        dsdf = createDSDF(images[i], images[i + 1])
        output += dsdf
    output /= max(len(images) - 1, 1)

    # 正規化 → ガンマ補正 → ブラー → エッジ周辺だけ補正
    output = cv2.normalize(output, None, 0, 1.0, cv2.NORM_MINMAX)
    output = np.power(output, 0.65)
    blurred = cv2.GaussianBlur(output, (5, 5), 0)

    edges = cv2.Canny((output * 255).astype(np.uint8), 30, 100)
    edges = cv2.dilate(edges, None)
    mask = edges.astype(bool)
    output[mask] = blurred[mask]

    output_8bit = (output * 255).astype(np.uint8)
    sigmoid_corrected = apply_sigmoid_curve(output_8bit, gain=6.0)

    output_color = cv2.cvtColor(sigmoid_corrected, cv2.COLOR_GRAY2BGR)
    output_filename = os.path.join(script_dir, "sdf_combined.png")
    cv2.imwrite(output_filename, output_color)

    # 一致率チェック
    if os.path.exists(sample_path):
        sample = cv2.imread(sample_path, cv2.IMREAD_GRAYSCALE)
        evaluate_match(sigmoid_corrected, sample)


if __name__ == "__main__":
    export_images()
