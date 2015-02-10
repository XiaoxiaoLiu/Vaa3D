/****************************************************************************
** Meta object code from reading C++ file 'NaVolumeData.h'
**
** Created: Tue Jan 27 16:06:58 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/data_model/NaVolumeData.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NaVolumeData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NaVolumeDataLoadableStack[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      52,   27,   26,   26, 0x05,
      82,   26,   26,   26, 0x05,
     114,   26,   26,   26, 0x05,
     123,   26,   26,   26, 0x05,
     134,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     145,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NaVolumeDataLoadableStack[] = {
    "NaVolumeDataLoadableStack\0\0"
    "progressValue,stackIndex\0"
    "progressValueChanged(int,int)\0"
    "progressMessageChanged(QString)\0"
    "failed()\0finished()\0canceled()\0cancel()\0"
};

const QMetaObject NaVolumeDataLoadableStack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NaVolumeDataLoadableStack,
      qt_meta_data_NaVolumeDataLoadableStack, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NaVolumeDataLoadableStack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NaVolumeDataLoadableStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NaVolumeDataLoadableStack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NaVolumeDataLoadableStack))
        return static_cast<void*>(const_cast< NaVolumeDataLoadableStack*>(this));
    return QObject::qt_metacast(_clname);
}

int NaVolumeDataLoadableStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: progressValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: progressMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: failed(); break;
        case 3: finished(); break;
        case 4: canceled(); break;
        case 5: cancel(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NaVolumeDataLoadableStack::progressValueChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NaVolumeDataLoadableStack::progressMessageChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NaVolumeDataLoadableStack::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void NaVolumeDataLoadableStack::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void NaVolumeDataLoadableStack::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
static const uint qt_meta_data_NaVolumeData[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      46,   32,   13,   13, 0x05,
      79,   65,   13,   13, 0x05,
      99,   13,   13,   13, 0x05,
     118,   13,   13,   13, 0x05,
     149,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     196,  192,  187,   13, 0x0a,
     222,  215,  187,   13, 0x0a,
     250,   13,   13,   13, 0x0a,
     270,   13,   13,   13, 0x09,
     296,   13,   13,   13, 0x09,
     345,  331,   13,   13, 0x09,
     375,  367,   13,   13, 0x09,
     428,  403,   13,   13, 0x09,
     466,  458,  187,   13, 0x09,
     508,  486,  187,   13, 0x09,
     533,  458,  187,   13, 0x29,
     554,  458,  187,   13, 0x09,
     575,   13,  187,   13, 0x09,
     599,   13,  187,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NaVolumeData[] = {
    "NaVolumeData\0\0referenceLoaded()\0"
    "channel_index\0channelLoaded(int)\0"
    "channel_count\0channelsLoaded(int)\0"
    "neuronMaskLoaded()\0benchmarkTimerResetRequested()\0"
    "benchmarkTimerPrintRequested(QString)\0"
    "bool\0url\0loadChannels(QUrl)\0folder\0"
    "queueSeparationFolder(QUrl)\0"
    "loadStagedVolumes()\0loadVolumeDataFromFiles()\0"
    "loadSecondaryVolumeDataFromFiles()\0"
    "progressValue\0setProgressValue(int)\0"
    "message\0setProgressMessage(QString)\0"
    "progressValue,stackIndex\0"
    "setStackLoadProgress(int,int)\0fileUrl\0"
    "loadReference(QUrl)\0fileUrl,channel_index\0"
    "loadOneChannel(QUrl,int)\0loadOneChannel(QUrl)\0"
    "loadNeuronMask(QUrl)\0loadVolumeFromTexture()\0"
    "loadBestVolumeFromDirectory(QUrl)\0"
};

const QMetaObject NaVolumeData::staticMetaObject = {
    { &NaLockableData::staticMetaObject, qt_meta_stringdata_NaVolumeData,
      qt_meta_data_NaVolumeData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NaVolumeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NaVolumeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NaVolumeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NaVolumeData))
        return static_cast<void*>(const_cast< NaVolumeData*>(this));
    return NaLockableData::qt_metacast(_clname);
}

int NaVolumeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NaLockableData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: referenceLoaded(); break;
        case 1: channelLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: channelsLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: neuronMaskLoaded(); break;
        case 4: benchmarkTimerResetRequested(); break;
        case 5: benchmarkTimerPrintRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { bool _r = loadChannels((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = queueSeparationFolder((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: loadStagedVolumes(); break;
        case 9: loadVolumeDataFromFiles(); break;
        case 10: loadSecondaryVolumeDataFromFiles(); break;
        case 11: setProgressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: setProgressMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: setStackLoadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { bool _r = loadReference((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = loadOneChannel((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = loadOneChannel((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = loadNeuronMask((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = loadVolumeFromTexture();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = loadBestVolumeFromDirectory((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void NaVolumeData::referenceLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NaVolumeData::channelLoaded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NaVolumeData::channelsLoaded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NaVolumeData::neuronMaskLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void NaVolumeData::benchmarkTimerResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void NaVolumeData::benchmarkTimerPrintRequested(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
