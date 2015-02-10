/****************************************************************************
** Meta object code from reading C++ file 'ZSliceColors.h'
**
** Created: Tue Jan 27 16:06:59 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/data_model/ZSliceColors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZSliceColors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZSliceColors[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      25,   23,   13,   13, 0x0a,
      46,   40,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ZSliceColors[] = {
    "ZSliceColors\0\0update()\0z\0setZIndex(int)\0"
    "focus\0onCameraFocusChanged(Vector3D)\0"
};

const QMetaObject ZSliceColors::staticMetaObject = {
    { &NaLockableData::staticMetaObject, qt_meta_stringdata_ZSliceColors,
      qt_meta_data_ZSliceColors, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZSliceColors::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZSliceColors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZSliceColors::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZSliceColors))
        return static_cast<void*>(const_cast< ZSliceColors*>(this));
    return NaLockableData::qt_metacast(_clname);
}

int ZSliceColors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NaLockableData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update(); break;
        case 1: setZIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: onCameraFocusChanged((*reinterpret_cast< const Vector3D(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
