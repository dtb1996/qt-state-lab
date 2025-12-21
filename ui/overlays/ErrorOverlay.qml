import QtQuick 2.15

Rectangle {
    id: root
    anchors.fill: parent
    color: "#80000000"

    property string message
    signal dismissed()

    MouseArea {
        anchors.fill: parent
        onClicked: root.dismissed()
    }

    Rectangle {
        width: 300
        height: column.height + 16
        anchors.centerIn: parent
        color: "#363636"
        radius: 8

        Column {
            id: column
            spacing: 8
            anchors.centerIn: parent

            Text {
                text: root.message
                wrapMode: Text.WordWrap
                color: "#FFFFFF"
                anchors.horizontalCenter: parent.horizontalCenter
            }

            AppButton {
                onClicked: root.dismissed()
                anchors.horizontalCenter: parent.horizontalCenter

                Text {
                    text: qsTr("OK")
                    color: "#000000"
                    anchors.centerIn: parent
                }
            }
        }
    }
}
