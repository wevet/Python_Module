@echo off


:: Plugin folder settings (Substance Painter plugin directory)
set PLUGIN_DIR=%USERPROFILE%\Documents\Adobe\Adobe Substance 3D Painter\python\plugins

:: List required packages
set PACKAGES=PySide2 PyQt5 PySide6

:: Install or verify each package
for %%p in (%PACKAGES%) do (
    echo "Checking for %%p..."
    "%PYTHON_PATH%\python.exe" -m pip show %%p >nul 2>&1
    if %errorlevel% neq 0 (
        echo %%p is not found. Perform the installation.
        "%PYTHON_PATH%\python.exe" -m pip install %%p
    ) else (
        echo %%p is already installed.
    )
)

:: Copy the PySide2 library to the plugin folder
echo copying PySide2...
xcopy /s /y "%PYTHON_PATH%\Lib\site-packages\PySide2" "%PLUGIN_DIR%\PySide2"

:: Copy the PyQt5 library to the plugin folder
echo copying PyQt5...
xcopy /s /y "%PYTHON_PATH%\Lib\site-packages\PyQt5" "%PLUGIN_DIR%\PyQt5"

:: Copy the PySide6 library to the plugin folder
echo copying PySide6...
xcopy /s /y "%PYTHON_PATH%\Lib\site-packages\PySide6" "%PLUGIN_DIR%\PySide6"

echo Setup is complete; restart Substance Painter to activate the plug-in.
pause




