import QtQuick 2.15
import QtQuick.Controls

Rectangle {
    anchors.fill: parent
    color: "#80000000"
    visible: false

    BusyIndicator {
        anchors.centerIn: parent
        running: visible
    }
}
