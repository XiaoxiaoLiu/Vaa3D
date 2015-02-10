/****************************************************************************
** Meta object code from reading C++ file 'CutPlanner.h'
**
** Created: Tue Jan 27 16:07:22 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/microCT/CutPlanner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CutPlanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CutPlanner[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      33,   11,   11,   11, 0x05,
      61,   54,   11,   11, 0x05,
      94,   85,   11,   11, 0x05,
     123,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     152,   85,   11,   11, 0x0a,
     186,  182,   11,   11, 0x0a,
     225,   11,   11,   11, 0x0a,
     267,   11,   11,   11, 0x0a,
     301,  295,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CutPlanner[] = {
    "CutPlanner\0\0clipPlaneRequested()\0"
    "keepPlaneRequested()\0doShow\0"
    "cutGuideRequested(bool)\0rotation\0"
    "rotationAdjusted(Rotation3D)\0"
    "compartmentNamingRequested()\0"
    "onRotationChanged(Rotation3D)\0val\0"
    "on_micrometersBox_valueChanged(double)\0"
    "on_labelBrainCompartmentsButton_clicked()\0"
    "on_savePlanButton_clicked()\0index\0"
    "setCurrentWidget(int)\0"
};

const QMetaObject CutPlanner::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CutPlanner,
      qt_meta_data_CutPlanner, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CutPlanner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CutPlanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CutPlanner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CutPlanner))
        return static_cast<void*>(const_cast< CutPlanner*>(this));
    return QDialog::qt_metacast(_clname);
}

int CutPlanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clipPlaneRequested(); break;
        case 1: keepPlaneRequested(); break;
        case 2: cutGuideRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: rotationAdjusted((*reinterpret_cast< Rotation3D(*)>(_a[1]))); break;
        case 4: compartmentNamingRequested(); break;
        case 5: onRotationChanged((*reinterpret_cast< Rotation3D(*)>(_a[1]))); break;
        case 6: on_micrometersBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: on_labelBrainCompartmentsButton_clicked(); break;
        case 8: on_savePlanButton_clicked(); break;
        case 9: setCurrentWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CutPlanner::clipPlaneRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CutPlanner::keepPlaneRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CutPlanner::cutGuideRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CutPlanner::rotationAdjusted(Rotation3D _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CutPlanner::compartmentNamingRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
