import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    color: "gray"
    title: qsTr("Contact List")

    Rectangle {
        anchors.centerIn: parent
        width: 300; height: 200; color: "white"

        ListModel {
            id: nameModel
            ListElement { name: "Son"; file: ":/new/imag/images/ContactList_images_night.svg" }
            ListElement { name: "Vu"; file: ":/new/imag/images/ContactList_images_night.svg" }
            ListElement { name: "Anh"; file: ":/new/imag/images/ContactList_images_night.svg" }
            ListElement { name: "Hong"; file: ":/new/imag/images/ContactList_images_night.svg" }
            ListElement { name: "Doan"; file: ":/new/imag/images/ContactList_images_star.svg" }
            ListElement { name: "Thao"; file: ":/new/imag/images/ContactList_images_night.svg" }
            ListElement { name: "Van"; file: ":/new/imag/images/ContactList_images_star.svg" }
            ListElement { name: "Lam"; file: ":/new/imag/images/ContactList_images_night.svg" }
            ListElement { name: "Thi"; file: ":/new/imag/images/ContactList_images_star.svg" }
            ListElement { name: "Hap"; file: ":/new/imag/images/ContactList_images_night.svg" }
            ListElement { name: "Nguye"; file: ":/new/imag/images/ContactList_images_star.svg" }


        }

        Component {
            id: nameDelegate
            Item {
                id: delegateItem
                width: parent.width
                height: 28
            }
            Text {
                text: name
                font.pixelSize: parent.height - 4
                anchors.left: parent.left
                anchors.verticalCenter: parent.verticalCenter
            }
            Image {
                source: file
                fillMode: Image.PreserveAspectFit
                smooth: true
                sourceSize: Qt.size(64, 64)

                width: height; height: parent.height - 4
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter
            }
        }
    }

    ListView {
        id: listView
        anchors.fill: parent
        focus: true
        clip:true

        model: nameModel
        delegate: nameDelegate

        header: Rectangle {
            width: parent.width;
            height: 10
            color: "red"
        }
        footer: Rectangle {
            width: parent.width
            height: 10
            color : "red"
        }
        highlight: Rectangle {
            color: "lightgray"
        }
        Component.onCompleted: {
            listView.forceActiveFocus()

        }
    }

}
