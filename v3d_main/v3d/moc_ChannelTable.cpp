/****************************************************************************
** Meta object code from reading C++ file 'ChannelTable.h'
**
** Created: Tue Jan 27 16:06:57 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ChannelTable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChannelTable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChannelTabWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x0a,
      47,   17,   17,   17, 0x2a,
      67,   17,   17,   17, 0x0a,
      98,   92,   17,   17, 0x0a,
     125,  120,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChannelTabWidget[] = {
    "ChannelTabWidget\0\0plane\0updateXFormWidget(int)\0"
    "updateXFormWidget()\0linkXFormWidgetChannel()\0"
    "mixop\0syncOpControls(MixOP)\0data\0"
    "syncSharedData(ChannelSharedData)\0"
};

const QMetaObject ChannelTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_ChannelTabWidget,
      qt_meta_data_ChannelTabWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChannelTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChannelTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChannelTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelTabWidget))
        return static_cast<void*>(const_cast< ChannelTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int ChannelTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateXFormWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: updateXFormWidget(); break;
        case 2: linkXFormWidgetChannel(); break;
        case 3: syncOpControls((*reinterpret_cast< const MixOP(*)>(_a[1]))); break;
        case 4: syncSharedData((*reinterpret_cast< const ChannelSharedData(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_ChannelTable[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   36,   13,   13, 0x0a,
      65,   13,   13,   13, 0x2a,
      85,   13,   13,   13, 0x0a,
     112,  110,   13,   13, 0x0a,
     152,  140,   13,   13, 0x0a,
     177,   13,   13,   13, 0x2a,
     198,   13,   13,   13, 0x0a,
     218,   13,   13,   13, 0x0a,
     240,   13,   13,   13, 0x0a,
     254,   13,   13,   13, 0x0a,
     268,  266,   13,   13, 0x0a,
     306,  298,   13,   13, 0x09,
     335,  298,   13,   13, 0x09,
     363,  298,   13,   13, 0x09,
     384,   13,   13,   13, 0x09,
     398,   13,   13,   13, 0x09,
     412,   13,   13,   13, 0x09,
     427,   13,   13,   13, 0x09,
     441,   13,   13,   13, 0x09,
     457,   13,   13,   13, 0x09,
     473,   13,   13,   13, 0x09,
     487,   13,   13,   13, 0x09,
     501,   13,   13,   13, 0x09,
     515,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ChannelTable[] = {
    "ChannelTable\0\0channelTableChanged()\0"
    "plane\0updateXFormWidget(int)\0"
    "updateXFormWidget()\0linkXFormWidgetChannel()\0"
    "N\0setChannelColorDefault(int)\0update_luts\0"
    "updateTableChannel(bool)\0updateTableChannel()\0"
    "setRescaleDefault()\0updateMixOpControls()\0"
    "begin_batch()\0end_batch()\0t\0"
    "updatedContent(QTableWidget*)\0row,col\0"
    "pressedClickHandler(int,int)\0"
    "doubleClickHandler(int,int)\0"
    "pickChannel(int,int)\0setMixOpMax()\0"
    "setMixOpSum()\0setMixOpMean()\0setMixOpOIT()\0"
    "setMixOpIndex()\0setMixRescale()\0"
    "setMixMaskR()\0setMixMaskG()\0setMixMaskB()\0"
    "setDefault()\0"
};

const QMetaObject ChannelTable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChannelTable,
      qt_meta_data_ChannelTable, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChannelTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChannelTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChannelTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelTable))
        return static_cast<void*>(const_cast< ChannelTable*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChannelTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: channelTableChanged(); break;
        case 1: updateXFormWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: updateXFormWidget(); break;
        case 3: linkXFormWidgetChannel(); break;
        case 4: setChannelColorDefault((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: updateTableChannel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: updateTableChannel(); break;
        case 7: setRescaleDefault(); break;
        case 8: updateMixOpControls(); break;
        case 9: begin_batch(); break;
        case 10: end_batch(); break;
        case 11: updatedContent((*reinterpret_cast< QTableWidget*(*)>(_a[1]))); break;
        case 12: pressedClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: doubleClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: pickChannel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: setMixOpMax(); break;
        case 16: setMixOpSum(); break;
        case 17: setMixOpMean(); break;
        case 18: setMixOpOIT(); break;
        case 19: setMixOpIndex(); break;
        case 20: setMixRescale(); break;
        case 21: setMixMaskR(); break;
        case 22: setMixMaskG(); break;
        case 23: setMixMaskB(); break;
        case 24: setDefault(); break;
        default: ;
        }
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void ChannelTable::channelTableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_BrightenBox[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   12,   12,   12, 0x0a,
      53,   12,   12,   12, 0x0a,
      61,   12,   12,   12, 0x0a,
      80,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BrightenBox[] = {
    "BrightenBox\0\0brightenChanged()\0"
    "updateMixOpControls()\0reset()\0"
    "setBrightness(int)\0setContrast(int)\0"
};

const QMetaObject BrightenBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BrightenBox,
      qt_meta_data_BrightenBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BrightenBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BrightenBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BrightenBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrightenBox))
        return static_cast<void*>(const_cast< BrightenBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int BrightenBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: brightenChanged(); break;
        case 1: updateMixOpControls(); break;
        case 2: reset(); break;
        case 3: setBrightness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BrightenBox::brightenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_MiscBox[] = {

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
       9,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MiscBox[] = {
    "MiscBox\0\0exportRGBStack()\0"
};

const QMetaObject MiscBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MiscBox,
      qt_meta_data_MiscBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MiscBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MiscBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MiscBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MiscBox))
        return static_cast<void*>(const_cast< MiscBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int MiscBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: exportRGBStack(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
