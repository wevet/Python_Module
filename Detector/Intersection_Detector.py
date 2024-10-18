# -*- coding: utf-8 -*-

from PIL import Image, ImageTk, ImageOps
import cv2
import numpy as np
import tkinter as tk
from tkinter import filedialog, colorchooser, messagebox
import math
import tensorflow as tf
from tensorflow.keras.layers import Conv2D, MaxPooling2D, Flatten, Dense
from tensorflow.keras.optimizers import Adam


"""
機械学習モデル実行時以下のエラーがでる
2024-10-18 16:10:15.001374: 
I tensorflow/core/util/port.cc:153] oneDNN custom operations are on. 
You may see slightly different numerical results due to floating-point round-off errors from different computation orders. 
To turn them off, set the environment variable TF_ENABLE_ONEDNN_OPTS=0.

TensorFlowがoneDNN（Deep Neural Network Library）を使用している際の情報メッセージ
このメッセージ自体はエラーではなく、TensorFlowの挙動に関する通知
"""


class IntersectionDetector:

    def __init__(self, image_path,
                 detection_color, intersection_color,
                 threshold=50, min_line_length=100, max_line_gap=10,
                 canny_threshold1=50, canny_threshold2=150,
                 angle_threshold=10, threshold_distance=10, mask_range=30):

        self.image_path = image_path
        self.detection_color = detection_color
        self.intersection_color = intersection_color
        self.threshold = threshold  # Hough変換のしきい値
        self.min_line_length = min_line_length  # Hough変換の最小ライン長
        self.max_line_gap = max_line_gap  # Hough変換の最大ギャップ
        self.canny_threshold1 = canny_threshold1  # Cannyのしきい値1
        self.canny_threshold2 = canny_threshold2  # Cannyのしきい値2
        self.angle_threshold = angle_threshold
        self.threshold_distance = threshold_distance
        self.mask_range = mask_range  # ぼかしのしきい値

        self.image = None
        self.intersections = []
        self.intersections_with_lines = []

        self.K_ALPHA = 0.8

        self.model = self.build_model()

    def build_model(self):
        """シンプルなCNNモデルを構築"""
        model = tf.keras.Sequential([
            Conv2D(32, (3, 3), activation='relu', input_shape=(128, 128, 1)),
            MaxPooling2D((2, 2)),
            Conv2D(64, (3, 3), activation='relu'),
            MaxPooling2D((2, 2)),
            Flatten(),
            Dense(64, activation='relu'),
            Dense(1, activation='sigmoid')  # 出力は交差点か否かを判別
        ])
        model.compile(optimizer=Adam(learning_rate=0.001), loss='binary_crossentropy', metrics=['accuracy'])
        return model

    def train_model(self, x_train, y_train, epochs=10, batch_size=32):
        """モデルをトレーニング"""
        self.model.fit(x_train, y_train, epochs=epochs, batch_size=batch_size)

    def predict_intersections(self, image):
        """トレーニングされたモデルを用いて交差点を予測"""
        processed_image = self.preprocess_image(image)
        prediction = self.model.predict(processed_image)
        return prediction > 0.5

    def preprocess_image(self, image):
        """画像を前処理し、モデルに入力可能な形に変換"""
        image_resized = cv2.resize(image, (128, 128))
        image_gray = cv2.cvtColor(image_resized, cv2.COLOR_BGR2GRAY)
        image_normalized = image_gray / 255.0  # 正規化
        return image_normalized.reshape(1, 128, 128, 1)

    def extract_region(self, x, y, size=32):
        """画像から指定した座標の周囲の領域を切り出す"""
        half_size = size // 2
        x_start = max(0, x - half_size)
        x_end = min(self.image.shape[1], x + half_size)
        y_start = max(0, y - half_size)
        y_end = min(self.image.shape[0], y + half_size)

        # 領域を切り出し、モデルに入力できる形に変換
        region = self.image[y_start:y_end, x_start:x_end]
        return region

    def load_image(self):
        self.image = cv2.imread(self.image_path)


    def find_intersections(self):
        if self.image is None:
            raise ValueError("Image not loaded")

        # グレースケールに変換
        gray = cv2.cvtColor(self.image, cv2.COLOR_BGR2GRAY)
        # ノイズ軽減のためにGaussianブラーを適用
        gray = cv2.GaussianBlur(gray, (5, 5), 0)
        # Cannyエッジ検出を使用してエッジを抽出
        edges = cv2.Canny(gray, self.canny_threshold1, self.canny_threshold2, apertureSize=3)
        # Hough変換でラインを検出
        lines = cv2.HoughLinesP(edges, 1, np.pi / 180, threshold=self.threshold, minLineLength=self.min_line_length, maxLineGap=self.max_line_gap)

        print("------------------read your setting parameters------------------")
        print("threshold => {}".format(self.threshold))
        print("min_line_length => {}".format(self.min_line_length))
        print("max_line_gap => {}".format(self.max_line_gap))
        print("canny_threshold1 => {}".format(self.canny_threshold1))
        print("canny_threshold2 => {}".format(self.canny_threshold2))
        print("angle_threshold => {}".format(self.angle_threshold))
        print("threshold_distance => {}".format(self.threshold_distance))
        print("mask_range => {}".format(self.mask_range))

        # Visualize detected lines for debugging
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line[0]
                cv2.line(self.image, (x1, y1), (x2, y2), self.detection_color, 2)

        # Find intersections
        if lines is not None:
            for i in range(len(lines)):
                for j in range(i + 1, len(lines)):
                    line1 = lines[i][0]
                    line2 = lines[j][0]

                    # Calculate intersection
                    intersect = self.calculate_intersection(line1, line2)
                    if intersect:
                        x, y = intersect
                        region = self.extract_region(x, y)

                        # 学習モデルを使って交差点を予測
                        if self.predict_intersections(region):
                            self.intersections.append(intersect)
                            self.intersections_with_lines.append((intersect, (line1, line2)))

                        """
                        self.intersections.append(intersect)
                        self.intersections_with_lines.append((intersect, (line1, line2)))
                        """

            # 交差点が近すぎる場合にフィルタリングを行う
            self.filter_close_intersections()
        else:
            print("not found lines")

    def filter_close_intersections(self):
        local_filtered_intersections = []

        for x, y in self.intersections:
            if not any(math.dist((x, y), (fx, fy)) < self.threshold_distance for fx, fy in local_filtered_intersections):
                local_filtered_intersections.append((x, y))

        self.intersections = local_filtered_intersections

    @staticmethod
    def calculate_angle(line1, line2):
        """線分の角度を計算"""
        def slope(x1, y1, x2, y2):
            return (y2 - y1) / (x2 - x1) if x2 - x1 != 0 else float('inf')

        # 各線分の傾きを計算
        slope1 = slope(line1[0], line1[1], line1[2], line1[3])
        slope2 = slope(line2[0], line2[1], line2[2], line2[3])

        # 角度計算時にゼロ除算を回避
        denominator = (1 + slope2 * slope1)
        if abs(denominator) < 1e-6:  # 小さな値に対してチェック
            return 90.0  # 平行または垂直に近い場合は90度を返す

        # 傾きの違いから角度を計算
        angle = math.atan(abs((slope2 - slope1) / denominator))
        return angle * (180.0 / math.pi)

    def calculate_intersection(self, line1, line2):
        x1, y1, x2, y2 = line1
        x3, y3, x4, y4 = line2

        # 線分の角度を計算
        angle = self.calculate_angle(line1, line2)
        if angle < self.angle_threshold:

            return None

        # Using the new intersection formula
        denominator = (y4 - y3) * (x2 - x1) - (x4 - x3) * (y2 - y1)
        if denominator == 0:
            return None
        nua = (x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3)
        nub = (x2 - x1) * (y1 - y3) - (y2 - y1) * (x1 - x3)
        ua = nua / denominator
        ub = nub / denominator

        if 0 <= ua <= 1 and 0 <= ub <= 1:
            x = x1 + ua * (x2 - x1)
            y = y1 + ua * (y2 - y1)

            if 0 <= x < self.image.shape[1] and 0 <= y < self.image.shape[0]:
                return int(x), int(y)
        return None


    """
    交差検出　基本機能
    """
    def highlight_intersections_with_blur(self):
        # ぼかし範囲やマスクのサイズを柔軟に調整
        current_range = self.mask_range
        # ぼかしのカーネルサイズは奇数にする必要がある
        blur_strength = self.mask_range if self.mask_range % 2 == 1 else self.mask_range + 1
        # ぼかしの濃さを調整するための係数 alpha の値が大きいほど、ぼかし効果が強く反映され、小さい値にするとぼかしの影響が弱くなる

        print("blur_strength => {}".format(blur_strength))

        for x, y in self.intersections:
            # マスク用の画像を作成 (全てゼロで初期化)
            mask = np.zeros(self.image.shape[:2], dtype=np.uint8)

            # 上下左右のマスク範囲を設定
            x_start = max(0, x - current_range)
            x_end = min(self.image.shape[1], x + current_range)
            y_start = max(0, y - current_range)
            y_end = min(self.image.shape[0], y + current_range)

            # マスク範囲を設定
            cv2.rectangle(mask, (x_start, y_start), (x_end, y_end), 255, -1)

            # 元画像をぼかし
            blurred_image = cv2.GaussianBlur(self.image, (blur_strength, blur_strength), 0)

            # ぼかし画像と元画像を合成
            combined_image = self.image.copy()
            combined_image[mask == 255] = cv2.addWeighted(self.image, 1 - self.K_ALPHA, blurred_image, self.K_ALPHA, 0)[mask == 255]
            # 交差点を赤で塗りつぶし
            cv2.circle(combined_image, (x, y), 5, self.intersection_color, -1)
            # 交差点のぼかしが適用された画像を更新
            self.image = combined_image

    def highlight_intersections_with_directional_blur(self):
        current_range = self.mask_range
        blur_strength = self.mask_range if self.mask_range % 2 == 1 else self.mask_range + 1

        print("blur_strength => {}".format(blur_strength))

        combined_image = self.image.copy()

        for (x, y), (line1, line2) in self.intersections_with_lines:

            # 各線の傾きを計算
            slope1 = (line1[3] - line1[1]) / (line1[2] - line1[0]) if line1[2] - line1[0] != 0 else float('inf')
            slope2 = (line2[3] - line2[1]) / (line2[2] - line2[0]) if line2[2] - line2[0] != 0 else float('inf')

            # マスク用の画像を作成 (全てゼロで初期化)
            mask = np.zeros(self.image.shape[:2], dtype=np.uint8)

            # 交差の方向によってぼかし範囲を決定
            # 水平と垂直の交差 (十字交差)
            if abs(slope1) < 0.1 and abs(slope2) > 10:
                x_start, x_end = x - current_range, x + current_range
                y_start, y_end = y - current_range, y + current_range

            # 垂直と水平の交差 (逆十字交差)
            elif abs(slope1) > 10 and abs(slope2) < 0.1:
                x_start, x_end = x - current_range, x + current_range
                y_start, y_end = y - current_range, y + current_range

            # 斜めの交差 (X型)
            elif slope1 * slope2 < 0:
                x_start, x_end = x - current_range, x + current_range
                y_start, y_end = y - current_range, y + current_range

            # T字の交差 (左右下)
            elif abs(slope1) < 0.1 and abs(slope2) > 0.1 and (y > line1[1] and y > line1[3]):
                x_start, x_end = x - current_range, x + current_range
                y_start, y_end = y, y + current_range
            # T字の交差 (左右上)
            elif abs(slope1) < 0.1 and abs(slope2) > 0.1 and (y < line1[1] and y < line1[3]):
                x_start, x_end = x - current_range, x + current_range
                y_start, y_end = y - current_range, y
            # T字の交差 (上下右)
            elif abs(slope1) > 10 and abs(slope2) < 0.1 and (x < line2[0] and x < line2[2]):
                x_start, x_end = x, x + current_range
                y_start, y_end = y - current_range, y + current_range
            # T字の交差 (上下左)
            elif abs(slope1) > 10 and abs(slope2) < 0.1 and (x > line2[0] and x > line2[2]):
                x_start, x_end = x - current_range, x
                y_start, y_end = y - current_range, y + current_range

            # Y字の交差（斜めと下の交差）
            elif slope1 * slope2 < 0 and (y < line1[1] and y < line1[3]):
                x_start, x_end = x - current_range, x + current_range
                y_start, y_end = y, y + current_range

            # Y字の交差（斜めと上の交差）
            elif slope1 * slope2 < 0 and (y > line1[1] and y > line1[3]):
                x_start, x_end = x - current_range, x + current_range
                y_start, y_end = y - current_range, y

            # Y字の交差（斜めと左の交差）
            elif slope1 * slope2 < 0 and (x > line2[0] and x > line2[2]):
                x_start, x_end = x - current_range, x
                y_start, y_end = y - current_range, y + current_range

            # Y字の交差（斜めと右の交差）
            elif slope1 * slope2 < 0 and (x < line2[0] and x < line2[2]):
                x_start, x_end = x, x + current_range
                y_start, y_end = y - current_range, y + current_range
            else:
                continue

            # マスクを矩形範囲で設定
            cv2.rectangle(mask, (x_start, y_start), (x_end, y_end), 255, -1)
            # 元画像をぼかし
            blurred_image = cv2.GaussianBlur(self.image, (blur_strength, blur_strength), 0)
            # マスクを使って、交差点周辺のみ合成
            combined_image[mask == 255] = cv2.addWeighted(self.image, 1 - self.K_ALPHA,
                                                          blurred_image, self.K_ALPHA, 0)[mask == 255]

            # 交差点を塗りつぶし
            cv2.circle(self.image, (x, y), 5, self.intersection_color, -1)

        self.image = combined_image

    def save_image(self, output_path):
        cv2.imwrite(output_path, self.image)

    def show_preview(self, canvas, width=1024, height=1024):
        # OpenCVのBGR画像をRGBに変換
        image_rgb = cv2.cvtColor(self.image, cv2.COLOR_BGR2RGB)

        image_pil = Image.fromarray(image_rgb)
        original_width, original_height = image_pil.size

        # ウィンドウのサイズに収めるために画像をリサイズ
        max_width, max_height = width, height  # キャンバスのサイズに合わせる
        image_pil = ImageOps.contain(image_pil, (max_width, max_height))

        # リサイズ後の画像サイズを取得
        new_width, new_height = image_pil.size

        # キャンバスサイズをリサイズ後の画像サイズに合わせて変更
        canvas.config(width=new_width, height=new_height)

        # Tkinterで表示できる形式に変換
        image_tk = ImageTk.PhotoImage(image_pil)

        # キャンバスをクリアしてから新しい画像を描画
        canvas.delete("all")

        # キャンバスをクリアして、リサイズ後の画像をキャンバスに描画
        canvas.create_image(0, 0, anchor=tk.NW, image=image_tk)
        canvas.image = image_tk


