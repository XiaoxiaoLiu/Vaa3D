/****************************************************************************
** Meta object code from reading C++ file 'MouseClickManager.h'
**
** Created: Tue Jan 27 16:07:01 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/gui/MouseClickManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MouseClickManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MouseClickManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      39,   18,   18,   18, 0x05,
      66,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MouseClickManager[] = {
    "MouseClickManager\0\0singleClick(QPoint)\0"
    "possibleSingleClickAlert()\0notSingleClick()\0"
    "onClickTimerTimedOut()\0"
};

const QMetaObject MouseClickManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MouseClickManager,
      qt_meta_data_MouseClickManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MouseClickManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MouseClickManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MouseClickManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MouseClickManager))
        return static_cast<void*>(const_cast< MouseClickManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MouseClickManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: singleClick((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: possibleSingleClickAlert(); break;
        case 2: notSingleClick(); break;
        case 3: onClickTimerTimedOut(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MouseClickManager::singleClick(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MouseClickManager::possibleSingleClickAlert()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MouseClickManager::notSingleClick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
