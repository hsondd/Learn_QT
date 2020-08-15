import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 500
    height: 500

    Rectangle {
        id: rootTangle
        width: 360
        height: 360
        color: "black"

        MyButton {
            width: rootTangle / 2
            height: 70
            borderColor: "green"
            backColor: "blue"
            borderWidth: 4
            radius: 20
        }
    }
}
