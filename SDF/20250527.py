import cv2
import numpy as np
import os

# 量子化レベル
LEVELS = 64
# SDF重みの水平ぼかしサイズ
BLUR_RADIUS = 8

def load_images(folder):
    files = sorted([
        os.path.join(folder, f)
        for f in os.listdir(folder)
        if f.lower().endswith(('.png','jpg','jpeg'))
    ])
    imgs = []
    for p in files:
        im = cv2.imread(p, cv2.IMREAD_GRAYSCALE)
        if im is None:
            raise FileNotFoundError(f"cannot load {p}")
        imgs.append(im.astype(np.float32))
    return imgs

def horizontal_diffusion_quantize(w, levels):
    """
    w: [h,w] float32 in [0,1]
    levels: number of quantization levels
    return: quantized weight [h,w] float32 in [0,1] with horizontal error diffusion
    """
    h, w0 = w.shape
    wq = np.zeros_like(w)
    for y in range(h):
        err = 0.0
        for x in range(w0):
            v = w[y, x] * levels + err
            q = np.clip(round(v), 0, levels)
            wq[y, x] = q / levels
            err = v - q
    return wq

def blend_with_dither(images):
    h, w = images[0].shape
    acc = np.zeros((h, w), dtype=np.float32)
    for i in range(1, len(images)):
        A = images[i-1]
        B = images[i]

        #── 1) 連続 SDF 重み
        binB = (B > 85).astype(np.uint8) * 255
        binA = (A > 85).astype(np.uint8) * 255
        sdfB = cv2.distanceTransform(binB, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        sdfA = cv2.distanceTransform(255 - binA, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        w = sdfB / (sdfA + sdfB + 1e-6)

        #── 2) 水平ぼかし
        w = cv2.blur(w, (2*BLUR_RADIUS+1, 1))

        #── 3) 水平エラーディフューズ量子化
        wq = horizontal_diffusion_quantize(w, LEVELS)

        #── 4) 合成
        blend = A * (1.0 - wq) + B * wq
        acc += blend

    # フレームペア数で平均化
    result = acc / (len(images) - 1)
    return np.clip(result, 0, 255).astype(np.uint8)


if __name__ == "__main__":
    imgs   = load_images("./Assets")
    sample = cv2.imread("./sample.png", cv2.IMREAD_GRAYSCALE)

    out = blend_with_dither(imgs)
    cv2.imwrite("sdf_combined_final.png", out)

    diff = cv2.absdiff(out, sample)
    print(f"🔍 完全一致: {np.mean(diff==0)*100:.2f}%")
    print(f"🟡 ±1一致:   {np.mean(diff<=1)*100:.2f}%")
    print(f"📊 平均差分: {np.mean(diff):.2f}")
    print(f"📈 最大差分: {np.max(diff)}")
