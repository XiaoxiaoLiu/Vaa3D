/****************************************************************************
** Meta object code from reading C++ file 'CameraModel.h'
**
** Created: Tue Jan 27 16:07:00 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/geometry/CameraModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CameraModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      36,   12,   12,   12, 0x05,
      64,   12,   12,   12, 0x05,
      84,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     100,   98,   12,   12, 0x0a,
     119,   12,   12,   12, 0x0a,
     135,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CameraModel[] = {
    "CameraModel\0\0focusChanged(Vector3D)\0"
    "rotationChanged(Rotation3D)\0"
    "scaleChanged(qreal)\0viewChanged()\0v\0"
    "setFocus(Vector3D)\0setScale(qreal)\0"
    "setRotation(Rotation3D)\0"
};

const QMetaObject CameraModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CameraModel,
      qt_meta_data_CameraModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CameraModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CameraModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CameraModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CameraModel))
        return static_cast<void*>(const_cast< CameraModel*>(this));
    return QObject::qt_metacast(_clname);
}

int CameraModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: focusChanged((*reinterpret_cast< const Vector3D(*)>(_a[1]))); break;
        case 1: rotationChanged((*reinterpret_cast< const Rotation3D(*)>(_a[1]))); break;
        case 2: scaleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: viewChanged(); break;
        case 4: setFocus((*reinterpret_cast< const Vector3D(*)>(_a[1]))); break;
        case 5: setScale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: setRotation((*reinterpret_cast< const Rotation3D(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CameraModel::focusChanged(const Vector3D & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraModel::rotationChanged(const Rotation3D & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraModel::scaleChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraModel::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
