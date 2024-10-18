#target photoshop


function removeWhitespace(line) 
{
    // 行の前後の空白を削除
    return line.replace(/^\s+|\s+$/g, ""); 
}

// ExtendScript用のカスタムJSONパーサー
function readJSON(file) 
{
    var data = file.read();
    var lines = data.split("\n");
    var jsonString = "";

    for (var i = 0; i < lines.length; i++) 
    {
        jsonString += removeWhitespace(lines[i]); 
    }
    
    jsonString = jsonString.replace(/,\s*}/g, "}").replace(/,\s*]/g, "]");  
    return eval('(' + jsonString + ')');
}


function drawLineTwoPoints(curveName, lineThickness, start, stop)
{
    var doc = app.activeDocument;
    const startPoint = new PathPointInfo();
    startPoint.anchor = start;
    startPoint.leftDirection = start;
    startPoint.rightDirection = start;
    startPoint.kind = PointKind.SMOOTHPOINT;

    const stopPoint = new PathPointInfo();
    stopPoint.anchor = stop;
    stopPoint.leftDirection = stop;
    stopPoint.rightDirection = stop;
    stopPoint.kind = PointKind.SMOOTHPOINT;

     // SubPathInfoを作成
    const spi = new SubPathInfo();
    spi.closed = false;
    spi.operation = ShapeOperation.SHAPEXOR;
    spi.entireSubPath = [startPoint, stopPoint]; 

    var pathItem = doc.pathItems.add(curveName, [spi]); 
    pathItem.strokeWidth = lineThickness;
    pathItem.strokePath(ToolType.PENCIL);
    pathItem.remove();
}


function generateImageFromJSON(jsonData) 
{
    var width = jsonData.texture_size[0];
    var height = jsonData.texture_size[1];
    var lineThickness = jsonData.line_thickness;

    var doc = app.activeDocument;

    var canvasWidth = parseFloat(doc.width);
    var canvasHeight = parseFloat(doc.height);
    $.writeln("Canvas Width: " + canvasWidth + ", Canvas Height: " + canvasHeight);

    var scaleX = canvasWidth / jsonData.texture_size[0];
    var scaleY = canvasHeight / jsonData.texture_size[1];

    // すべてのパスアイテムを削除
    for (var i = doc.pathItems.length - 1; i >= 0; i--) 
    {
        doc.pathItems[i].remove();
    }

    var strokeColor = new SolidColor();
    strokeColor.rgb.red = 0;
    strokeColor.rgb.green = 0;
    strokeColor.rgb.blue = 0;

    function drawLine(curveName, vertices) 
    {
        $.writeln("vertices length => " + vertices.length);

        for (var i = 0; i < vertices.length - 1; i++) 
        {
            // Mayaの3D座標をPhotoshopの2D相対座標に変換
            var startX = vertices[i][0] * scaleX;
            var startY = vertices[i][1] * scaleY;
            var startZ = vertices[i][2] * scaleY;
            var stopX = vertices[i + 1][0] * scaleX;
            var stopY = vertices[i + 1][1] * scaleY;
            var stopZ = vertices[i + 1][2] * scaleY;

            var start = [startX, startY];
            var stop = [stopX, stopY];

            $.writeln("Start Point: " + start + ", Stop Point: " + stop);
            drawLineTwoPoints(curveName, lineThickness, start, stop);
        }
    }

    for (var curveName in jsonData.curve_data) 
    {
        var curveData = jsonData.curve_data[curveName];      
        drawLine(curveName, curveData.vertices);
    }

    $.writeln("Image generated successfully!");
}


function loadFile()
{
    var jsonFile = File.openDialog("select json file", "*.json");
    if (jsonFile) 
    {
        jsonFile.open("r");
        var data = readJSON(jsonFile);
        jsonFile.close();
        generateImageFromJSON(data);
    }
    else 
    {
        alert("not selected json file");
    }
}
