import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Window {
    visible: true
    width: 700
    height: 450
    minimumWidth: 500
    minimumHeight: 200
    title: qsTr("hsondd-Client")
    color: "#CED0D4"

    Backend {
        id: id_backend

        onStatusChanged: {
            id_ti.append(addMsg(newStatus));
            if (currentStatus !== true)
            {
                btn_connect.enabled = true;
            }
        }
        onSomeMessage: {
            id_ti.append(addMsg(msg));
        }
        onSomeError: {
            id_ti.append(addMsg("Error! " + err));
            if (currentStatus !== true)
            {
                id_backend.disconnectClicked();
            }
            btn_connect.enabled = true;
        }
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 10

        WidgetLayout {
            height: id_status.height + 15
            color: id_backend.currentStatus ? "#CAF5CF" : "#EA9FA9"

            Text {
                id: id_status
                anchors.centerIn: parent
                text: id_backend.currentStatus ? "CONNECTED" : "DISCONNECTED"
                font.weight: Font.Bold
            }
        }

        RowLayout {
            anchors.horizontalCenter: parent.horizontalCenter

            WidgetButton {
                id: btn_connect
                anchors.left: parent.left
                text: "Connect to server"
                color: enabled ? this.down ? "#78C37F" : "#87DB8D" : "gray"
                border.color: "#78C37F"
                onClicked: {
                    id_ti.append(addMsg("Connecting to server..."));
                    id_backend.connectClicked();
                    this.enabled = false;
                }
            }
            WidgetButton {
                id: btn_disconnect
                enabled: !btn_connect.enabled
                anchors.right: parent.right
                text: "Disconnect from server"
                color: enabled ? this.down ? "#DB7A74" : "#FF7E79" : "gray"
                border.color: "#DB7A74"
                onClicked: {
                    id_ti.append(addMsg("Disconnecting from server..."));
                    id_backend.disconnectClicked();
                    btn_connect.enabled = true;
                }
            }
        }

        WidgetLayout {
            Layout.fillHeight: true

            ScrollView {
                id: id_scrollView
                anchors.fill: parent

                TextArea {
                    id: id_ti
                    readOnly: true
                    selectByMouse: true
                    font.pixelSize: 14
                    wrapMode: TextInput.WrapAnywhere
                }
            }
        }

        RowLayout {
            Layout.leftMargin: 15
            Layout.rightMargin: 15
            Layout.topMargin: 5
            Layout.bottomMargin: 5

            Rectangle {
                Layout.fillWidth: true
                height: btn_send.height
                color: "#F4F2F5"
                border.color: "gray"
                border.width: 1

                TextInput {
                    id: id_msgToSend
                    anchors.verticalCenter: parent.verticalCenter
                    leftPadding: 10
                    rightPadding: 10
                    width: parent.width
                    font.pixelSize: 14
                    clip: true
                }
            }

            WidgetButton {
                id: btn_send
                enabled: !btn_connect.enabled
                text: "Send"
                color: enabled ? this.down ? "#6FA3D2" : "#7DB7E9" : "gray"
                border.color: "#6FA3D2"
                onClicked: {
                    id_ti.append(addMsg("Sending message..."));
                    id_backend.sendClicked(id_msgToSend.text);
                }
            }
        }
    }

    Component.onCompleted: {
        id_ti.text = addMsg("Application started\n- - - - - - - -", false);
    }
    function addMsg(someText) {
        return "[" + currentTime() + "]" + someText;
    }
    function currentTime()
    {
        var now = new Date();
        var nowStr = ("0" + now.getHours()).slice(-2) + ":"
        + ("0" + now.getMinutes()).slice(-2) + ":"
        + ("0" + now.getSeconds()).slice(-2);
        return nowStr
    }
}
