import cv2
import numpy as np

# ファイルパスを指定
gen_path = "sdf_combined.png"
sample_path = "sample.png"

# グレースケールで読み込み
img_gen = cv2.imread(gen_path, cv2.IMREAD_GRAYSCALE)
img_sample = cv2.imread(sample_path, cv2.IMREAD_GRAYSCALE)

# サイズ調整（念のため）
if img_gen.shape != img_sample.shape:
    img_sample = cv2.resize(img_sample, (img_gen.shape[1], img_gen.shape[0]))

# 差分計算
diff = cv2.absdiff(img_gen, img_sample)

# 指標出力
total = diff.size
exact_match = np.sum(diff == 0)
near_match = np.sum(diff <= 1)

print("🔍 一致率（完全一致）:", round(exact_match / total * 100, 2), "%")
print("🟡 一致率（±1までOK）:", round(near_match / total * 100, 2), "%")
print("📊 平均差分:", round(np.mean(diff), 2))
print("📈 最大差分:", np.max(diff))

