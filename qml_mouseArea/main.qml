import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    color: "green"

    Rectangle {
        id: rect1
        width: 300
        height: 100
        color: "brown"
        anchors.centerIn: parent
        border.width: 8
        border.color: "blue"
        radius: 50
    }

    MouseArea {
        anchors.fill: rect1
        hoverEnabled: true
        onEntered: {
            rect1.color = "blue"
            rect1.rotation = 45
            text1.rotation = 45

        }
        onExited: {
            rect1.color = "brown"
            rect1.rotation = 0
            text1.rotation = 0
        }

        onClicked: {
            Qt.quit()
        }
    }

    Text {
        id: text1
        color: "white"
        text: "sondh15"
        visible: true
        font.family: "Times New Roman"
        font.bold: true
        font.pointSize: 20
        anchors.centerIn: parent
    }
}
