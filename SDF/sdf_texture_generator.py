import sys
import cv2
import os
import numpy as np
from PyQt6.QtWidgets import (
    QApplication, QWidget, QListWidget, QVBoxLayout, QPushButton,
    QFileDialog, QLabel, QComboBox, QHBoxLayout, QLineEdit,
    QDoubleSpinBox, QMessageBox
)
from PyQt6.QtCore import Qt, QMimeData



# 量子化の段階数（4096 にすると最終的に 12bit 相当の階調。必要に応じて 16384 などに増やしても OK）
LEVELS = 256
# 水平ブラー（cv2.blur）の半径：（2*RADIUS+1）×(2*RADIUS+1) カーネルを使う
RADIUS = 1
# トレンド除去のために左右何割を利用するか
EDGE_RATIO = 0.1

SDF_BLUR = 100        # SDF ブラー半径（もちろん大きくしても OK）
TRANS_BLUR = 100      # 遷移帯域を広げるための大きなブラー半径
ALPHA = 0.7      # 遷移率重み vs ランプ重みのミックス比 (0.0→ランプのみ,1.0→SDFのみ)




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
                if file_path.lower().endswith(('.png', '.jpg', '.jpeg')):#, '.tiff', '.bmp', '.tga'
                    self.addItem(file_path)
            event.acceptProposedAction()


