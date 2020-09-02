import QtQuick 2.9
import QtQuick.Window 2.1
import QtQuick.Controls 2.1

Window {
    id: root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    function createAllObjects() {
        var qml = "import QtQuick 2.9;"
        qml += "import QtQuick.Controls 2.1;"
        qml += "Rectangle {anchors.fill: parent; color: 'red' }";
        Qt.createQmlObject(qml, root, "snippet1");
        return msg;
    }

}
