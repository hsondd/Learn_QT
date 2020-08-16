import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    id: root
    width: 360
    height: 360
    title: qsTr("Hello World")

    property bool running: false

    Rectangle {
        id: body
        width: root.width
        height: root.height
        anchors.centerIn: root

        Image {
            id: background
            source: "background.jpg"
            anchors.centerIn: body
            fillMode: Image.PreserveAspectFit
            width: 1350
//            Rotation: 35
            RotationAnimation on rotation {
                from: 0
                to: 360
                duration: 300
                running: root.running
                loops: Animation.Infinite
            }
        }

        Image {
            id: smile
            source: "smile.png"
            fillMode: Image.PreserveAspectFit
            anchors.centerIn: background
            width: 150
            opacity: 0.5
        }

        MouseArea {
            anchors.fill: background
            onClicked: root.running = true
        }

    }
}
