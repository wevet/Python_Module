import cv2
import numpy as np
import os
import matplotlib.pyplot as plt
from PIL import Image


# 量子化の段階数（4096 にすると最終的に 12bit 相当の階調。必要に応じて 16384 などに増やしても OK）
LEVELS = 256
# 水平ブラー（cv2.blur）の半径：（2*RADIUS+1）×(2*RADIUS+1) カーネルを使う
RADIUS = 1
# トレンド除去のために左右何割を利用するか
EDGE_RATIO = 0.1

SDF_BLUR = 100        # SDF ブラー半径（もちろん大きくしても OK）
TRANS_BLUR = 100      # 遷移帯域を広げるための大きなブラー半径
ALPHA = 0.7      # 遷移率重み vs ランプ重みのミックス比 (0.0→ランプのみ,1.0→SDFのみ)



def show_diff_heatmap(output, sample, fname="diff_heatmap.png"):
    diff = cv2.absdiff(output, sample).astype(np.float32)
    # 正規化して 0..1 に
    diff_norm = diff / diff.max()
    plt.imshow(diff_norm, cmap='hot', vmin=0, vmax=1)
    plt.colorbar(label='Normalized Absolute Difference')
    plt.title("Difference Heatmap")
    plt.axis('off')
    plt.savefig(fname, bbox_inches='tight', pad_inches=0)
    print(f"▶️ ヒートマップを {fname} に保存しました")


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
    tol = 1  # ±1 を許容
    acc_rate = np.mean(diff <= tol) * 100
    print(f"🟡 ±{tol}以内一致: {acc_rate:.2f}%")
    print(f"📊 平均差分: {np.mean(diff):.2f}")
    print(f"📈 最大差分: {np.max(diff)}")

    return diff



def blend_with_quantized_global(images, levels=1, trans_blur=1):
    """
    a~h のグレースケール画像リスト images を受け取り、
    φ2/(φ2−φ1) のペアごと遷移率を累積し、
    平均→グローバル量子化（levels=255）→軽いガウシアンブラー→
    明度を1段階上げる → 'sdf_combined.png' に出力します。
    """
    # 1) パラメータ固定
    #levels = 255
    h, w = images[0].shape
    acc = np.zeros((h, w), dtype=np.float32)
    k = (2*trans_blur+1, 2*trans_blur+1)

    # 2) 符号付き距離場 φ を作るヘルパー
    def signed_sdf(bin_img):
        d_out = cv2.distanceTransform(255 - bin_img, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        d_in = cv2.distanceTransform(bin_img, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
        return d_in - d_out

    # 3) 各ペア prev->curr で遷移率 w を計算し累積
    for i in range(1, len(images)):
        prev = images[i - 1].astype(np.float32)
        curr = images[i].astype(np.float32)

        b1 = (prev > 128).astype(np.uint8)*255
        b2 = (curr > 128).astype(np.uint8)*255

        sigma_1 = signed_sdf(b1)
        sigma_2 = signed_sdf(b2)

        denom = (sigma_2 - sigma_1) + 1e-6
        w_raw = sigma_2 / denom
        np.clip(w_raw, 0.0, 1.0, out=w_raw)

        w = cv2.blur(w_raw.astype(np.float32), k)
        acc += prev * (1.0 - w) + curr * w

    # 4) 平均化 → 0..1 正規化
    n_pairs = len(images) - 1
    avg = acc / float(n_pairs)
    norm = np.clip(avg / 255.0, 0.0, 1.0)

    # 5) グローバル量子化 → 0..255 に戻す
    q = np.floor(norm * levels + 0.5)
    np.clip(q, 0, levels, out=q)
    out = (q / float(levels) * 255.0).astype(np.uint8)

    # 6) 軽いガウシアンブラーでバンディング抑制
    out_smooth = cv2.GaussianBlur(out, (0, 0), sigmaX=0.8, sigmaY=0.8)

    return out_smooth



if __name__ == "__main__":
    images = load_images("./Assets")
    sample = cv2.imread("./sdf_tool/sdf.png", cv2.IMREAD_GRAYSCALE)
    result = blend_with_quantized_global(images, levels=LEVELS)

    cv2.imwrite("sdf_combined.png", result)
    evaluate(result, sample)


    show_diff_heatmap(result, sample)


