import QtQuick 2.15
import QtQuick.Controls
import QtStateLab 1.0

Item {

    Column {
        anchors.centerIn: parent
        spacing: 12

        Text {
            text: qsTr("Settings")
            font.pixelSize: 20
            color: "#FFFFFF"
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Row {
            spacing: 8

            Text {
                text: qsTr("Remember Login")
                color: "#FFFFFF"
            }

            Switch {
                checked: Settings.rememberLogin
                onToggled: Settings.rememberLogin = checked
            }
        }

        AppButton {
            text: qsTr("Back")
            onClicked: AppState.setCurrentScreen(AppState.Home)
        }
    }
}
