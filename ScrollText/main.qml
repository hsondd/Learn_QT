
import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        anchors.centerIn: parent
        id: rec
        width: 200
        height: 100
        property int aTime: 3000
        color: "green"
        clip: true


        RunningText {
            id: t1
            dur: 9000
            text: "viet nam dan chu cong hoa truogn dai hoc bach khoa ha noi"
            Component.onCompleted: {
                pa1.restart();
            }
        }
        RunningText {
            id: t2
            y: t1.y + 40
            text: "Văn Toàn và Công Phượng cùng lập công, nhưng đội bóng phố núi chỉ có được kết quả 2-2 ở vòng 11 V-League 2018, chiều 3/6."
        }

        RunningText {
            id: t3
            y: t2.y + 40
            text: "Văn Toàn và Côngsfedf fasdf sadffdsa fsad sa dfdsa fdsa fsad fsad f"
        }

        SequentialAnimation {
            id: pa1
            PropertyAnimation{ target: t1; property: "x"; from: 0; to:  t1.des; duration: t1.dur }
            PauseAnimation { duration: t1.delay }
            PropertyAnimation{ target: t2; property: "x"; from: 0; to:  t2.des; duration: t2.dur }
            PauseAnimation { duration: t2.delay }
            PropertyAnimation{ target: t3; property: "x"; from: 0; to:  t3.des; duration: t3.dur }
            PauseAnimation { duration: t3.delay }
        }

    }
}
