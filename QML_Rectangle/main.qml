import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 500
    height: 500

    Rectangle
    {
        width: 50
        height: 50
        color: "#ff0000"
        border.color:  "#000000"
        border.width: 4

    }

    Rectangle
    {
        width: 50
        height: 50
        x: 100
        y: 100
        color: "#ff0000"
        border.color:  "#000000"
        border.width: 4

        anchors.centerIn: parent
        Rectangle
        {
            width: 50
            height: 50

            x: 200
            y: 200

            color: "green"
            border.color:  "darkgreen"
            border.width: 4

        }
    }
}
