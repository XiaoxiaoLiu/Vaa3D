/****************************************************************************
** Meta object code from reading C++ file 'clonalselect_gui.h'
**
** Created: Tue Jan 27 16:12:41 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clonalselect_gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clonalselect_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColonalSelectWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      54,   42,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   20,   20,   20, 0x0a,
     107,  103,   20,   20, 0x08,
     126,   20,   20,   20, 0x08,
     149,  139,   20,   20, 0x08,
     167,   20,   20,   20, 0x08,
     182,   20,   20,   20, 0x08,
     199,   42,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColonalSelectWidget[] = {
    "ColonalSelectWidget\0\0textChanged(QString)\0"
    "val,message\0sendProgressBarChanged(int,const char*)\0"
    "update()\0dir\0updateDir(QString)\0"
    "getMaskDir()\0threshold\0setThreshold(int)\0"
    "selectClonal()\0evaluateClonal()\0"
    "progressBarChanged(int,const char*)\0"
};

const QMetaObject ColonalSelectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ColonalSelectWidget,
      qt_meta_data_ColonalSelectWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColonalSelectWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColonalSelectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColonalSelectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColonalSelectWidget))
        return static_cast<void*>(const_cast< ColonalSelectWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ColonalSelectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: sendProgressBarChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 2: update(); break;
        case 3: updateDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: getMaskDir(); break;
        case 5: setThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: selectClonal(); break;
        case 7: evaluateClonal(); break;
        case 8: progressBarChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ColonalSelectWidget::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColonalSelectWidget::sendProgressBarChanged(int _t1, const char * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
