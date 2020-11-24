import QtQuick 2.7
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {

        ColumnLayout {
            spacing: 15
            anchors.centerIn: parent

            Button {
                id: btnStop
                text: "Stop"
            }

            Button {
                id: btnGo
                text: "Go"
            }

            StopLight {
                id: stoplight
            }
        }
    }
}
