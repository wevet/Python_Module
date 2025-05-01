import cv2
import numpy as np
import os
import cv2.ximgproc as xip

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


LEVELS = 16
R = 8  # 水平方向のぼかし範囲


def blend_with_fade_smooth(images):
    h, w = images[0].shape
    acc = np.zeros((h, w), dtype=np.float32)

    # ブラー半径＆カーネル
    sigma = R
    k = 2*R + 1
    ksize = (k, k)

    # 境界マージン（wmap がここだけぼかし対象）
    eps = 2.0 / LEVELS    # マージンをやや広げる

    for i in range(1, len(images)-1):
        prev = images[i-1].astype(np.float32)
        curr = images[i].astype(np.float32)

        # 1) SDF 重みマップ
        bin_c = (curr > 85).astype(np.uint8)*255
        bin_p = (prev > 85).astype(np.uint8)*255
        sdfA = cv2.distanceTransform(bin_c,   cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        sdfB = cv2.distanceTransform(255-bin_p, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        wmap = sdfA / (sdfA + sdfB + 1e-6)

        # 2) ぼかし用マスク（境界付近だけ 1.0）
        mask = ((wmap > eps) & (wmap < 1.0 - eps)).astype(np.float32)

        # 3) ガウシアンぼかし：重みとマスク
        w_blur = cv2.GaussianBlur(wmap, ksize, sigmaX=sigma, sigmaY=sigma)
        mask_blur = cv2.GaussianBlur(mask, ksize, sigmaX=sigma, sigmaY=sigma)

        # 4) フェード合成（α = mask_blur）
        w_smooth = mask_blur * w_blur + (1.0 - mask_blur) * wmap

        # 5) 画像合成
        blend = prev * (1.0 - w_smooth) + curr * w_smooth
        acc += blend

    result = np.clip(acc / (len(images) - 2), 0, 255).astype(np.uint8)
    return result


if __name__ == "__main__":
    images = load_images("./Assets")
    sample = cv2.imread("./sample.png", cv2.IMREAD_GRAYSCALE)

    result = blend_with_fade_smooth(images)

    cv2.imwrite("sdf_combined.png", result)
    evaluate(result, sample)


