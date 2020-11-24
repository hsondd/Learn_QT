import QtQuick 2.0

Item {
    id: button
    property string backColor
    property string borderColor
    property int borderWidth
    property int radius

    Rectangle {
        id: blueRec
        width: parent.width
        height: parent.height
        color: button.backColor
//        anchors.centerIn: rootTangle
        radius: button.radius
        border.color: button.borderColor
        border.width: button.borderWidth
    }
    MouseArea {
        id: blueRecMouseArea
        anchors.fill: blueRec
        hoverEnabled: true
        onEntered: {
            blueRec.scale = 1.5
            blueRec.color = "green"
            blueRec.border.color = "blue"
        }
        onExited: {
            blueRec.color = "blue"
            blueRec.border.color = "green"
        }
        onClicked: {
            console.log("mouse area clicked")
        }
    }
    Text {
        id: mainText
        font.pixelSize: Math.round(rootTangle.height / 10)
        anchors.centerIn: blueRecMouseArea
        text: "Doan Hong Son"
        color: "white"
        wrapMode: Text.WordWrap
    }


}
