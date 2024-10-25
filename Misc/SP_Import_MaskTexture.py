# -*- coding: utf-8 -*-


try:
    from PySide6 import QtWidgets, QtCore
    print("PySide6がインポートされました。")
except ImportError:
    try:
        from PyQt5 import QtWidgets, QtCore
        print("PyQt5がインポートされました。")
    except ImportError:
        print("PyQt5もPySide6もサポートされていません。")
        try:
            from PySide2 import QtWidgets, QtCore
            print("PySide2がインポートされました。")
        except ImportError:
            print("PyQt5もPySide6もPySide2もサポートされていません。")


import substance_painter
import substance_painter.project
from substance_painter import event, layerstack, project, textureset, resource
import substance_painter.ui
import os

_PLUGIN_WIDGETS = []


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

    # テクスチャの読み込み
    texture_resource = resource.import_project_resource(texture_path, resource.Usage.TEXTURE)
    if texture_resource is None:
        print("テクスチャリソースのインポートに失敗しました。")
        return

    stack = textureset.get_active_stack()
    if stack is None:
        print("アクティブなテクスチャセットがありません。")
        return

    # 現在選択されている（アクティブな）レイヤーを取得
    selected_layers = layerstack.get_selected_nodes(stack)
    if not selected_layers:
        print("選択されているレイヤーがありません。")
        return

    # maskの検索
    smart_masks = resource.search("Concrete Edges")
    if not smart_masks:
        print("Smart Mask Concrete Edges が見つかりませんでした。")
        return

    print(smart_masks)

    # 選択されたレイヤーに対して処理を行う
    for selected_layer in selected_layers:

        # マスクを追加する
        selected_layer.add_mask(layerstack.MaskBackground.Black)

        fill_effect_position = layerstack.InsertPosition.inside_node(selected_layer, layerstack.NodeStack.Mask)
        fill_layer = layerstack.insert_fill(fill_effect_position)
        if fill_layer:
            fill_layer.set_name(layer_name + "_mask_fill")
            fill_layer.set_projection_mode(layerstack.ProjectionMode.UV)

            # プロジェクションパラメータの取得
            params = fill_layer.get_projection_parameters()
            if isinstance(params, layerstack.UVProjectionParams):
                # テクスチャリソースをUVプロジェクションパラメータに設定
                params.texture = texture_resource.identifier()

                fill_layer.set_projection_parameters(params)
                print(f"フィルレイヤー '{layer_name}' にテクスチャ '{texture_path}' を適用しました。")

                # パラメータの詳細を表示
                print("UVプロジェクションパラメータ:")
                print(f"テクスチャ: {params.texture}")
                print(f"スケール: {params.uv_transformation.scale}")
                print(f"回転: {params.uv_transformation.rotation}")
                print(f"オフセット: {params.uv_transformation.offset}")

            else:
                print("UVプロジェクションパラメータの取得に失敗しました。")



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
            import_texture_as_mask(file_path, layer_name)
    else:
        print("キャンセルされました。")

    _PLUGIN_WIDGETS.append(dialog)


def delete_gui():
    print("close plugin importer")
    child_list = substance_painter.ui.get_main_window().children()
    for widget in _PLUGIN_WIDGETS:
        substance_painter.ui.delete_ui_element(widget)
    _PLUGIN_WIDGETS.clear()


def run():
    print("start plugin importer")
    if substance_painter.project.is_open():
        run_import_texture_dialog()
    else:
        print("not project opened !!")


def start_plugin():
    run()
    pass


def close_plugin():
    delete_gui()
    pass


if __name__ == "__main__":
    start_plugin()




