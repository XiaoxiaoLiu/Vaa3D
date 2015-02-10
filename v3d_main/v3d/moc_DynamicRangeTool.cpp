/****************************************************************************
** Meta object code from reading C++ file 'DynamicRangeTool.h'
**
** Created: Tue Jan 27 16:07:00 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/gui/DynamicRangeTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DynamicRangeTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DynamicRangeTool[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x05,
      56,   44,   17,   17, 0x05,
      99,   85,   17,   17, 0x05,
     151,  139,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     195,  182,   17,   17, 0x0a,
     211,   17,   17,   17, 0x0a,
     229,  225,   17,   17, 0x0a,
     248,  244,   17,   17, 0x0a,
     269,  263,   17,   17, 0x0a,
     286,   17,   17,   17, 0x0a,
     300,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DynamicRangeTool[] = {
    "DynamicRangeTool\0\0index\0channelChanged(int)\0"
    "index,color\0channelColorChanged(int,int)\0"
    "index,min,max\0channelHdrRangeChanged(int,qreal,qreal)\0"
    "index,gamma\0channelGammaChanged(int,qreal)\0"
    "channelIndex\0setChannel(int)\0selectColor()\0"
    "min\0setHdrMin(int)\0max\0setHdrMax(int)\0"
    "gamma\0setGamma(double)\0resetColors()\0"
    "initializeColors()\0"
};

const QMetaObject DynamicRangeTool::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DynamicRangeTool,
      qt_meta_data_DynamicRangeTool, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DynamicRangeTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DynamicRangeTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DynamicRangeTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicRangeTool))
        return static_cast<void*>(const_cast< DynamicRangeTool*>(this));
    return QDialog::qt_metacast(_clname);
}

int DynamicRangeTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: channelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: channelColorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: channelHdrRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 3: channelGammaChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: setChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: selectColor(); break;
        case 6: setHdrMin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setHdrMax((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: setGamma((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: resetColors(); break;
        case 10: initializeColors(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DynamicRangeTool::channelChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DynamicRangeTool::channelColorChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DynamicRangeTool::channelHdrRangeChanged(int _t1, qreal _t2, qreal _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DynamicRangeTool::channelGammaChanged(int _t1, qreal _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
