import QtQuick 2.0
import QtQuick.Window 2.2

Rectangle {
    id: head
    width: Screen.width /2
    height: Screen.height / 10
    color: "#C7C7C7"

    Text {
        id: name
        text: qsTr("Fruits")
        font.pixelSize: head.height / 1.4
        font.bold: true
    }
}
