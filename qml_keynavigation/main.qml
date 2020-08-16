
import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 360
    height: 360
    title: qsTr("Hello World")

    Rectangle {
        id: root
        width: 360
        height: 360
        color: "black"

        Column {
            spacing: 10
            Rectangle {
                id:blueRec
                width: 360
                height: 360/3.3
                color: activeFocus? "blue":"grey"
                focus:true
                KeyNavigation.down: redRec
                KeyNavigation.up: yellowRec
            }
            Rectangle {
                id: redRec
                width: 360
                height: 360/3.3
                color: {
                    if (activeFocus == true)
                        "red"
                    else
                        "grey"
                }


//                    activeFocus? "red":"grey"
                KeyNavigation.down: yellowRec
                KeyNavigation.up: blueRec
            }
            Rectangle {
                id: yellowRec
                width: 360
                height: 360/3.3
                color: activeFocus? "yellow":"grey"
                KeyNavigation.down: blueRec
                KeyNavigation.up: redRec
            }
        }

    }

}
