import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    color: "blue"

    MouseArea {
        anchors.fill: parent
        onClicked: {
            QT.quit()
        }
    }

    MyRectangle {
        rectWidth: 400
        rectHeight: 200
        rectColor: "yellow"
    }
}
