import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    color: "blue"
    Text {
        id: label
        x: 50
        y: 50
        font.pixelSize: 30

        property int spacePresses: 0
        text: "Space Pressed: " + spacePresses + " Times"
        onTextChanged: console.log("Text changed to " + text)

        focus: true

        Keys.onSpacePressed: {
            increment()
        }
        Keys.onEscapePressed: {
            lable.text = ""
        }
        function increment()
        {
            spacePresses = spacePresses + 1
        }
    }
}
