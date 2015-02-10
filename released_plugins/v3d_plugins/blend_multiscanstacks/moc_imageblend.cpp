/****************************************************************************
** Meta object code from reading C++ file 'imageblend.h'
**
** Created: Tue Jan 27 16:12:38 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "imageblend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageblend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageBlendPlugin[] = {

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

static const char qt_meta_stringdata_ImageBlendPlugin[] = {
    "ImageBlendPlugin\0"
};

const QMetaObject ImageBlendPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImageBlendPlugin,
      qt_meta_data_ImageBlendPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageBlendPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageBlendPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageBlendPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageBlendPlugin))
        return static_cast<void*>(const_cast< ImageBlendPlugin*>(this));
    if (!strcmp(_clname, "V3DPluginInterface2_1"))
        return static_cast< V3DPluginInterface2_1*>(const_cast< ImageBlendPlugin*>(this));
    if (!strcmp(_clname, "com.janelia.v3d.V3DPluginInterface/2.1"))
        return static_cast< V3DPluginInterface2_1*>(const_cast< ImageBlendPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int ImageBlendPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ImageBlendingDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      37,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ImageBlendingDialog[] = {
    "ImageBlendingDialog\0\0get_img_name1()\0"
    "get_img_name2()\0"
};

const QMetaObject ImageBlendingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImageBlendingDialog,
      qt_meta_data_ImageBlendingDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageBlendingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageBlendingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageBlendingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageBlendingDialog))
        return static_cast<void*>(const_cast< ImageBlendingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImageBlendingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: get_img_name1(); break;
        case 1: get_img_name2(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
