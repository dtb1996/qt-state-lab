#include "SettingsManager.h"

SettingsManager::SettingsManager(QObject *parent)
    : QObject(parent),
    m_settings("QtStateLab", "QtStateLab")
{
    load();
}

QString SettingsManager::theme() const
{
    return m_theme;
}

QString SettingsManager::language() const
{
    return m_language;
}

bool SettingsManager::rememberLogin() const
{
    return m_rememberLogin;
}

void SettingsManager::setTheme(const QString &value)
{
    if (m_theme == value)
    {
        return;
    }

    m_theme = value;
    save("theme", value);
    emit themeChanged();
}

void SettingsManager::setLanguage(const QString &value)
{
    if (m_language == value)
    {
        return;
    }

    m_language = value;
    save("language", value);
    emit languageChanged();
}

void SettingsManager::setRememberLogin(bool value)
{
    if (m_rememberLogin == value)
    {
        return;
    }

    m_rememberLogin = value;
    save("rememberLogin", value);
    emit rememberLoginChanged();
}

void SettingsManager::load()
{
    m_theme = m_settings.value("theme", "light").toString();
    m_language = m_settings.value("language", "en").toString();
    m_rememberLogin = m_settings.value("rememberLogin", false).toBool();
}

void SettingsManager::save(const QString &key, const QVariant &value)
{
    m_settings.setValue(key, value);
}
