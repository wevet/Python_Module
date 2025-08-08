# -*- mode: python ; coding: utf-8 -*-
import sys
from pathlib import Path
import cv2
from PyQt6 import QtCore

# ---- Qt プラグインおよび OpenCV DLL のバイナリ収集 ----
binaries = []

# Qt6 プラグイン
qt_plug_dir = QtCore.QLibraryInfo.path(
    QtCore.QLibraryInfo.LibraryPath.PluginsPath
)
for p in Path(qt_plug_dir).rglob("*.dll"):
    binaries.append((str(p), "qt_plugins"))

# OpenCV の DLL
cv2_dir = Path(cv2.__file__).parent
for p in cv2_dir.rglob("*.dll"):
    binaries.append((str(p), "."))

# ----------------------------------------------------------------

block_cipher = None

a = Analysis(
    scripts=['sdf_texture_generator.py'],
    pathex=[
    ],
    binaries=binaries,
    datas=[],
    hiddenimports=[
        'PyQt6.QtCore',
        'PyQt6.QtGui',
        'PyQt6.QtWidgets',
        'PyQt6.QtGui.qt_imageformats',
        'cv2',
        'numpy',
    ],
    hookspath=[],
    runtime_hooks=[],
    excludes=[],
    win_no_prefer_redirects=False,
    win_private_assemblies=False,
    cipher=block_cipher,
)

pyz = PYZ(
    a.pure,
    a.zipped_data,
    cipher=block_cipher,
)

exe = EXE(
    pyz,
    a.scripts,
    [],
    exclude_binaries=True,
    name='sdf_texture_generator',
    debug=False,
    bootloader_ignore_signals=False,
    strip=False,
    upx=True,
    console=False,
)

coll = COLLECT(
    exe,
    a.binaries,
    a.zipfiles,
    a.datas,
    strip=False,
    upx=True,
    upx_exclude=[],
    name='sdf_texture_generator'
)
