import QtQuick 2.14
import QtQuick.Window 2.14
import QtGraphicalEffects 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: rec1
        width: 374
        height: 432
        anchors.centerIn: parent
        color: "transparent"
        border.color: "green"
    }
    Rectangle {
        width: 374
        height: 16
        color: "transparent"
        border.color: "red"
        anchors.top: rec1.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }
    Rectangle {
        width: 374
        height: 16
        color: "transparent"
        border.color: "blue"
        anchors.bottom: rec1.top
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Item {
        id: widgetContent
        anchors.centerIn: parent
        width: 374
        height: 432

        PathView {
            id: id_pathView
            width: 374*3+25*2
            height: 720
            anchors.centerIn: parent
            anchors.horizontalCenter: parent.horizontalCenter
            preferredHighlightBegin: 0.5
            preferredHighlightEnd: 0.5
            highlightRangeMode: PathView.StrictlyEnforceRange
            snapMode: PathView.SnapOneItem
            delegate: Loader {
                asynchronous: true
                width: 374
                height: 432
                source: modelData
            }

            pathItemCount: 3
            cacheItemCount: 3
            highlightMoveDuration: 200
            path: Path {
                startY: 720*0.5
                startX: 0
                PathLine {
                    relativeY: 0
                    relativeX: id_pathView.width
                }
            }
            model: [
                "qrc:/Listxxx.qml",
                "qrc:/Listxxx.qml",
                "qrc:/Listxxx.qml",
                "qrc:/Listxxx.qml",
                "qrc:/Listxxx.qml",
                "qrc:/Listxxx.qml",
            ]
            layer.enabled: true
            layer.effect: OpacityMask {
                maskSource: mask
            }
        }

        Item {
            id: mask
            width: id_pathView.width
            height: parent.height
            visible: false
            Image {
                x: 374 - 20
                y: 0
                source: "mask_l"
            }
            Rectangle {
                x: 374 + 10
                y: 0
                width: 374 + 30
                height: 432
                color: "black"
            }
            Image {
                x: 374 + 20 + 374 + 20
                y: 0
                source: "mask_r"
            }
        }
    }

    Listxxx {
        anchors.centerIn: parent
        visible: false
    }
}
