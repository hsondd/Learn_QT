import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    color: "#431e1e"
    title: qsTr("Hello World")

    Rectangle {
        id: rectangle
        x: 269
        y: 120
        width: 103
        height: 240
        color: "#020202"
    }

    Rectangle {
        id: rectangle1
        x: 295
        y: 149
        width: 52
        height: 47
        color: "#fd1414"
        radius: 20
    }

    Rectangle {
        id: rectangle2
        x: 295
        y: 217
        width: 52
        height: 47
        color: "#f9ea24"
        radius: 20
    }

    Rectangle {
        id: rectangle3
        x: 295
        y: 287
        width: 52
        height: 47
        color: "#039e26"
        radius: 20
    }
}
