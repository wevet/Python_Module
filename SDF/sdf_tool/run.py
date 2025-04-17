# Write by 橘子猫

import subprocess
import os
import sys

curPath = sys.path[0] + "\\"

exePath = curPath + "sdf_tool.exe"
imagePath = curPath + "images" + "\\"

#セパレーターとしてのスペース
#spaces as separators
imageNames = ""
imageNames += "../../Assets/a.png "
imageNames += "../../Assets/b.png "
imageNames += "../../Assets/c.png "
imageNames += "../../Assets/d.png "
imageNames += "../../Assets/e.png "
imageNames += "../../Assets/f.png "
imageNames += "../../Assets/g.png "
imageNames += "../../Assets/h.png "

exportpath = curPath + "sdf.png"

blendingtimes = 50

subprocess.call([exePath, "--folderpath", "{}".format(imagePath), "--name", "{}".format(imageNames), "--exportpath", "{}".format(exportpath), "--blendingtimes", str(blendingtimes)])

