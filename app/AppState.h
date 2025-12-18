#ifndef APPSTATE_H
#define APPSTATE_H

#pragma once

#include <QObject>
#include <QString>

class AppState : public QObject
{
    Q_OBJECT

public:
    enum class Screen {
        Home,
        Settings
    };
    Q_ENUM(Screen)

    Q_PROPERTY(bool loading READ loading WRITE setLoading NOTIFY loadingChanged)
    Q_PROPERTY(QString errorMessage READ errorMessage WRITE setErrorMessage NOTIFY errorMessageChanged)
    Q_PROPERTY(Screen currentScreen READ currentScreen WRITE setCurrentScreen NOTIFY currentScreenChanged)

public:
    explicit AppState(QObject* parent = nullptr);

    bool loading() const;
    QString errorMessage() const;
    Screen currentScreen() const;

public slots:
    void setLoading(bool value);
    void setErrorMessage(const QString& message);
    void setCurrentScreen(Screen screen);
    void simulateLoading();

signals:
    void loadingChanged();
    void errorMessageChanged();
    void currentScreenChanged();

private:
    bool m_loading = false;
    QString m_errorMessage;
    Screen m_currentScreen = Screen::Home;
};

#endif // APPSTATE_H
