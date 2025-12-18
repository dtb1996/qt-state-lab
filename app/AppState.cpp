#include "AppState.h"
#include <QTimer>

AppState::AppState(QObject* parent)
    : QObject(parent)
{

}

bool AppState::loading() const
{
    return m_loading;
}

QString AppState::errorMessage() const
{
    return m_errorMessage;
}

AppState::Screen AppState::currentScreen() const
{
    return m_currentScreen;
}

void AppState::setLoading(bool value)
{
    if (m_loading == value)
    {
        return;
    }

    m_loading = value;
    emit loadingChanged();
}

void AppState::setErrorMessage(const QString& message)
{
    if (m_errorMessage == message)
    {
        return;
    }

    m_errorMessage = message;
    emit errorMessageChanged();
}

void AppState::setCurrentScreen(Screen screen)
{
    if (m_currentScreen == screen)
    {
        return;
    }

    m_currentScreen = screen;
    emit currentScreenChanged();
}

void AppState::simulateLoading()
{
    setLoading(true);

    QTimer::singleShot(1500, this, [this]() {
        setLoading(false);
    });
}
