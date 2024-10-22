# -*- coding: utf-8 -*-

import substance_painter
import functools
import inspect
import types


class Baking:
    @staticmethod
    def bake(textureSetName : str):
        return substance_painter.js.evaluate(f"alg.baking.{inspect.currentframe().f_code.co_name}('{textureSetName}')")
    @staticmethod
    def setCommonBakingParameters(parameters : object):
        return substance_painter.js.evaluate(f"alg.baking.{inspect.currentframe().f_code.co_name}({parameters})")
    @staticmethod
    def setCurvatureMethod(method : str = "FromMesh"):
        return substance_painter.js.evaluate(f"alg.baking.{inspect.currentframe().f_code.co_name}('{method}')")
    @staticmethod
    def setTextureSetBakingParameters(textureSetName : str, parameters : object):
        return substance_painter.js.evaluate \
            (f"alg.baking.{inspect.currentframe().f_code.co_name}('{textureSetName}',{parameters})")
    @staticmethod
    def textureSetBakingParameters(textureSetName : str):
        return substance_painter.js.evaluate(f"alg.baking.{inspect.currentframe().f_code.co_name}('{textureSetName}')")

class Shaders:
    @staticmethod
    def groups(shaderId : int = 0):
        return substance_painter.js.evaluate(f"alg.shaders.{inspect.currentframe().f_code.co_name}({shaderId})")
    @staticmethod
    def materials(shaderId : int = 0):
        return substance_painter.js.evaluate(f"alg.shaders.{inspect.currentframe().f_code.co_name}({shaderId})")
    @staticmethod
    def parameter(shaderId : int, identifier : str):
        return substance_painter.js.evaluate \
            (f"alg.shaders.{inspect.currentframe().f_code.co_name}({shaderId},'{identifier}')")
    @staticmethod
    def parameters(shaderId : int = 0, group : str = ""):
        return substance_painter.js.evaluate \
            (f"alg.shaders.{inspect.currentframe().f_code.co_name}({shaderId},'{group}')")
    @staticmethod
    def setParameters(shaderId : int, parameters : object):
        return substance_painter.js.evaluate \
            (f"alg.shaders.{inspect.currentframe().f_code.co_name}({shaderId, parameters})")
    @staticmethod
    def shaderInstancesFromObject(jsObject : object):
        return substance_painter.js.evaluate(f"alg.shaders.{inspect.currentframe().f_code.co_name}({jsObject})")
    @staticmethod
    def updateShaderInstance(shaderId : int = 0, shaderUrl : str = ""):
        return substance_painter.js.evaluate \
            (f"alg.shaders.{inspect.currentframe().f_code.co_name}({shaderId},'{shaderUrl}')")


def start_plugin():
    """Plugin interface: called to start the plugin."""
    substance_painter.baking = types.ModuleType("baking", "alg.baking\nManage baking of the opened project")

    for obj in "commonBakingParameters", "curvatureMethod", "selectCageMesh", "selectHighDefinitionMeshes":
        setattr(substance_painter.baking, obj, functools.partial(substance_painter.js.evaluate, f"alg.baking.{obj}()"))

    for obj in inspect.getmembers(Baking, inspect.isfunction):
        setattr(substance_painter.baking, obj[0], getattr(Baking, obj[0]))

    substance_painter.shaders = types.ModuleType("shaders", "alg.shaders\nControl shader instances of the currently opened project")

    for obj in "instances", "shaderInstancesToObject":
        setattr(substance_painter.shaders, obj, functools.partial(substance_painter.js.evaluate, f"alg.shaders.{obj}()"))

    for obj in inspect.getmembers(Shaders, inspect.isfunction):
        setattr(substance_painter.shaders, obj[0], getattr(Shaders, obj[0]))


if __name__ == "__main__":
    start_plugin()

