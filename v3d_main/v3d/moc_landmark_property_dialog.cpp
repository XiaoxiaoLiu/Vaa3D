/****************************************************************************
** Meta object code from reading C++ file 'landmark_property_dialog.h'
**
** Created: Tue Jan 27 16:06:57 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "landmark_property_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'landmark_property_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LandmarkPropertyDialog[] = {

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
      24,   23,   23,   23, 0x0a,
      45,   43,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LandmarkPropertyDialog[] = {
    "LandmarkPropertyDialog\0\0compute_rgn_stat()\0"
    "c\0compute_rgn_stat(int)\0"
};

const QMetaObject LandmarkPropertyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LandmarkPropertyDialog,
      qt_meta_data_LandmarkPropertyDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LandmarkPropertyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LandmarkPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LandmarkPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LandmarkPropertyDialog))
        return static_cast<void*>(const_cast< LandmarkPropertyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LandmarkPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: compute_rgn_stat(); break;
        case 1: compute_rgn_stat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
