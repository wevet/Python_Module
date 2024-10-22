# -*- coding: utf-8 -*-

from PySide2 import QtWidgets, QtCore
import substance_painter
import substance_painter.project
import substance_painter.layer
import substance_painter.textureset
from substance_painter import event, layerstack, project, textureset
import substance_painter.ui
import os


class TextureImportDialog(QtWidgets.QDialog):
    def __init__(self):
        super(TextureImportDialog, self).__init__()
        self.setWindowTitle("Import Texture")
        self.setFixedSize(400, 300)

        # レイヤー名のラベルとエントリー
        self.layer_name_label = QtWidgets.QLabel("Layer Name:")
        self.layer_name_input = QtWidgets.QLineEdit()

        # ファイル選択ボタン
        self.file_select_button = QtWidgets.QPushButton("Select Texture File")
        self.file_select_button.clicked.connect(self.open_file_dialog)

        # 選択されたファイルのパスを表示するラベル
        self.file_path_label = QtWidgets.QLabel("No file selected.")

        # OKとキャンセルボタン
        self.ok_button = QtWidgets.QPushButton("OK")
        self.ok_button.clicked.connect(self.accept)
        self.cancel_button = QtWidgets.QPushButton("Cancel")
        self.cancel_button.clicked.connect(self.reject)

        # レイアウトの設定
        layout = QtWidgets.QVBoxLayout()
        layout.addWidget(self.layer_name_label)
        layout.addWidget(self.layer_name_input)
        layout.addWidget(self.file_select_button)
        layout.addWidget(self.file_path_label)
        layout.addWidget(self.ok_button)
        layout.addWidget(self.cancel_button)

        self.setLayout(layout)
        self.file_path = None


    def open_file_dialog(self):
        file_dialog = QtWidgets.QFileDialog(self)
        file_dialog.setNameFilter("Image Files (*.png *.jpg *.tga)")
        if file_dialog.exec_():
            selected_files = file_dialog.selectedFiles()
            if selected_files:
                self.file_path = selected_files[0]
                self.file_path_label.setText(os.path.basename(self.file_path))


    def get_layer_name(self):
        return self.layer_name_input.text()


    def get_file_path(self):
        return self.file_path


def import_texture_as_mask(texture_path, layer_name):

    # プロジェクトが開かれているか確認
    if not substance_painter.project.is_open():
        print("プロジェクトが開かれていません。")
        return

    # テクスチャの読み込み
    #texture_resource = substance_painter.texture.import_texture(texture_path)
    texture_resource = substance_painter.resource.import_project_resource(texture_path, substance_painter.resource.Usage.TEXTURE)

    # 新規ペイントレイヤーの作成
    layer = substance_painter.layer.create_paint_layer()
    layer.set_name(layer_name)
    # マスクとしてテクスチャを適用
    layer.add_mask(texture_resource)
    print(f"テクスチャ {texture_path} をマスクとして適用しました。")


def run_import_texture_dialog():
    app = QtWidgets.QApplication.instance()
    if not app:
        app = QtWidgets.QApplication([])

    dialog = TextureImportDialog()
    if dialog.exec_() == QtWidgets.QDialog.Accepted:
        layer_name = dialog.get_layer_name()
        file_path = dialog.get_file_path()

        if not layer_name or not file_path:
            QtWidgets.QMessageBox.warning(None, "Warning", "レイヤー名とテクスチャファイルの両方が必要です。")
        else:

            print(f"Selected layer name: {layer_name}")
            print(f"Selected file path: {file_path}")
            import_texture_as_mask(file_path, layer_name)
    else:
        print("キャンセルされました。")



if __name__ == "__main__":
    run_import_texture_dialog()


