cmake_minimum_required(VERSION 3.16)

project(QtStateLab VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appQtStateLab
    main.cpp
)

qt_add_qml_module(appQtStateLab
    URI QtStateLab
    VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}
    QML_FILES
        ui/Main.qml
        ui/screens/HomeScreen.qml
        ui/screens/SettingsScreen.qml
        ui/overlays/ErrorOverlay.qml
        ui/overlays/LoadingOverlay.qml
        ui/components/AppButton.qml
    SOURCES
        app/AppState.h app/AppState.cpp
        app/SettingsManager.h app/SettingsManager.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appQtStateLab PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appQtStateLab
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appQtStateLab
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appQtStateLab
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
