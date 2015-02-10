/****************************************************************************
** Meta object code from reading C++ file 'FooDebug.h'
**
** Created: Tue Jan 27 16:07:00 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/utility/FooDebug.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FooDebug.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FooDebugWriter[] = {

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
      24,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FooDebugWriter[] = {
    "FooDebugWriter\0\0message\0printMessage(QString)\0"
};

const QMetaObject FooDebugWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FooDebugWriter,
      qt_meta_data_FooDebugWriter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FooDebugWriter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FooDebugWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FooDebugWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FooDebugWriter))
        return static_cast<void*>(const_cast< FooDebugWriter*>(this));
    return QObject::qt_metacast(_clname);
}

int FooDebugWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: printMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_FooDebugString[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FooDebugString[] = {
    "FooDebugString\0\0message\0"
    "messageCompleted(QString)\0"
};

const QMetaObject FooDebugString::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FooDebugString,
      qt_meta_data_FooDebugString, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FooDebugString::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FooDebugString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FooDebugString::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FooDebugString))
        return static_cast<void*>(const_cast< FooDebugString*>(this));
    return QObject::qt_metacast(_clname);
}

int FooDebugString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FooDebugString::messageCompleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
