# -*- coding: utf-8 -*-

import sd
import os
from sd.api.sbs import sdsbscompgraph
from sd.api import sdproperty
from sd.api.apiexception import APIException


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


def export_texture(aSDGraph, aOutputDir='', aFileExt='png'):
	if not aSDGraph:
		return False
	
	if not issubclass(type(aSDGraph), sdsbscompgraph.SDSBSCompGraph):
		return False

	aSDGraph.compute()
	graphIdentifier = aSDGraph.getIdentifier().replace("/", "_")

	nodeIndex = -1
	for sdNode in aSDGraph.getOutputNodes():
		nodeIndex = nodeIndex + 1

		nodeDefinition = sdNode.getDefinition()

		outputProperties = nodeDefinition.getProperties(sdproperty.SDPropertyCategory.Output)
		for outputProperty in outputProperties:
			
			propertyValue = sdNode.getPropertyValue(outputProperty)
			
			propertyTexture = propertyValue.get()
			if not propertyTexture:
				continue
			
			identifier = outputProperty.getId()
			fileName = f"{graphIdentifier}_{identifier}.{aFileExt}"
			textureFileName = os.path.abspath(os.path.join(aOutputDir, fileName))

			try:
				propertyTexture.save(textureFileName)
				print(f"Exported: {textureFileName}")
			except APIException:
				print('Fail to save texture %s' % textureFileName)
	return True



# Designerアプリケーション取得
context = sd.getContext()
app = context.getSDApplication()
ui_mgr = app.getQtForPythonUIMgr()
main_window = ui_mgr.getMainWindow()

# 現在のグラフ取得
graph = ui_mgr.getCurrentGraph()

# フォルダ選択ダイアログ
export_path = QtWidgets.QFileDialog.getExistingDirectory(main_window, "Export Folder", "F:/")

# 書き出し実行
if export_path:
    export_texture(graph, export_path, 'png')
else:
    print("Export canceled.")



