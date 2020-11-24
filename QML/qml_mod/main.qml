import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: Screen.width /2
    height: Screen.height / 2
    title: qsTr("Hello World")

    ListView {
        width: Screen.width /2
        height: Screen.height / 2

        spacing: 10

        header: Header{}

        model: mod
        delegate: MyDelegate{}
    }

    MyModel {
        id: mod
    }


}
