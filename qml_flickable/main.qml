
import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 1300
    height: 3000
    title: qsTr("Hello World")

    Item{
        width: 1300
        height: 3000
        focus: true

        Keys.onPressed: {
            if (event.key === Qt.Key_Up){
                event.accepted = true;
                player.y = (player.y) - 60
            }
            if (event.key === Qt.Key_Down){
                event.accepted = true;
                player.y = (player.y) + 60
            }
            if (event.key === Qt.Key_Left){
                event.accepted = true;
                player.y = (player.x) - 60
            }
            if (event.key === Qt.Key_Right){
                event.accepted = true;
                player.y = (player.x) - 60
            }
        }

        Flickable {
            x: 8
            y: -5
            width: Screen.width
            height: Screen.height
            contentHeight: Screen.height * 4
            contentWidth: Screen.width
            interactive: true
            boundsBehavior: Flickable.StopAtBounds
            contentY: Math.min(contentHeight - heigth, Manth.max(0, player.y -height/2))

            Image {
                id:field
                width: 680
                height: 480
                anchors.fill: parent
                source: "stadium.png"
                sourceSize.width: Screen.width
                sourceSize.height: Screen.height *4

            }
            Image {
                id: player
                x: 600
                y: 940
                source: "firmino.jpg"
                width: 139
                height: 297
                sourceSize.height: 0
                sourceSize.width: 0
                clip: false
                visible: true

            }
        }
    }

}
