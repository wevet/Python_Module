#target photoshop

function detectIntersectionsAndHighlight() 
{
    var doc = app.activeDocument;
    var width = doc.width.as('px');
    var height = doc.height.as('px');
    
    var activeLayer = doc.activeLayer;
    $.writeln("activeLayer => " + activeLayer)

    // レイヤーがアートレイヤーかどうかを確認
    if (!(activeLayer instanceof ArtLayer)) 
    {
        alert("The selected layer is not an art layer. Please select an art layer.");
        return;
    }

    // 黒（線）の色を設定
    var blackColor = [0, 0, 0];
    var redColor = new SolidColor();
    redColor.rgb.red = 255;
    redColor.rgb.green = 0;
    redColor.rgb.blue = 0;

    // ピクセルデータを取得
    var pixelData = getPixelData(doc, width, height);

    $.writeln("Width: " + width + ", Height: " + height);
    $.writeln("pixelData => " + pixelData);

    // 交点を探す
    var intersections = findIntersections(pixelData, width, height, blackColor);

    // 交点に赤いピクセルを塗る
    highlightIntersections(intersections, redColor);
    alert("Intersection detection completed!");
}


// ピクセルデータを取得する関数
function getPixelData(doc, width, height) 
{
    var originalRulerUnits = app.preferences.rulerUnits;
    app.preferences.rulerUnits = Units.PIXELS;

    doc.changeMode(ChangeMode.RGB);

    var pixels = [];
    var sampleColor = new SolidColor();

    for (var y = 0; y < height; y++) 
    {
        for (var x = 0; x < width; x++) 
        {
            $.writeln("x => " + x + " y => " + y);

            sampleColor.rgb.hexValue = doc.colorSamplers.add([x, y]).color.rgb.hexValue;
            doc.colorSamplers.removeAll();
            pixels.push({
                x: x,
                y: y,
                color: [Math.round(sampleColor.rgb.red), Math.round(sampleColor.rgb.green), Math.round(sampleColor.rgb.blue)]
            });
        }

       
    }

    app.preferences.rulerUnits = originalRulerUnits;
    return pixels;
}


// 縦・横・斜めの交点を検出する関数
function findIntersections(pixelData, width, height, blackColor) 
{
    var intersections = [];

    $.writeln("findIntersections");

    // 縦横斜めに黒い線の交点を調べる
    for (var y = 1; y < height - 1; y++) 
    {
        for (var x = 1; x < width - 1; x++) 
        {
            var currentPixel = getPixelAt(pixelData, width, x, y);

            if (isBlack(currentPixel, blackColor)) 
            {
                if (checkSurroundingPixels(pixelData, width, x, y, blackColor))
                {
                    intersections.push({ x: x, y: y });
                    $.writeln("found intersection : x =>" + x + " y => " + y);
                }
            }
        }
    }
    return intersections;
}

function checkSurroundingPixels(pixelData, width, x, y, blackColor) 
{
    return (isBlack(getPixelAt(pixelData, width, x, y - 1), blackColor) &&
            isBlack(getPixelAt(pixelData, width, x, y + 1), blackColor)) || // 縦
           (isBlack(getPixelAt(pixelData, width, x - 1, y), blackColor) &&
            isBlack(getPixelAt(pixelData, width, x + 1, y), blackColor)) || // 横
           (isBlack(getPixelAt(pixelData, width, x - 1, y - 1), blackColor) &&
            isBlack(getPixelAt(pixelData, width, x + 1, y + 1), blackColor)) || // 斜め1
           (isBlack(getPixelAt(pixelData, width, x + 1, y - 1), blackColor) &&
            isBlack(getPixelAt(pixelData, width, x - 1, y + 1), blackColor)); // 斜め2
}

// 指定したピクセルが黒かどうかを確認する関数
function isBlack(pixel, blackColor) 
{
    return pixel.color[0] === blackColor[0] && pixel.color[1] === blackColor[1] && pixel.color[2] === blackColor[2];
}


// 指定した座標のピクセルデータを取得する関数
function getPixelAt(pixelData, width, x, y) 
{
    return pixelData[y * width + x];
}


// 交点に赤色をハイライトする関数
function highlightIntersections(intersections, redColor) 
{
    var doc = app.activeDocument;
    for (var i = 0; i < intersections.length; i++) 
    {
        var x = intersections[i].x;
        var y = intersections[i].y;
        
        doc.selection.select([[x, y], [x + 1, y], [x + 1, y + 1], [x, y + 1]]);
        doc.selection.fill(redColor);
        doc.selection.deselect();
    }

    $.writeln("highlightIntersections");
}


// メインの実行部分
function main() 
{
    var doc = app.activeDocument;
    $.writeln("doc => " + doc);

    detectIntersectionsAndHighlight();
}


main();  // メイン関数を実行