class SDFTool(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("SDF Texture Creator")
        self.setGeometry(100, 100, 600, 400)

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
        ctrl_layout.addWidget(self.btn_delete)
        ctrl_layout.addWidget(self.btn_delete_all)
        layout.addLayout(ctrl_layout)

        self.btn_sort.clicked.connect(self.sort_files)
        self.btn_reverse.clicked.connect(self.reverse_files)
        self.btn_delete.clicked.connect(self.delete_selected)
        self.btn_delete_all.clicked.connect(self.delete_all)
        self.btn_export.clicked.connect(self.export_images)


        options_layout = QHBoxLayout()
        self.channel_combo = QComboBox()
        self.channel_combo.addItems([
            "GrayScale(16bit)", "RG(16bit)", "ROnly(8bit)", "GrayScale(8bit)", "ROnly(16bit)", "RGB(24bit)"
        ])
        self.channel_combo.setCurrentText("GrayScale(16bit)")

        #options_layout.addWidget(QLabel("Channel:"))
        #options_layout.addWidget(self.channel_combo)

        # added gui filenames
        name_layout = QHBoxLayout()
        name_layout.addWidget(QLabel("Output Filename:"))
        self.filename_edit = QLineEdit()
        self.filename_edit.setText("sdf_combined")
        name_layout.addWidget(self.filename_edit)
        layout.addLayout(name_layout)

        # ブラー設定
        blur_layout = QHBoxLayout()
        blur_layout.addWidget(QLabel("Gaussian Blur σX:"))
        self.sigma_x_spin = QDoubleSpinBox()
        self.sigma_x_spin.setRange(0.0, 5.0)
        self.sigma_x_spin.setSingleStep(0.1)
        self.sigma_x_spin.setValue(0.8)
        blur_layout.addWidget(self.sigma_x_spin)

        blur_layout.addWidget(QLabel("σY:"))
        self.sigma_y_spin = QDoubleSpinBox()
        self.sigma_y_spin.setRange(0.0, 5.0)
        self.sigma_y_spin.setSingleStep(0.1)
        self.sigma_y_spin.setValue(0.8)
        blur_layout.addWidget(self.sigma_y_spin)
        layout.addLayout(blur_layout)

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
    def save_by_mode(img8, save_path, mode):
        """
        img8: np.ndarray (H,W) dtype=uint8 のグレースケール（0-255）イメージ
        save_path: 拡張子付きの出力パス
        mode: チャンネル＆ビット深度指定の文字列
        """
        # まず、必要に応じて 0-255 → 0-65535 にスケーリング
        if mode.endswith("(16bit)"):
            # 8bit→16bit は単純に×257 (255→65535)
            img16 = (img8.astype(np.uint16) * 257)
        else:
            img16 = None

        if mode.startswith("GrayScale"):
            if mode.endswith("8bit"):
                # uint8, single-channel
                out = img8
            else:
                # uint16, single-channel
                out = img16

        elif mode.startswith("ROnly"):
            if mode.endswith("8bit"):
                # (H,W,1) uint8
                out = img8[..., None]
            else:
                # (H,W,1) uint16
                out = img16[..., None]

        elif mode.startswith("RG"):
            # 16bit RG: (H,W,2) uint16
            if not mode.endswith("16bit"):
                raise ValueError("RG only supported in 16bit")
            # 2チャンネルに展開
            # dtype=uint16, shape=(H,W,2)
            out = np.stack([img16, img16], axis=-1)

        elif mode.startswith("RGB"):
            # 24bit RGB: 8bit×3チャンネル
            if not mode.endswith("24bit"):
                raise ValueError("RGB only supported in 24bit")
            # dtype=uint8, shape=(H,W,3)
            out = np.stack([img8, img8, img8], axis=-1)

        else:
            raise ValueError(f"Unknown mode: {mode}")
        ext = os.path.splitext(save_path)[1].lower()
        cv2.imwrite(save_path, out)


    def export_images(self):
        file_paths = [self.file_list.item(i).text() for i in range(self.file_list.count())]
        if not file_paths:
            print("No images to process.")
            return

        save_path = QFileDialog.getExistingDirectory(self, "Select Output Folder")
        if not save_path:
            return

        channel_mode = self.channel_combo.currentText()

        levels = LEVELS
        trans_blur = 1

        images = [cv2.imread(p, cv2.IMREAD_GRAYSCALE).astype(np.float32) for p in file_paths]

        """
        a~h のグレースケール画像リスト images を受け取り、
        φ2/(φ2−φ1) のペアごと遷移率を累積し、
        平均→グローバル量子化（levels=255）→軽いガウシアンブラー→
        明度を1段階上げる → 'sdf_combined.png' に出力します。
        """

        # 1) パラメータ固定
        h, w = images[0].shape
        acc = np.zeros((h, w), dtype=np.float32)
        k = (2 * trans_blur + 1, 2 * trans_blur + 1)

        # 2) 符号付き距離場 φ を作るヘルパー
        def signed_sdf(bin_img):
            d_out = cv2.distanceTransform(255 - bin_img, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
            d_in = cv2.distanceTransform(bin_img, cv2.DIST_L2, cv2.DIST_MASK_PRECISE)
            return d_in - d_out

        # 3) 各ペア prev->curr で遷移率 w を計算し累積
        for i in range(1, len(images)):
            prev = images[i - 1].astype(np.float32)
            curr = images[i].astype(np.float32)

            b1 = (prev > 128).astype(np.uint8) * 255
            b2 = (curr > 128).astype(np.uint8) * 255

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
        sx = self.sigma_x_spin.value()
        sy = self.sigma_y_spin.value()
        out_smooth = cv2.GaussianBlur(out, (0, 0), sigmaX=sx, sigmaY=sy)

        base_name = self.filename_edit.text().strip()
        mode = self.channel_combo.currentText()
        ext = ".png"
        output_path = os.path.join(save_path, base_name + ext)
        try:
            # cv2.imwrite overwrites existing by default
            #self.save_by_mode(out_smooth, output_path, mode)
            cv2.imwrite(output_path, out_smooth)
            QMessageBox.information(self, "Success", f"Exported: {output_path}")
            print(f"Export completed: {output_path}")
        except Exception as e:
            QMessageBox.critical(self, "Error", f"Save failed: {e}")
        pass



if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = SDFTool()
    window.show()
    sys.exit(app.exec())


