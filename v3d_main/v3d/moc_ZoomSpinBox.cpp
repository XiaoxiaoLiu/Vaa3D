/****************************************************************************
** Meta object code from reading C++ file 'ZoomSpinBox.h'
**
** Created: Tue Jan 27 16:07:01 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/gui/ZoomSpinBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZoomSpinBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZoomSpinBox[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   47,   12,   12, 0x0a,
      88,   79,   12,   12, 0x0a,
     108,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ZoomSpinBox[] = {
    "ZoomSpinBox\0\0zoomValue\0zoomValueChanged(qreal)\0"
    "doubleValue\0setZoomValue(qreal)\0"
    "intValue\0onValueChanged(int)\0reset()\0"
};

const QMetaObject ZoomSpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_ZoomSpinBox,
      qt_meta_data_ZoomSpinBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZoomSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZoomSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZoomSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomSpinBox))
        return static_cast<void*>(const_cast< ZoomSpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int ZoomSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: zoomValueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: setZoomValue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: reset(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ZoomSpinBox::zoomValueChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE