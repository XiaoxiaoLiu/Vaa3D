/****************************************************************************
** Meta object code from reading C++ file 'v3d_plugin_loader.h'
**
** Created: Tue Jan 27 16:06:55 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../plugin_loader/v3d_plugin_loader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3d_plugin_loader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_V3d_PluginLoader[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      34,   17,   17,   17, 0x0a,
      50,   17,   17,   17, 0x0a,
      65,   17,   17,   17, 0x0a,
      95,   77,   17,   17, 0x0a,
     129,   17,   17,   17, 0x0a,
     147,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_V3d_PluginLoader[] = {
    "V3d_PluginLoader\0\0rescanPlugins()\0"
    "populateMenus()\0aboutPlugins()\0"
    "runPlugin()\0loader,menuString\0"
    "runPlugin(QPluginLoader*,QString)\0"
    "runRecentPlugin()\0clear_recentPlugins()\0"
};

const QMetaObject V3d_PluginLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_V3d_PluginLoader,
      qt_meta_data_V3d_PluginLoader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &V3d_PluginLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *V3d_PluginLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *V3d_PluginLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_V3d_PluginLoader))
        return static_cast<void*>(const_cast< V3d_PluginLoader*>(this));
    if (!strcmp(_clname, "V3DPluginCallback2"))
        return static_cast< V3DPluginCallback2*>(const_cast< V3d_PluginLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int V3d_PluginLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rescanPlugins(); break;
        case 1: populateMenus(); break;
        case 2: aboutPlugins(); break;
        case 3: runPlugin(); break;
        case 4: runPlugin((*reinterpret_cast< QPluginLoader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: runRecentPlugin(); break;
        case 6: clear_recentPlugins(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
