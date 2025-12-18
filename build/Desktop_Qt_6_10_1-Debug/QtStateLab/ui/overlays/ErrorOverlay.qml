import QtQuick 2.15
import QtQuick.Controls

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
        // padding: 16

        Column {
            id: column
            spacing: 8
            anchors.centerIn: parent

            Text {
                text: root.message
                wrapMode: Text.WordWrap
                color: "#FFFFFF"
            }

            Button {
                text: qsTr("OK")
                onClicked: root.dismissed()
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }
}
