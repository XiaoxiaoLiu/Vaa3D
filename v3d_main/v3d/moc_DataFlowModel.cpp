/****************************************************************************
** Meta object code from reading C++ file 'DataFlowModel.h'
**
** Created: Tue Jan 27 16:07:00 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/DataFlowModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataFlowModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataFlowModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,
      71,   14,   14,   14, 0x05,
      88,   14,   14,   14, 0x05,
     107,   14,   14,   14, 0x05,
     138,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     176,   14,   14,   14, 0x0a,
     185,   14,   14,   14, 0x0a,
     203,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataFlowModel[] = {
    "DataFlowModel\0\0index\0"
    "scrollBarFocus(NeuronSelectionModel::NeuronIndex)\0"
    "deselectNeuron()\0volumeDataNeeded()\0"
    "benchmarkTimerResetRequested()\0"
    "benchmarkTimerPrintRequested(QString)\0"
    "cancel()\0debugColorModel()\0"
    "synchronizeColorModels()\0"
};

const QMetaObject DataFlowModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataFlowModel,
      qt_meta_data_DataFlowModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataFlowModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataFlowModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataFlowModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataFlowModel))
        return static_cast<void*>(const_cast< DataFlowModel*>(this));
    return QObject::qt_metacast(_clname);
}

int DataFlowModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: scrollBarFocus((*reinterpret_cast< NeuronSelectionModel::NeuronIndex(*)>(_a[1]))); break;
        case 1: deselectNeuron(); break;
        case 2: volumeDataNeeded(); break;
        case 3: benchmarkTimerResetRequested(); break;
        case 4: benchmarkTimerPrintRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: cancel(); break;
        case 6: debugColorModel(); break;
        case 7: synchronizeColorModels(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DataFlowModel::scrollBarFocus(NeuronSelectionModel::NeuronIndex _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataFlowModel::deselectNeuron()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DataFlowModel::volumeDataNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DataFlowModel::benchmarkTimerResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DataFlowModel::benchmarkTimerPrintRequested(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
