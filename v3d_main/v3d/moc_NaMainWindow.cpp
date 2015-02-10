/****************************************************************************
** Meta object code from reading C++ file 'NaMainWindow.h'
**
** Created: Tue Jan 27 16:07:20 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/gui/NaMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NaMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NutateThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_NutateThread[] = {
    "NutateThread\0\0nutate(Rotation3D)\0"
};

const QMetaObject NutateThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_NutateThread,
      qt_meta_data_NutateThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NutateThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NutateThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NutateThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NutateThread))
        return static_cast<void*>(const_cast< NutateThread*>(this));
    return QThread::qt_metacast(_clname);
}

int NutateThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nutate((*reinterpret_cast< const Rotation3D(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void NutateThread::nutate(const Rotation3D & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_OpenFileAction[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OpenFileAction[] = {
    "OpenFileAction\0\0fileName\0"
    "openFileRequested(QString)\0onTriggered()\0"
};

const QMetaObject OpenFileAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_OpenFileAction,
      qt_meta_data_OpenFileAction, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenFileAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenFileAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenFileAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenFileAction))
        return static_cast<void*>(const_cast< OpenFileAction*>(this));
    return QAction::qt_metacast(_clname);
}

int OpenFileAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openFileRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: onTriggered(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OpenFileAction::openFileRequested(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_NaMainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      88,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,
      51,   13,   13,   13, 0x05,
      82,   73,   13,   13, 0x05,
     125,  121,   13,   13, 0x05,
     160,   13,   13,   13, 0x05,
     193,  121,   13,   13, 0x05,
     224,   13,   13,   13, 0x05,
     255,   13,   13,   13, 0x05,
     293,   13,   13,   13, 0x05,
     325,   13,   13,   13, 0x05,
     361,   13,   13,   13, 0x05,
     394,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     416,   13,   13,   13, 0x0a,
     438,   13,   13,   13, 0x0a,
     455,   13,   13,   13, 0x0a,
     480,  475,   13,   13, 0x0a,
     502,   13,   13,   13, 0x0a,
     539,  121,   13,   13, 0x0a,
     561,   73,   13,   13, 0x0a,
     606,  586,   13,   13, 0x0a,
     633,   13,   13,   13, 0x0a,
     653,   13,   13,   13, 0x0a,
     679,  121,  674,   13, 0x0a,
     718,  710,  674,   13, 0x0a,
     757,  752,   13,   13, 0x0a,
     780,   13,   13,   13, 0x0a,
     810,   13,   13,   13, 0x0a,
     854,   13,   13,   13, 0x0a,
     908,   13,   13,   13, 0x0a,
     945,   13,   13,   13, 0x0a,
     978,   13,   13,   13, 0x0a,
    1010,   13,   13,   13, 0x0a,
    1050,   13,   13,   13, 0x0a,
    1096,   13,   13,   13, 0x0a,
    1133,   13,   13,   13, 0x0a,
    1159,   13,   13,   13, 0x0a,
    1185,   13,   13,   13, 0x0a,
    1225,   13,   13,   13, 0x0a,
    1270,   13,   13,   13, 0x0a,
    1302,   13,   13,   13, 0x0a,
    1333,   13,   13,   13, 0x0a,
    1361,   13,   13,   13, 0x0a,
    1393,   13,   13,   13, 0x0a,
    1436,   13,   13,   13, 0x0a,
    1469,   13,   13,   13, 0x0a,
    1508,   13,   13,   13, 0x0a,
    1550, 1546,   13,   13, 0x0a,
    1608, 1598,   13,   13, 0x0a,
    1636, 1627,   13,   13, 0x0a,
    1665, 1655,   13,   13, 0x0a,
    1681,   13,   13,   13, 0x0a,
    1705,   13,   13,   13, 0x0a,
    1724,   13,   13,   13, 0x0a,
    1736,   13,   13,   13, 0x0a,
    1765, 1752,   13,   13, 0x0a,
    1819,   13,   13,   13, 0x0a,
    1850,   13,   13,   13, 0x0a,
    1880,   13,   13,   13, 0x0a,
    1910,   13,   13,   13, 0x0a,
    1942,   13,   13,   13, 0x0a,
    1964,   13,   13,   13, 0x0a,
    2000,   13,   13,   13, 0x0a,
    2045, 2043,   13,   13, 0x0a,
    2069,   13,   13,   13, 0x0a,
    2098, 2092,   13,   13, 0x0a,
    2116,   13,   13,   13, 0x0a,
    2145,   13,   13,   13, 0x09,
    2175, 2167,   13,   13, 0x09,
    2208, 2204,   13,   13, 0x09,
    2246,   13,   13,   13, 0x09,
    2280, 2278,   13,   13, 0x09,
    2320, 2308,   13,   13, 0x09,
    2341,   13,   13,   13, 0x09,
    2360,   13,   13,   13, 0x09,
    2381,   13,   13,   13, 0x09,
    2411,   13,   13,   13, 0x09,
    2438,   13,   13,   13, 0x09,
    2456,   13,   13,   13, 0x09,
    2478,   13,   13,   13, 0x09,
    2500,   13,   13,   13, 0x09,
    2528,   13,   13,   13, 0x09,
    2547,   13,   13,   13, 0x09,
    2570,   13,   13,   13, 0x09,
    2587,   13,   13,   13, 0x09,
    2619, 2610,   13,   13, 0x09,
    2642,   13,   13,   13, 0x09,
    2664,   73,   13,   13, 0x09,
    2707, 2690,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NaMainWindow[] = {
    "NaMainWindow\0\0,\0channelVisibilityChanged(int,bool)\0"
    "nutatingChanged(bool)\0fileName\0"
    "defaultVaa3dFileLoadRequested(QString)\0"
    "url\0defaultVaa3dUrlLoadRequested(QUrl)\0"
    "crosshairVisibilityChanged(bool)\0"
    "singleStackLoadRequested(QUrl)\0"
    "benchmarkTimerResetRequested()\0"
    "benchmarkTimerPrintRequested(QString)\0"
    "initializeColorModelRequested()\0"
    "initializeSelectionModelRequested()\0"
    "subsampleLabelPbdFileNamed(QUrl)\0"
    "stagedLoadRequested()\0resetVolumeCutRange()\0"
    "exitFullScreen()\0setFullScreen(bool)\0"
    "mode\0setViewMode(ViewMode)\0"
    "labelNeuronsAsFlyBrainCompartments()\0"
    "loadSingleStack(QUrl)\0loadSingleStack(QString)\0"
    "url,useVaa3dClassic\0loadSingleStack(QUrl,bool)\0"
    "onDataLoadStarted()\0onDataLoadFinished()\0"
    "bool\0openMulticolorImageStack(QUrl)\0"
    "dirName\0openMulticolorImageStack(QString)\0"
    "name\0openFileOrUrl(QString)\0"
    "on_action1280x720_triggered()\0"
    "on_actionAdd_landmark_at_cursor_triggered()\0"
    "on_actionAppend_key_frame_at_current_view_triggered()\0"
    "on_actionClear_landmarks_triggered()\0"
    "on_actionClear_movie_triggered()\0"
    "on_actionV3DDefault_triggered()\0"
    "on_actionMeasure_Frame_Rate_triggered()\0"
    "on_actionOpen_microCT_Cut_Planner_triggered()\0"
    "on_actionNeuronAnnotator_triggered()\0"
    "on_actionQuit_triggered()\0"
    "on_actionOpen_triggered()\0"
    "on_actionOpen_Octree_Volume_triggered()\0"
    "on_actionOpen_Single_Movie_Stack_triggered()\0"
    "on_actionPlay_movie_triggered()\0"
    "on_action3D_Volume_triggered()\0"
    "on_action2D_MIP_triggered()\0"
    "on_actionScreenShot_triggered()\0"
    "on_actionLoad_movie_as_texture_triggered()\0"
    "on_actionPreferences_triggered()\0"
    "on_actionSave_movie_frames_triggered()\0"
    "on_actionX_Rotation_Movie_triggered()\0"
    "val\0on_zThicknessDoubleSpinBox_valueChanged(double)\0"
    "minZ,maxZ\0setZRange(int,int)\0bDoUnify\0"
    "unifyCameras(bool)\0bDoNutate\0"
    "setNutate(bool)\0setRotation(Rotation3D)\0"
    "nutate(Rotation3D)\0resetView()\0"
    "updateViewers()\0updateString\0"
    "synchronizeGalleryButtonsToAnnotationSession(QString)\0"
    "setChannelZeroVisibility(bool)\0"
    "setChannelOneVisibility(bool)\0"
    "setChannelTwoVisibility(bool)\0"
    "setChannelThreeVisibility(bool)\0"
    "onColorModelChanged()\0"
    "onSelectionModelVisibilityChanged()\0"
    "onHdrChannelChanged(NaZStackWidget::Color)\0"
    "b\0supportQuadStereo(bool)\0"
    "showDynamicRangeTool()\0title\0"
    "setTitle(QString)\0setCrosshairVisibility(bool)\0"
    "resetBenchmarkTimer()\0message\0"
    "printBenchmarkTimer(QString)\0rot\0"
    "on3DViewerRotationChanged(Rotation3D)\0"
    "update3DViewerXYZBodyRotation()\0t\0"
    "onSlabThicknessChanged(int)\0viewerIndex\0"
    "onViewerChanged(int)\0set3DProgress(int)\0"
    "complete3DProgress()\0set3DProgressMessage(QString)\0"
    "processUpdatedVolumeData()\0updateGalleries()\0"
    "initializeGalleries()\0setProgressValue(int)\0"
    "setProgressMessage(QString)\0"
    "completeProgress()\0abortProgress(QString)\0"
    "applyCustomCut()\0applyCustomKeepPlane()\0"
    "doCustom\0setCustomCutMode(bool)\0"
    "toggleCustomCutMode()\0onExportFinished(QString)\0"
    "fileName,message\0onExportFailed(QString,QString)\0"
};

const QMetaObject NaMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NaMainWindow,
      qt_meta_data_NaMainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NaMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NaMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NaMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NaMainWindow))
        return static_cast<void*>(const_cast< NaMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NaMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: channelVisibilityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: nutatingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: defaultVaa3dFileLoadRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: defaultVaa3dUrlLoadRequested((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 4: crosshairVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: singleStackLoadRequested((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 6: benchmarkTimerResetRequested(); break;
        case 7: benchmarkTimerPrintRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: initializeColorModelRequested(); break;
        case 9: initializeSelectionModelRequested(); break;
        case 10: subsampleLabelPbdFileNamed((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 11: stagedLoadRequested(); break;
        case 12: resetVolumeCutRange(); break;
        case 13: exitFullScreen(); break;
        case 14: setFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: setViewMode((*reinterpret_cast< ViewMode(*)>(_a[1]))); break;
        case 16: labelNeuronsAsFlyBrainCompartments(); break;
        case 17: loadSingleStack((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 18: loadSingleStack((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: loadSingleStack((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: onDataLoadStarted(); break;
        case 21: onDataLoadFinished(); break;
        case 22: { bool _r = openMulticolorImageStack((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = openMulticolorImageStack((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: openFileOrUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: on_action1280x720_triggered(); break;
        case 26: on_actionAdd_landmark_at_cursor_triggered(); break;
        case 27: on_actionAppend_key_frame_at_current_view_triggered(); break;
        case 28: on_actionClear_landmarks_triggered(); break;
        case 29: on_actionClear_movie_triggered(); break;
        case 30: on_actionV3DDefault_triggered(); break;
        case 31: on_actionMeasure_Frame_Rate_triggered(); break;
        case 32: on_actionOpen_microCT_Cut_Planner_triggered(); break;
        case 33: on_actionNeuronAnnotator_triggered(); break;
        case 34: on_actionQuit_triggered(); break;
        case 35: on_actionOpen_triggered(); break;
        case 36: on_actionOpen_Octree_Volume_triggered(); break;
        case 37: on_actionOpen_Single_Movie_Stack_triggered(); break;
        case 38: on_actionPlay_movie_triggered(); break;
        case 39: on_action3D_Volume_triggered(); break;
        case 40: on_action2D_MIP_triggered(); break;
        case 41: on_actionScreenShot_triggered(); break;
        case 42: on_actionLoad_movie_as_texture_triggered(); break;
        case 43: on_actionPreferences_triggered(); break;
        case 44: on_actionSave_movie_frames_triggered(); break;
        case 45: on_actionX_Rotation_Movie_triggered(); break;
        case 46: on_zThicknessDoubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 47: setZRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: unifyCameras((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: setNutate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: setRotation((*reinterpret_cast< Rotation3D(*)>(_a[1]))); break;
        case 51: nutate((*reinterpret_cast< const Rotation3D(*)>(_a[1]))); break;
        case 52: resetView(); break;
        case 53: updateViewers(); break;
        case 54: synchronizeGalleryButtonsToAnnotationSession((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 55: setChannelZeroVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: setChannelOneVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: setChannelTwoVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: setChannelThreeVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: onColorModelChanged(); break;
        case 60: onSelectionModelVisibilityChanged(); break;
        case 61: onHdrChannelChanged((*reinterpret_cast< NaZStackWidget::Color(*)>(_a[1]))); break;
        case 62: supportQuadStereo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: showDynamicRangeTool(); break;
        case 64: setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 65: setCrosshairVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: resetBenchmarkTimer(); break;
        case 67: printBenchmarkTimer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 68: on3DViewerRotationChanged((*reinterpret_cast< const Rotation3D(*)>(_a[1]))); break;
        case 69: update3DViewerXYZBodyRotation(); break;
        case 70: onSlabThicknessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: onViewerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: set3DProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: complete3DProgress(); break;
        case 74: set3DProgressMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 75: processUpdatedVolumeData(); break;
        case 76: updateGalleries(); break;
        case 77: initializeGalleries(); break;
        case 78: setProgressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: setProgressMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 80: completeProgress(); break;
        case 81: abortProgress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 82: applyCustomCut(); break;
        case 83: applyCustomKeepPlane(); break;
        case 84: setCustomCutMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: toggleCustomCutMode(); break;
        case 86: onExportFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 87: onExportFailed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 88;
    }
    return _id;
}

// SIGNAL 0
void NaMainWindow::channelVisibilityChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NaMainWindow::nutatingChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NaMainWindow::defaultVaa3dFileLoadRequested(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NaMainWindow::defaultVaa3dUrlLoadRequested(QUrl _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NaMainWindow::crosshairVisibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NaMainWindow::singleStackLoadRequested(QUrl _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NaMainWindow::benchmarkTimerResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void NaMainWindow::benchmarkTimerPrintRequested(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NaMainWindow::initializeColorModelRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void NaMainWindow::initializeSelectionModelRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void NaMainWindow::subsampleLabelPbdFileNamed(QUrl _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NaMainWindow::stagedLoadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
