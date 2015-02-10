/****************************************************************************
** Meta object code from reading C++ file 'v3dr_mainwindow.h'
**
** Created: Tue Jan 27 16:06:55 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../3drenderer/v3dr_mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3dr_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_V3dR_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      29,   16,   16,   16, 0x0a,
      51,   16,   16,   16, 0x0a,
      73,   16,   16,   16, 0x0a,
      95,   16,   16,   16, 0x0a,
     114,   16,   16,   16, 0x0a,
     136,   16,   16,   16, 0x0a,
     157,   16,   16,   16, 0x0a,
     179,   16,   16,   16, 0x0a,
     199,   16,   16,   16, 0x0a,
     218,   16,   16,   16, 0x0a,
     293,  244,  236,   16, 0x0a,
     324,  244,   16,   16, 0x0a,
     354,   16,   16,   16, 0x0a,
     366,   16,   16,   16, 0x0a,
     378,   16,   16,   16, 0x0a,
     391,   16,   16,   16, 0x0a,
     415,  405,  236,   16, 0x0a,
     448,   16,   16,   16, 0x0a,
     484,  472,  468,   16, 0x0a,
     527,   16,   16,   16, 0x0a,
     553,   16,   16,   16, 0x0a,
     577,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_V3dR_MainWindow[] = {
    "V3dR_MainWindow\0\0postClose()\0"
    "setXCutLockIcon(bool)\0setYCutLockIcon(bool)\0"
    "setZCutLockIcon(bool)\0initControlValue()\0"
    "initVolumeTimeRange()\0initVolumeCutRange()\0"
    "initSurfaceCutRange()\0onlySurfaceObjTab()\0"
    "doMenuOfSurfFile()\0doMenuOfAnimate()\0"
    "QString\0loop_scpript,rotation_frames,rotation_timepoints\0"
    "previewMovie(QString&,int,int)\0"
    "doSaveMovie(QString&,int,int)\0saveMovie()\0"
    "animateOn()\0animateOff()\0animateStep()\0"
    "qtitle,ok\0getAnimateRotType(QString,bool*)\0"
    "setAnimateRotType()\0int\0qtitle,ok,v\0"
    "getAnimateRotTimePoints(QString,bool*,int)\0"
    "setAnimateRotTimePoints()\0"
    "setAnimateRotSpeedSec()\0raise_and_activate()\0"
};

const QMetaObject V3dR_MainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_V3dR_MainWindow,
      qt_meta_data_V3dR_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &V3dR_MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *V3dR_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *V3dR_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_V3dR_MainWindow))
        return static_cast<void*>(const_cast< V3dR_MainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int V3dR_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: postClose(); break;
        case 1: setXCutLockIcon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setYCutLockIcon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setZCutLockIcon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: initControlValue(); break;
        case 5: initVolumeTimeRange(); break;
        case 6: initVolumeCutRange(); break;
        case 7: initSurfaceCutRange(); break;
        case 8: onlySurfaceObjTab(); break;
        case 9: doMenuOfSurfFile(); break;
        case 10: doMenuOfAnimate(); break;
        case 11: { QString _r = previewMovie((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: doSaveMovie((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: saveMovie(); break;
        case 14: animateOn(); break;
        case 15: animateOff(); break;
        case 16: animateStep(); break;
        case 17: { QString _r = getAnimateRotType((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: setAnimateRotType(); break;
        case 19: { int _r = getAnimateRotTimePoints((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: setAnimateRotTimePoints(); break;
        case 21: setAnimateRotSpeedSec(); break;
        case 22: raise_and_activate(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
