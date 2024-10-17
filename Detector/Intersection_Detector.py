# -*- coding: utf-8 -*-

import cv2
import numpy as np
import tkinter as tk
from tkinter import filedialog, colorchooser, messagebox


class IntersectionDetector:

    def __init__(self, image_path, detection_color, intersection_color, threshold=50, min_line_length=100, max_line_gap=10, canny_threshold1=50, canny_threshold2=150):
        self.image_path = image_path
        self.detection_color = detection_color
        self.intersection_color = intersection_color
        self.threshold = threshold  # Hough変換のしきい値
        self.min_line_length = min_line_length  # Hough変換の最小ライン長
        self.max_line_gap = max_line_gap  # Hough変換の最大ギャップ
        self.canny_threshold1 = canny_threshold1  # Cannyのしきい値1
        self.canny_threshold2 = canny_threshold2  # Cannyのしきい値2
        self.image = None
        self.intersections = []


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

        #_, binary = cv2.threshold(gray, self.threshold, 255, cv2.THRESH_BINARY_INV)

        lines = cv2.HoughLinesP(edges, 1, np.pi / 180, threshold=self.threshold, minLineLength=self.min_line_length, maxLineGap=self.max_line_gap)

        print("threshold => {}".format(self.threshold))
        print("min_line_length => {}".format(self.min_line_length))
        print("max_line_gap => {}".format(self.max_line_gap))

        print("min_line_length => {}".format(self.min_line_length))
        print("max_line_gap => {}".format(self.max_line_gap))

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
                        self.intersections.append(intersect)
        else:
            print("not found lines")


    def calculate_intersection(self, line1, line2):
        x1, y1, x2, y2 = line1
        x3, y3, x4, y4 = line2

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


    def highlight_intersections(self):
        for x, y in self.intersections:
            cv2.circle(self.image, (x, y), 5, self.intersection_color, -1)


    def save_image(self, output_path):
        cv2.imwrite(output_path, self.image)


class Application(tk.Tk):

    WINDOW_TITLE = "Intersection Detector"
    MODULE_VERSION = "1.0"

    def __init__(self):
        super().__init__()
        self.title(self.WINDOW_TITLE + " v" + self.MODULE_VERSION)
        self.geometry("400x600")

        self.detection_color = (0, 0, 0)  # 検出ラインの初期色（黒）
        self.intersection_color = (0, 0, 255)  # 交差点の初期色（赤）
        self.threshold = 50  # Hough変換のしきい値
        self.min_line_length = 100  # 最小ライン長
        self.max_line_gap = 10  # ライン間の最大ギャップ
        self.canny_threshold1 = 50  # Cannyのしきい値1
        self.canny_threshold2 = 150  # Cannyのしきい値2
        self.image_path = None  # 画像のパス

        tk.Label(self, text="Choose an image:").pack(pady=10)
        tk.Button(self, text="Load Image", command=self.load_image).pack(pady=5)

        tk.Label(self, text="Detection Color:").pack(pady=5)
        tk.Button(self, text="Choose Detection Color", command=self.choose_detection_color).pack(pady=5)
        self.detection_color_label = tk.Label(self, text=f"Current: {self.detection_color}")
        self.detection_color_label.pack(pady=5)

        tk.Label(self, text="Intersection Color:").pack(pady=5)
        tk.Button(self, text="Choose Intersection Color", command=self.choose_intersection_color).pack(pady=5)
        self.intersection_color_label = tk.Label(self, text=f"Current: {self.intersection_color}")
        self.intersection_color_label.pack(pady=5)

        tk.Label(self, text="Threshold:").pack(pady=5)
        self.threshold_slider = tk.Scale(self, from_=10, to=200, orient=tk.HORIZONTAL)
        self.threshold_slider.set(self.threshold)
        self.threshold_slider.pack(pady=5)

        tk.Label(self, text="Min Line Length:").pack(pady=5)
        self.min_line_length_slider = tk.Scale(self, from_=10, to=500, orient=tk.HORIZONTAL)
        self.min_line_length_slider.set(self.min_line_length)
        self.min_line_length_slider.pack(pady=5)

        tk.Label(self, text="Max Line Gap:").pack(pady=5)
        self.max_line_gap_slider = tk.Scale(self, from_=0, to=100, orient=tk.HORIZONTAL)
        self.max_line_gap_slider.set(self.max_line_gap)
        self.max_line_gap_slider.pack(pady=5)

        tk.Label(self, text="Canny Threshold 1:").pack(pady=5)
        self.canny_threshold1_slider = tk.Scale(self, from_=10, to=255, orient=tk.HORIZONTAL)
        self.canny_threshold1_slider.set(self.canny_threshold1)
        self.canny_threshold1_slider.pack(pady=5)

        tk.Label(self, text="Canny Threshold 2:").pack(pady=5)
        self.canny_threshold2_slider = tk.Scale(self, from_=10, to=255, orient=tk.HORIZONTAL)
        self.canny_threshold2_slider.set(self.canny_threshold2)
        self.canny_threshold2_slider.pack(pady=5)

        #交差点検出
        tk.Button(self, text="Detect Intersections", command=self.detect_intersections).pack(pady=20)


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


    def detect_intersections(self):
        if not self.image_path:
            messagebox.showwarning("Warning", "Please load an image first.")
            return

        try:
            self.threshold = int(self.threshold_slider.get())
            self.min_line_length = int(self.min_line_length_slider.get())
            self.max_line_gap = int(self.max_line_gap_slider.get())
        except ValueError:
            messagebox.showwarning("Warning", "Please enter valid numbers for the threshold and line parameters.")
            return

        detector = IntersectionDetector(
            self.image_path,
            self.detection_color,
            self.intersection_color,
            self.threshold,
            self.min_line_length,
            self.max_line_gap
        )

        detector.load_image()
        detector.find_intersections()
        detector.highlight_intersections()
        output_path = filedialog.asksaveasfilename(defaultextension=".png", filetypes=[("PNG files", "*.png")])

        if output_path:
            detector.save_image(output_path)
            messagebox.showinfo("Success", "Intersections highlighted and image saved.")


if __name__ == "__main__":
    app = Application()
    app.mainloop()


