import cv2
import numpy as np
import tkinter as tk
from tkinter import filedialog, Scale, Label, Frame
from PIL import Image, ImageTk


class BuildingTransformerGUI:

    def __init__(self, master):
        self.master = master
        self.master.title("Building Shape Transformer")

        self.image_path = None
        self.original_image = None
        self.display_image = None
        self.edges = None
        self.thresh_value = 100
        self.transform_strength = 0
        self.transform_direction = 0
        self.transform_part = 0

        # 変形後の部分ごとの保持用画像
        self.transformed_top = None
        self.transformed_bottom = None

        # 画像の最大表示サイズ
        self.max_width = 1000
        self.max_height = 800

        # UI要素の作成
        self.create_widgets()

    def create_widgets(self):
        # フレーム作成
        self.button_frame = Frame(self.master)
        self.button_frame.pack()

        # 画像選択ボタン
        self.select_button = tk.Button(self.button_frame, text="Select Image", command=self.select_image)
        self.select_button.grid(row=0, column=0)

        # しきい値調整用のスライダー
        self.threshold_slider = Scale(self.master, from_=0, to=255, orient='horizontal', label='Edge Threshold', command=self.update_edges)
        self.threshold_slider.set(self.thresh_value)
        self.threshold_slider.pack()

        # 変形強度用のスライダー
        self.strength_slider = Scale(self.master, from_=0, to=100, orient='horizontal', label='Transform Strength', command=self.update_transform)
        self.strength_slider.set(self.transform_strength)
        self.strength_slider.pack()

        # 変形方向用のスライダー
        self.direction_slider = Scale(self.master, from_=-100, to=100, orient='horizontal', label='Transform Direction', command=self.update_transform)
        self.direction_slider.set(self.transform_direction)
        self.direction_slider.pack()

        # 変形対象部位のスライダー
        self.part_slider = Scale(self.master, from_=0, to=1, orient='horizontal', label='Transform Part (0=Top, 1=Bottom)', command=self.update_transform)
        self.part_slider.set(self.transform_part)
        self.part_slider.pack()

        # プレビューラベル
        self.preview_label = Label(self.master)
        self.preview_label.pack()

    def select_image(self):
        # 画像ファイルの選択
        self.image_path = filedialog.askopenfilename(title="Select an image", filetypes=[("Image files", "*.jpg;*.png;*.jpeg")])
        if self.image_path:
            self.original_image = cv2.imread(self.image_path)
            self.display_image = self.resize_image(self.original_image)
            self.reset_transformed_parts()
            self.update_edges(self.thresh_value)

    def resize_image(self, image):
        # 画像が最大幅と高さを超える場合にリサイズ
        height, width = image.shape[:2]
        scale = min(self.max_width / width, self.max_height / height)

        if scale < 1.0:
            new_width = int(width * scale)
            new_height = int(height * scale)
            resized_image = cv2.resize(image, (new_width, new_height), interpolation=cv2.INTER_AREA)
            return resized_image
        return image

    def reset_transformed_parts(self):
        # 変形後の部分を初期化
        self.transformed_top = None
        self.transformed_bottom = None

    def update_edges(self, value):
        # エッジ検出し、プレビューの更新
        self.thresh_value = int(value)
        if self.display_image is not None:
            gray = cv2.cvtColor(self.display_image, cv2.COLOR_BGR2GRAY)
            self.edges = cv2.Canny(gray, self.thresh_value, self.thresh_value * 2)
            self.processed_image = self.display_image.copy()
            self.update_preview()

    def update_transform(self, _):
        # スライダー値を取得して変形を適用
        self.transform_strength = self.strength_slider.get()
        self.transform_direction = self.direction_slider.get()
        self.transform_part = self.part_slider.get()
        self.apply_transform()

    def apply_transform(self):
        # 変形の適用
        if self.edges is not None:
            contours, _ = cv2.findContours(self.edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

            if contours:
                largest_contour = max(contours, key=cv2.contourArea)
                x, y, w, h = cv2.boundingRect(largest_contour)

                # ビルの上部と下部を2等分
                half_height = max(h // 2, 1)  # 半分の高さが最低でも1ピクセルになるように設定

                if self.transform_part == 0:  # 上部
                    slice_y = y
                    slice_h = half_height
                    target_part = "top"
                else:  # 下部
                    slice_y = y + half_height
                    slice_h = max(h - half_height, 1)  # 最低でも1ピクセルの高さを確保
                    target_part = "bottom"

                # 選択された部分を抽出して変形する
                object_roi = self.display_image[slice_y:slice_y+slice_h, x:x+w]

                # 変形行列を作成
                src_pts = np.float32([[0, 0], [w, 0], [w, slice_h], [0, slice_h]])
                offset_x = int(self.transform_direction)
                offset_y = int(self.transform_strength)
                dst_pts = np.float32([
                    [0 + offset_x, 0],
                    [w - offset_x, 0],
                    [w, slice_h - offset_y],
                    [0, slice_h + offset_y]
                ])

                matrix = cv2.getPerspectiveTransform(src_pts, dst_pts)
                transformed_object = cv2.warpPerspective(object_roi, matrix, (w, slice_h))

                # 部分ごとに変形結果を保存
                if target_part == "top":
                    self.transformed_top = transformed_object
                else:
                    self.transformed_bottom = transformed_object

                # 変形を反映した画像を構築
                self.processed_image = self.display_image.copy()
                if self.transformed_top is not None:
                    self.processed_image[y:y+half_height, x:x+w] = self.transformed_top
                if self.transformed_bottom is not None:
                    self.processed_image[y+half_height:y+h, x:x+w] = self.transformed_bottom

                self.update_preview()

    def update_preview(self):
        # 画像をPILとTkinterで表示
        image_rgb = cv2.cvtColor(self.processed_image, cv2.COLOR_BGR2RGB)
        image_pil = Image.fromarray(image_rgb)
        image_tk = ImageTk.PhotoImage(image_pil)
        self.preview_label.config(image=image_tk)
        self.preview_label.image = image_tk


def main():
    root = tk.Tk()
    app = BuildingTransformerGUI(root)
    root.mainloop()


if __name__ == "__main__":
    main()
