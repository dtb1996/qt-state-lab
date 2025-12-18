#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "app/AppState.h"
#include "app/SettingsManager.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    AppState appState;
    qmlRegisterSingletonInstance("QtStateLab", 1, 0, "AppState", &appState);

    SettingsManager settingsManager;
    qmlRegisterSingletonInstance("QtStateLab", 1, 0, "Settings", &settingsManager);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("QtStateLab", "Main");

    return app.exec();
}
