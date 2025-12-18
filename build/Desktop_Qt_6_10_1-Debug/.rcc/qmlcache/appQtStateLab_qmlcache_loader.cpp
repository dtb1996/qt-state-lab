#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_QtStateLab_ui_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_QtStateLab_ui_screens_HomeScreen_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_QtStateLab_ui_screens_SettingsScreen_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_QtStateLab_ui_overlays_ErrorOverlay_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_QtStateLab_ui_overlays_LoadingOverlay_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_QtStateLab_ui_components_AppButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/QtStateLab/ui/Main.qml"), &QmlCacheGeneratedCode::_qt_qml_QtStateLab_ui_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/QtStateLab/ui/screens/HomeScreen.qml"), &QmlCacheGeneratedCode::_qt_qml_QtStateLab_ui_screens_HomeScreen_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/QtStateLab/ui/screens/SettingsScreen.qml"), &QmlCacheGeneratedCode::_qt_qml_QtStateLab_ui_screens_SettingsScreen_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/QtStateLab/ui/overlays/ErrorOverlay.qml"), &QmlCacheGeneratedCode::_qt_qml_QtStateLab_ui_overlays_ErrorOverlay_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/QtStateLab/ui/overlays/LoadingOverlay.qml"), &QmlCacheGeneratedCode::_qt_qml_QtStateLab_ui_overlays_LoadingOverlay_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/QtStateLab/ui/components/AppButton.qml"), &QmlCacheGeneratedCode::_qt_qml_QtStateLab_ui_components_AppButton_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appQtStateLab)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appQtStateLab))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_appQtStateLab)() {
    return 1;
}
