import QtQuick

Window {
    width: 240
    height: 120
    visible: true
    title: qsTr("Hello World")

    Text {
        x: 12
        y: 12
        text: "Version: " + qtversion
    }
}
