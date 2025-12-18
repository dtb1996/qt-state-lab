import QtQuick 2.15
import QtStateLab 1.0

Item {

    Column {
        anchors.centerIn: parent
        spacing: 12

        Text {
            text: qsTr("Home")
            font.pixelSize: 20
            color: "#FFFFFF"
            anchors.horizontalCenter: parent.horizontalCenter
        }

        AppButton {
            text: qsTr("Go to Settings")
            onClicked: AppState.setCurrentScreen(AppState.Settings)
        }

        AppButton {
            text: qsTr("Simulate Loading")
            onClicked: AppState.simulateLoading()
        }

        AppButton {
            text: qsTr("Trigger Error")
            onClicked: AppState.setErrorMessage("Something went wrong")
        }

        AppButton {
            text: qsTr("Quit")
            onClicked: Qt.quit()
        }
    }
}