class Application(tk.Tk):

    WINDOW_TITLE = "Intersection Detector"
    MODULE_VERSION = "1.0"
    IMAGE_WINDOW_TITLE = "Image Window"

    def __init__(self):
        super().__init__()
        self.title(self.WINDOW_TITLE + " v" + self.MODULE_VERSION)
        self.geometry("400x800")

        self.image_window = None
        self.canvas = None
        self.image_path = None  # 画像のパス

        self.detection_color = (0, 0, 0)  # 検出ラインの初期色（黒）
        self.intersection_color = (255, 0, 0)  # 交差点の初期色（赤）
        self.threshold = 50  # Hough変換のしきい値
        self.min_line_length = 100  # 最小ライン長
        self.max_line_gap = 20  # ライン間の最大ギャップ
        self.canny_threshold1 = 50  # Cannyのしきい値1
        self.canny_threshold2 = 150  # Cannyのしきい値2
        self.angle_threshold = 10  # 2次元返還時の角度のしきい値
        self.threshold_distance = 10  # 最小距離しきい値(px)
        self.mask_range = 30  # ぼかしのしきい値

        # preview window size
        self.K_PREVIEW_SIZE = [1000, 800]


        tk.Label(self, text="Choose an image:").grid(row=0, column=0, padx=10, pady=10)
        tk.Button(self, text="Load Image", command=self.load_image).grid(row=0, column=1, padx=10, pady=10)

        tk.Label(self, text="Detection Color:").grid(row=1, column=0, padx=10, pady=5)
        tk.Button(self, text="Choose Detection Color", command=self.choose_detection_color).grid(row=1, column=1, padx=10, pady=5)
        self.detection_color_label = tk.Label(self, text=f"Current: {self.detection_color}")
        self.detection_color_label.grid(row=2, column=0, columnspan=2, padx=10, pady=5)

        tk.Label(self, text="Intersection Color:").grid(row=3, column=0, padx=10, pady=5)
        tk.Button(self, text="Choose Intersection Color", command=self.choose_intersection_color).grid(row=3, column=1, padx=10, pady=5)
        self.intersection_color_label = tk.Label(self, text=f"Current: {self.intersection_color}")
        self.intersection_color_label.grid(row=4, column=0, columnspan=2, padx=10, pady=5)

        tk.Label(self, text="Hough Transform Threshold:").grid(row=5, column=0, padx=10, pady=5)
        self.threshold_slider = tk.Scale(self, from_=10, to=200, orient=tk.HORIZONTAL)
        self.threshold_slider.set(self.threshold)
        self.threshold_slider.grid(row=5, column=1, padx=10, pady=5)

        tk.Label(self, text="Min Line Length:").grid(row=6, column=0, padx=10, pady=5)
        self.min_line_length_slider = tk.Scale(self, from_=10, to=500, orient=tk.HORIZONTAL)
        self.min_line_length_slider.set(self.min_line_length)
        self.min_line_length_slider.grid(row=6, column=1, padx=10, pady=5)

        tk.Label(self, text="Max Line Gap:").grid(row=7, column=0, padx=10, pady=5)
        self.max_line_gap_slider = tk.Scale(self, from_=0, to=100, orient=tk.HORIZONTAL)
        self.max_line_gap_slider.set(self.max_line_gap)
        self.max_line_gap_slider.grid(row=7, column=1, padx=10, pady=5)

        tk.Label(self, text="Canny Threshold 1:").grid(row=8, column=0, padx=10, pady=5)
        self.canny_threshold1_slider = tk.Scale(self, from_=10, to=255, orient=tk.HORIZONTAL)
        self.canny_threshold1_slider.set(self.canny_threshold1)
        self.canny_threshold1_slider.grid(row=8, column=1, padx=10, pady=5)

        tk.Label(self, text="Canny Threshold 2:").grid(row=9, column=0, padx=10, pady=5)
        self.canny_threshold2_slider = tk.Scale(self, from_=10, to=255, orient=tk.HORIZONTAL)
        self.canny_threshold2_slider.set(self.canny_threshold2)
        self.canny_threshold2_slider.grid(row=9, column=1, padx=10, pady=5)

        tk.Label(self, text="Angle Threshold (degrees):").grid(row=10, column=0, padx=10, pady=5)
        self.angle_threshold_slider = tk.Scale(self, from_=0, to=90, orient=tk.HORIZONTAL)
        self.angle_threshold_slider.set(self.angle_threshold)
        self.angle_threshold_slider.grid(row=10, column=1, padx=10, pady=5)

        tk.Label(self, text="Threshold Distance (px):").grid(row=11, column=0, padx=10, pady=5)
        self.threshold_distance_slider = tk.Scale(self, from_=1, to=50, orient=tk.HORIZONTAL)
        self.threshold_distance_slider.set(self.threshold_distance)
        self.threshold_distance_slider.grid(row=11, column=1, padx=10, pady=5)

        tk.Label(self, text="Mask Range:").grid(row=12, column=0, padx=10, pady=5)
        self.mask_range_slider = tk.Scale(self, from_=0, to=100, orient=tk.HORIZONTAL)
        self.mask_range_slider.set(self.mask_range)
        self.mask_range_slider.grid(row=12, column=1, padx=10, pady=5)

        # 交差点検出ボタン
        tk.Button(self, text="Detect Intersections", command=self.detect_intersections).grid(row=13, column=0, columnspan=2, padx=20, pady=10)
        # プレビューボタン
        tk.Button(self, text="Show Preview", command=self.show_preview).grid(row=14, column=0, columnspan=2, padx=20, pady=10)

    def open_image_window(self, width=1024, height=1024):
        """キャンバス用の別ウィンドウを開く"""
        self.image_window = tk.Toplevel(self)
        self.image_window.title(self.IMAGE_WINDOW_TITLE)
        self.canvas = tk.Canvas(self.image_window, width=width, height=height)
        self.canvas.pack()

    def load_image(self):
        self.image_path = filedialog.askopenfilename(filetypes=[("Image files", "*.png;*.jpg;*.jpeg")])
        if self.image_path:
            messagebox.showinfo("Image Loaded", f"Image loaded: {self.image_path}")

    def choose_detection_color(self):
        color = colorchooser.askcolor()[0]
        if color:
            self.detection_color = (int(color[2]), int(color[1]), int(color[0]))
            self.detection_color_label.config(text=f"Current: {self.detection_color}")

    def choose_intersection_color(self):
        color = colorchooser.askcolor()[0]
        if color:
            self.intersection_color = (int(color[2]), int(color[1]), int(color[0]))
            self.intersection_color_label.config(text=f"Current: {self.intersection_color}")

    def _get_instance(self):
        if not self.image_path:
            messagebox.showwarning("Warning", "Please load an image first.")
            return None

        try:
            self.threshold = int(self.threshold_slider.get())
            self.min_line_length = int(self.min_line_length_slider.get())
            self.max_line_gap = int(self.max_line_gap_slider.get())
            self.canny_threshold1 = int(self.canny_threshold1_slider.get())
            self.canny_threshold2 = int(self.canny_threshold2_slider.get())
            self.angle_threshold = int(self.angle_threshold_slider.get())
            self.threshold_distance = int(self.threshold_distance_slider.get())
            self.mask_range = int(self.mask_range_slider.get())

        except ValueError:
            messagebox.showwarning("Warning", "Please enter valid numbers for the threshold and line parameters.")
            return None

        detector = IntersectionDetector(
            self.image_path,
            self.detection_color, self.intersection_color,
            self.threshold, self.min_line_length, self.max_line_gap,
            self.canny_threshold1, self.canny_threshold2,
            self.angle_threshold, self.threshold_distance,
            self.mask_range)

        return detector

    def detect_intersections(self):
        detector = self._get_instance()
        if detector:
            detector.load_image()
            detector.find_intersections()
            detector.highlight_intersections_with_directional_blur()
            output_path = filedialog.asksaveasfilename(defaultextension=".png", filetypes=[("PNG files", "*.png")])

            if output_path:
                detector.save_image(output_path)
                messagebox.showinfo("Success", "Intersections highlighted and image saved.")

    def show_preview(self):
        detector = self._get_instance()
        if detector:
            detector.load_image()
            detector.find_intersections()
            detector.highlight_intersections_with_directional_blur()

            # 既存のウィンドウが存在している場合は閉じる
            if self.image_window is not None and self.image_window.winfo_exists():
                self.image_window.destroy()

            self.open_image_window(width=self.K_PREVIEW_SIZE[0], height=self.K_PREVIEW_SIZE[1])
            detector.show_preview(self.canvas, width=self.K_PREVIEW_SIZE[0], height=self.K_PREVIEW_SIZE[1])



if __name__ == "__main__":
    app = Application()
    app.mainloop()


