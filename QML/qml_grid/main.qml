import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 360
    height: 360
    title: qsTr("Hello World")

    Grid {
        spacing: 20
        columns: 3
        rows: 4
        Repeater {
            model: 12
            Rectangle {
                width: 360/4
                height: 360/4
                color: "blue"
            }
        }
}
}
