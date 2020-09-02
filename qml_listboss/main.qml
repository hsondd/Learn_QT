import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ListView {
        id: lsv
        width: parent.width
        height: parent.height
        model: bossBoss
        delegate: Rectangle {
            width: parent.width
            height: 40
            border.width: 1

            Text {
                text: index + ": " + memberName + " age: " + memberAge
                anchors.centerIn: parent
                font.pixelSize: 35
                color: lsv.currentIndex == index ? "green" : "gray"
                Component.onCompleted: {
                    console.log(index, "complete")
                }
            }
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    lsv.currentIndex = index
                }
            }
        }
    }
}
