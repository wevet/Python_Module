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
pip install opencv-python
pip install opencv-python-headless
pip install numpy
pip install pillow
pip install matplotlib
pip install tensorflow
pip install keras
pip install scikit-learn

echo All packages have been installed.
pause
