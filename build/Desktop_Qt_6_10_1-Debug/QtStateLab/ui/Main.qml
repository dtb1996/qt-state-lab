import QtQuick
import QtQuick.Controls
import QtStateLab 1.0

ApplicationWindow {
    id: mainWindow
    width: 640
    height: 480
    visible: true
    title: qsTr("Qt State Lab")

    StackView {
        id: stackView
        anchors.fill: parent
        initialItem: homeScreenComponent

        pushEnter: null
        pushExit: null
        popEnter: null
        popExit: null
        // replaceEnter: null
        // replaceExit: null

        replaceEnter: Transition {
            NumberAnimation {
                property: "opacity"
                from: 0
                to: 1
                duration: 120
            }
        }

        replaceExit: Transition {
            NumberAnimation {
                property: "opacity"
                from: 1
                to: 0
                duration: 120
            }
        }
    }

    LoadingOverlay {
        visible: AppState.loading
    }

    ErrorOverlay {
        visible: AppState.errorMessage.length > 0
        message: AppState.errorMessage
        onDismissed: AppState.setErrorMessage("")
    }

    Component {
        id: homeScreenComponent
        HomeScreen {}
    }

    Component {
        id: settingsScreenComponent
        SettingsScreen {}
    }


    Shortcut {
        sequence: "Escape"
        onActivated: Qt.quit()
    }

    Shortcut {
        sequence: "Alt+Return"
        onActivated: {
            if (mainWindow.visibility === Window.FullScreen) {
                mainWindow.visibility = Window.Windowed
            } else {
                mainWindow.visibility = Window.FullScreen
            }
        }
    }

    Connections {
        target: AppState

        function onCurrentScreenChanged() {
            switch (AppState.currentScreen) {
            case AppState.Home:
                stackView.replace(homeScreenComponent)
                break
            case AppState.Settings:
                stackView.replace(settingsScreenComponent)
                break
            }
        }
    }
}
