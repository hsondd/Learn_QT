import QtQuick 2.9
import QtQuick.Window 2.2
import  QtQuick.Controls 2.0

Window {
    id: root
    visible: true
    width: 500
    height: 500
    title: qsTr("Hello World")

    Row {
        id: tools

        Button {
            id: clear
            text: "Clear"
            onClicked: {}
        }
        Button {
            id: save
            text: "Save"
            onClicked: {}
        }

    }

    Canvas {
        id: canvas
        anchors.top: tools.bottom
        width: 500
        height: 500
        property int lastX: 0
        property int lastY: 0

        onPaint: {
            var ctx = getContext("2d")
            ctx.lineWidth = 2
            ctx.strokeStyle = color.red
            ctx.beginPath()
            ctx.moveTo(lastX, lastY)
            lastX = area.mouseX
            lastY = area.mouseY
            ctx.lineTo(lastX, lastY)
            ctx.stroke()
        }
        MouseArea {
            id: area
            anchors.fill: parent
            onPressed: {
                canvas.lastX = mouseX
                canvas.lastY = mouseY
            }
            onPositionChanged: {
                canvas.requestPaint()
            }
        }
    }

}
