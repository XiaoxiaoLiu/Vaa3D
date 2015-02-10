/****************************************************************************
** Meta object code from reading C++ file 'CompartmentMapWidget.h'
**
** Created: Tue Jan 27 16:07:01 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/gui/CompartmentMapWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompartmentMapWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompartmentMapWidget[] = {

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
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   54,   21,   21, 0x0a,
      81,   21,   21,   21, 0x0a,
     107,  105,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CompartmentMapWidget[] = {
    "CompartmentMapWidget\0\0"
    "viscomp3dview(QList<LabelSurf>)\0num\0"
    "switchCompartment(int)\0setRotation(Rotation3D)\0"
    "f\0setFocus(Vector3D)\0"
};

const QMetaObject CompartmentMapWidget::staticMetaObject = {
    { &V3dR_GLWidget::staticMetaObject, qt_meta_stringdata_CompartmentMapWidget,
      qt_meta_data_CompartmentMapWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompartmentMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompartmentMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompartmentMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompartmentMapWidget))
        return static_cast<void*>(const_cast< CompartmentMapWidget*>(this));
    return V3dR_GLWidget::qt_metacast(_clname);
}

int CompartmentMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = V3dR_GLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: viscomp3dview((*reinterpret_cast< const QList<LabelSurf>(*)>(_a[1]))); break;
        case 1: switchCompartment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setRotation((*reinterpret_cast< const Rotation3D(*)>(_a[1]))); break;
        case 3: setFocus((*reinterpret_cast< const Vector3D(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CompartmentMapWidget::viscomp3dview(const QList<LabelSurf> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
