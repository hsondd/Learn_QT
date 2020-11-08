import QtQuick 2.0

Item {
    readonly property int widgetWidth: 374
    readonly property int widgetHeight: 432
    readonly property int offfetP: 60

    PathView {
        id: id_pathView
        width: widgetWidth
        height: 720
        anchors.centerIn: parent
        preferredHighlightBegin: 0.5
        preferredHighlightEnd: 0.5
        highlightRangeMode: PathView.StrictlyEnforceRange
        snapMode: PathView.SnapOneItem
        delegate: idDelegate
        pathItemCount: 3
        cacheItemCount: 3
        highlightMoveDuration: 333
        model: 3
        path: (id_pathView.count == 2) ? id_path2 : id_path
        interactive: false
    }

    Path {
        id: id_path
        startX: id_pathView.width * 0.5
        startY: pathMidpoint -offfetP

        PathAttribute {name: "zList"; value: -1.0 }
        PathAttribute { name: "cardScale"; value: 0.8 }
        PathAttribute { name: "opacityList"; value: 0.8 }
        PathLine { x: id_pathView.width * 0.5; y: pathMidpoint - 16 }
        PathPercent { value: 0.45 }

        //middle of the pathElements:
        PathAttribute { name: "zList"; value: 0}
        PathAttribute { name: "cardScale"; value: 1.0 }
        PathAttribute { name:  "opacityList"; value: 0.8 }

        PathLine { x: id_pathView.width*0.5; y: pathMidpoint + 16 }

        PathAttribute { name: "zList"; value: 0 }
        PathAttribute { name: "cardScale"; value: 1.0 }
        PathAttribute { name: "opacityList"; value: 1.0 }

        PathPercent { value: 0.55 }

