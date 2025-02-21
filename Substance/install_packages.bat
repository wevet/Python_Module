@echo off
REM Confirm Python installation
where python >nul 2>nul
if %errorlevel% neq 0 (
    echo Python is not installed, please install Python.
    pause
    exit /b
)

REM Install necessary Python packages
echo We install the necessary packages...
pip install PyQt5
pip install PySide6
pip install PySide2==5.15.2

echo All packages have been installed.
pause
