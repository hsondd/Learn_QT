import QtQuick 2.2
import QtQuick.Window 2.2
import custom.library.data 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MyData {
        id: myData
        text: "TEST MY DATA"
        color: "red"
        fontSize: 13
    }

    Text {
        id: txt;
        text: "test text"
        color: "blue"
        font.pointSize: 20
        MouseArea {
            anchors.fill: parent
            onClicked: {
                txt.text = myData.text
                txt.color = myData.color
                txt.font.pointSize = myData.fontSize

            }
        }
    }
}
