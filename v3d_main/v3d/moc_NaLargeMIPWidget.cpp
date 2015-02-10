/****************************************************************************
** Meta object code from reading C++ file 'NaLargeMIPWidget.h'
**
** Created: Tue Jan 27 16:07:00 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/gui/NaLargeMIPWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NaLargeMIPWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NaLargeMIPWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      43,   41,   17,   17, 0x05,
      96,   17,   17,   17, 0x05,
     120,   17,   17,   17, 0x05,
     159,  139,   17,   17, 0x05,
     194,  190,   17,   17, 0x05,
     211,  190,   17,   17, 0x05,
     231,   17,   17,   17, 0x05,
     246,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     261,   17,   17,   17, 0x0a,
     284,  280,   17,   17, 0x0a,
     311,   17,   17,   17, 0x0a,
     347,  335,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NaLargeMIPWidget[] = {
    "NaLargeMIPWidget\0\0statusMessage(QString)\0"
    ",\0volumeDataUpdated(const My4DImage*,const My4DImage*)\0"
    "hoverNeuronChanged(int)\0neuronClicked(int)\0"
    "neuronIndex,checked\0neuronDisplayToggled(int,bool)\0"
    "val\0setProgress(int)\0setProgressMax(int)\0"
    "showProgress()\0hideProgress()\0"
    "initializePixmap()\0pos\0"
    "onMouseSingleClick(QPoint)\0"
    "showContextMenu(QPoint)\0neuronIndex\0"
    "onHighlightedNeuronChanged(int)\0"
};

const QMetaObject NaLargeMIPWidget::staticMetaObject = {
    { &Na2DViewer::staticMetaObject, qt_meta_stringdata_NaLargeMIPWidget,
      qt_meta_data_NaLargeMIPWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NaLargeMIPWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NaLargeMIPWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NaLargeMIPWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NaLargeMIPWidget))
        return static_cast<void*>(const_cast< NaLargeMIPWidget*>(this));
    return Na2DViewer::qt_metacast(_clname);
}

int NaLargeMIPWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Na2DViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: volumeDataUpdated((*reinterpret_cast< const My4DImage*(*)>(_a[1])),(*reinterpret_cast< const My4DImage*(*)>(_a[2]))); break;
        case 2: hoverNeuronChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: neuronClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: neuronDisplayToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setProgressMax((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: showProgress(); break;
        case 8: hideProgress(); break;
        case 9: initializePixmap(); break;
        case 10: onMouseSingleClick((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 11: showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 12: onHighlightedNeuronChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void NaLargeMIPWidget::statusMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NaLargeMIPWidget::volumeDataUpdated(const My4DImage * _t1, const My4DImage * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NaLargeMIPWidget::hoverNeuronChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NaLargeMIPWidget::neuronClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NaLargeMIPWidget::neuronDisplayToggled(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NaLargeMIPWidget::setProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NaLargeMIPWidget::setProgressMax(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NaLargeMIPWidget::showProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void NaLargeMIPWidget::hideProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
