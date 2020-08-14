import QtQuick 2.3
import QtQuick.Controls 1.2

Rectangle {
    id: rootTangle
    width: 360
    height: 360
    color: "red"

    Rectangle {
        id: blueRec
        width: rootTangle.width/2
        height: 64
        anchors.centerIn: rootTangle
        border.color: "#000000"
        border.width: 7
        radius: 20
//        gradient: Gradient {
//            GradientStop { position: 0.0; color: "red" }
//            GradientStop { position: 0.33; color: "yellow" }
//            GradientStop { position: 1.0; color: "green" }
//        }
    }


//    Text {
//        anchors.centerIn: parent
//        text: "Hello world"
//        color: "white"
//        font.pixelSize: Math.round(blueRec.height/3)
//        width: blueRec.width
////        wrapMode: Text.WordWrap

//    }

    MouseArea {
        id: blueRecMouseArea
        hoverEnabled: true
        onEntered: {
            blueRec.color = "brown"
            blueRec.rotation = "45"
            fooText.rotation = "45"
        }
        onExited: {
            blueRec.color = "blue"
            blueRec.rotation = "0"
            fooText.rotation = "0"
        }

        Text {
            id: fooText;
            anchors.centerIn: blueRecMouseArea
            text: "Hello world"
            color: "white"
            font.pixelSize: Math.round(blueRec.height/3)


        }
    }
}
