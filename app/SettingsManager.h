#pragma once

#include <QObject>
#include <QSettings>

class SettingsManager : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString theme READ theme WRITE setTheme NOTIFY themeChanged)
    Q_PROPERTY(QString language READ language WRITE setLanguage NOTIFY languageChanged)
    Q_PROPERTY(bool rememberLogin READ rememberLogin WRITE setRememberLogin NOTIFY rememberLoginChanged)

public:
    explicit SettingsManager(QObject* parent = nullptr);

    QString theme() const;
    QString language() const;
    bool rememberLogin() const;

public slots:
    void setTheme(const QString& value);
    void setLanguage(const QString& value);
    void setRememberLogin(bool value);

signals:
    void themeChanged();
    void languageChanged();
    void rememberLoginChanged();

private:
    void load();
    void save(const QString& key, const QVariant& value);

    QSettings m_settings;

    QString m_theme;
    QString m_language;
    bool m_rememberLogin = false;
};
