import sys
import cv2
import os
import numpy as np
from PyQt6.QtWidgets import (
    QApplication, QWidget, QListWidget, QVBoxLayout, QPushButton, QFileDialog, QLabel, QComboBox, QHBoxLayout
)
from PyQt6.QtCore import Qt, QMimeData


class ImageListWidget(QListWidget):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setAcceptDrops(True)
        self.setDragDropMode(QListWidget.DragDropMode.InternalMove)

    def dragEnterEvent(self, event):
        if event.mimeData().hasUrls():
            event.acceptProposedAction()

    def dragMoveEvent(self, event):
        event.acceptProposedAction()

    def dropEvent(self, event):
        if event.mimeData().hasUrls():
            urls = event.mimeData().urls()
            for url in urls:
                file_path = url.toLocalFile()
                if file_path.lower().endswith(('.png', '.jpg', '.jpeg', '.tiff', '.bmp', '.tga')):
                    self.addItem(file_path)
            event.acceptProposedAction()


class SDFTool(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("SDF_SDTexture_Tool")
        self.setGeometry(100, 100, 800, 400)

        layout = QVBoxLayout()

        layout.addWidget(QLabel("Image Pass (Drag and Drop images)"))
        self.file_list = ImageListWidget()
        layout.addWidget(self.file_list)

        ctrl_layout = QHBoxLayout()
        self.btn_sort = QPushButton("Sort")
        self.btn_reverse = QPushButton("Reverse")
        self.btn_delete = QPushButton("Delete")
        self.btn_delete_all = QPushButton("Delete ALL")
        self.btn_export = QPushButton("Export")

        ctrl_layout.addWidget(self.btn_sort)
        ctrl_layout.addWidget(self.btn_reverse)
        self.btn_delete.clicked.connect(self.delete_selected)
        self.btn_delete_all.clicked.connect(self.delete_all)
        self.btn_export.clicked.connect(self.export_images)

        layout.addLayout(ctrl_layout)

        options_layout = QHBoxLayout()
        self.channel_combo = QComboBox()
        self.channel_combo.addItems([
            "GrayScale(16bit)", "RG(16bit)", "ROnly(8bit)", "GrayScale(8bit)", "ROnly(16bit)", "RGB(24bit)"
        ])
        self.channel_combo.setCurrentText("RGB(24bit)")

        self.distance_combo = QComboBox()
        self.distance_combo.addItems(["Euclidean distance", "Manhattan distance"])

        self.mask_size_combo = QComboBox()
        self.mask_size_combo.addItems(["3", "5"])
        self.mask_size_combo.setCurrentText("5")

        options_layout.addWidget(QLabel("Channel:"))
        options_layout.addWidget(self.channel_combo)
        options_layout.addWidget(QLabel("Distance:"))
        options_layout.addWidget(self.distance_combo)
        options_layout.addWidget(QLabel("MaskSize:"))
        options_layout.addWidget(self.mask_size_combo)

        layout.addLayout(options_layout)

        layout.addWidget(self.btn_export)

        self.setLayout(layout)


    def sort_files(self):
        self.file_list.sortItems()

    def reverse_files(self):
        items = [self.file_list.item(i).text() for i in range(self.file_list.count())]
        self.file_list.clear()
        self.file_list.addItems(reversed(items))

    def delete_selected(self):
        for item in self.file_list.selectedItems():
            self.file_list.takeItem(self.file_list.row(item))

    def delete_all(self):
        self.file_list.clear()


    @staticmethod
    def calculate_sdf(image, dist_type, mask_size):
        """Signed Distance Field (SDF) を計算（内部・外部両方）"""
        _, binary_image = cv2.threshold(image, 128, 255, cv2.THRESH_BINARY)
        try:
            sdf_ext = cv2.distanceTransform(255 - binary_image, dist_type, mask_size)
            sdf_int = cv2.distanceTransform(binary_image, dist_type, mask_size)
        except cv2.error as e:
            print(f"Error in distanceTransform with mask size {mask_size}: {e}")
            return None, None
        return sdf_ext, sdf_int


    @staticmethod
    def compute_transition(sdf_1, sdf_2):
        """SDFを基に遷移率を計算"""
        return np.divide(sdf_1, sdf_1 + sdf_2 + 1e-6, where=(sdf_1 + sdf_2) > 1e-6)


    def export_images(self):
        file_paths = [self.file_list.item(i).text() for i in range(self.file_list.count())]
        if not file_paths:
            print("No images to process.")
            return

        save_path = QFileDialog.getExistingDirectory(self, "Select Output Folder")
        if not save_path:
            return

        mask_size = int(self.mask_size_combo.currentText())
        distance_mode = self.distance_combo.currentText()
        channel_mode = self.channel_combo.currentText()

        dist_type = {
            "Euclidean distance": cv2.DIST_L2,
            "Manhattan distance": cv2.DIST_L1
        }.get(distance_mode, cv2.DIST_L2)

        images = [cv2.imread(file, cv2.IMREAD_GRAYSCALE) for file in file_paths]

        base_shape = images[0].shape
        images = [cv2.resize(img, (base_shape[1], base_shape[0])) for img in images]

        final_map = np.zeros_like(images[0], dtype=np.float32)

        num_pairs = len(images) - 1  # ペアの数

        for i in range(num_pairs):
            img_1, img_2 = images[i], images[i + 1]
            corrected_map_1 = img_1.astype(np.float32) / 255
            corrected_map_2 = img_2.astype(np.float32) / 255

            # **SDFの計算**
            sdf_1_ext, sdf_1_int = SDFTool.calculate_sdf(img_1, dist_type=cv2.DIST_L2, mask_size=3)
            sdf_2_ext, sdf_2_int = SDFTool.calculate_sdf(img_2, dist_type=cv2.DIST_L2, mask_size=3)

            # **遷移率を計算 (影響を均等化)**
            transition_map = sdf_1_int / (sdf_1_int + sdf_2_int + 1e-6)  # ピクセル単位で計算
            transition_map = np.clip(transition_map, 0.01, 0.99)  # 遷移範囲を広げる

            # **遷移領域のマスク**
            transition_mask = ((sdf_1_int > 0) & (sdf_2_int > 0)).astype(np.float32)
            transition_map *= transition_mask

            # **SDFベースのブレンド**
            blended_transition = transition_map * corrected_map_1 + (1 - transition_map) * corrected_map_2
            final_map += blended_transition


        print(f"Before scaling, max value: {final_map.max()}")

        # 平均化
        final_map /= max(num_pairs, 1)  # 0除算を防ぐためにmaxを使用
        final_map = cv2.normalize(final_map, None, 0, 255, cv2.NORM_MINMAX).astype(np.uint8)

        # 画像を指定されたビット深度にスケール
        if channel_mode == "RGB(24bit)":
            final_map = (final_map * 255).astype(np.uint8)
            final_map = cv2.cvtColor(final_map, cv2.COLOR_GRAY2RGB)  # グレースケールをRGBに変換

        elif channel_mode == "ROnly(8bit)":
            final_map = (final_map * 255).astype(np.uint8)
            r_channel = final_map
            g_channel = np.zeros_like(final_map, dtype=np.uint8)
            b_channel = np.ones_like(final_map, dtype=np.uint8) * 255  # Bチャンネルを255に設定
            final_map = np.stack([r_channel, g_channel, b_channel], axis=-1)

        elif channel_mode == "RG(16bit)":
            final_map = (final_map * 65535).astype(np.uint16)
            r_channel = final_map
            g_channel = final_map
            b_channel = np.ones_like(final_map, dtype=np.uint16) * 65535  # Bチャンネルを65535に設定
            final_map = np.stack([r_channel, g_channel, b_channel], axis=-1)  # R, Gのみ有効

        elif channel_mode == "ROnly(16bit)":
            final_map = (final_map * 65535).astype(np.uint16)
            r_channel = final_map
            g_channel = np.zeros_like(final_map, dtype=np.uint16)
            b_channel = np.ones_like(final_map, dtype=np.uint16) * 65535  # Bチャンネルを65535に設定
            final_map = np.stack([r_channel, g_channel, b_channel], axis=-1)

        elif channel_mode == "GrayScale(8bit)":
            final_map = (final_map * 255).astype(np.uint8)  # そのまま保存

        elif channel_mode == "GrayScale(16bit)":
            final_map = (final_map * 65535).astype(np.uint16)  # そのまま保存

        print(f"After scaling, max value: {final_map.max()}")

        # 画像を保存
        output_filename = f"{save_path}/sdf_combined.png"
        cv2.imwrite(output_filename, final_map)
        print(f"Export completed: {output_filename}")
        pass



if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = SDFTool()
    window.show()
    sys.exit(app.exec())


