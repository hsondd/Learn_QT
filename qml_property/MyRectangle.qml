import QtQuick 2.0

Item {
    id: rectangle
    property int rectWidth
    property int rectHeight
    property string rectColor
    Rectangle {
        width: rectangle.rectWidth
        height: rectangle.rectHeight
        color: rectangle.rectColor
    }
}
