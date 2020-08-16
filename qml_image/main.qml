import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Item {
        id: root
        width: 360
        height: 360
        Image {
            id: qticon
            source: "QtIcon.png"
            sourceSize.width:  root.width /2
            sourceSize.height: root.height / 2
        }
    }
}
