import QtQuick 2.12
import QtQuick.Controls 2.12

Button {
    id: id_btn

    leftPadding: padding + 10
    topPadding: padding + 5
    rightPadding: padding + 10
    bottomPadding:  padding + 15

    property alias color: back.color
    property alias border: back.border

    contentItem: Text {
        text: control.text
        font.pixelSize: 14
    }

    background: Rectangle {
        id: back
        border.width: 1
        radius: 5
    }
}
