import QtQuick 2.14
import QtQuick.Window 2.14

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Column {
        width: 180
        height: 180
        padding: 1.5
        topPadding: 10
        bottomPadding: 10
        spacing: 5

        MessageLabel {
            width: parent.width - 2
            msgType: "debug"
        }
        MessageLabel {
            width: parent.width - 2
            message: "This is warning"
            msgType: "warning"
        }
        MessageLabel {
            width: parent.width - 2;
            message: "A critical warning"
            msgType: "critical"
        }
    }
}
