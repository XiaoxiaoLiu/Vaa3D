/****************************************************************************
** Meta object code from reading C++ file 'ifusion.h'
**
** Created: Tue Jan 27 16:12:43 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ifusion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ifusion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageFusionPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ImageFusionPlugin[] = {
    "ImageFusionPlugin\0"
};

const QMetaObject ImageFusionPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImageFusionPlugin,
      qt_meta_data_ImageFusionPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageFusionPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageFusionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageFusionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageFusionPlugin))
        return static_cast<void*>(const_cast< ImageFusionPlugin*>(this));
    if (!strcmp(_clname, "V3DPluginInterface2_1"))
        return static_cast< V3DPluginInterface2_1*>(const_cast< ImageFusionPlugin*>(this));
    if (!strcmp(_clname, "com.janelia.v3d.V3DPluginInterface/2.1"))
        return static_cast< V3DPluginInterface2_1*>(const_cast< ImageFusionPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int ImageFusionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ImageFusionDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ImageFusionDialog[] = {
    "ImageFusionDialog\0\0getExitingfolder()\0"
};

const QMetaObject ImageFusionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImageFusionDialog,
      qt_meta_data_ImageFusionDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageFusionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageFusionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageFusionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageFusionDialog))
        return static_cast<void*>(const_cast< ImageFusionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImageFusionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: getExitingfolder(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
