/****************************************************************************
** Meta object code from reading C++ file 'v3dr_surfaceDialog.h'
**
** Created: Tue Jan 27 16:06:56 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../3drenderer/v3dr_surfaceDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3dr_surfaceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_V3dr_surfaceDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   20,   19,   19, 0x0a,
      43,   20,   39,   19, 0x0a,
      60,   19,   19,   19, 0x0a,
      77,   19,   19,   19, 0x0a,
      84,   19,   19,   19, 0x0a,
      96,   19,   19,   19, 0x0a,
     110,   19,   19,   19, 0x0a,
     132,  126,   19,   19, 0x0a,
     152,   19,   19,   19, 0x0a,
     165,   19,   19,   19, 0x0a,
     179,   19,   19,   19, 0x0a,
     199,  195,   19,   19, 0x0a,
     218,   19,   19,   19, 0x2a,
     234,   19,   19,   19, 0x0a,
     253,   19,   19,   19, 0x0a,
     270,   19,   19,   19, 0x0a,
     294,  292,   19,   19, 0x0a,
     317,   19,   19,   19, 0x0a,
     352,   19,   19,   19, 0x0a,
     377,   19,   19,   19, 0x0a,
     410,  402,   19,   19, 0x0a,
     439,  402,   19,   19, 0x0a,
     467,  402,   19,   19, 0x0a,
     485,  402,   19,   19, 0x0a,
     502,  402,   19,   19, 0x0a,
     519,  402,   19,   19, 0x0a,
     540,  402,   19,   19, 0x0a,
     560,   19,   19,   19, 0x0a,
     585,   19,   19,   19, 0x0a,
     596,   19,   19,   19, 0x0a,
     607,   19,   19,   19, 0x0a,
     626,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_V3dr_surfaceDialog[] = {
    "V3dr_surfaceDialog\0\0w\0linkTo(QWidget*)\0"
    "int\0DecRef(QWidget*)\0onAttached(bool)\0"
    "undo()\0selectAll()\0deselectAll()\0"
    "selectInverse()\0state\0selectedOnOff(bool)\0"
    "selectedOn()\0selectedOff()\0doMenuOfColor()\0"
    "map\0selectedColor(int)\0selectedColor()\0"
    "mapHanchuanColor()\0mapRandomColor()\0"
    "doMenuOfDisplayMode()\0v\0setSWCDisplayMode(int)\0"
    "setSWCDisplayUsingGlobalSettings()\0"
    "setSWCDisplayUsingLine()\0"
    "setSWCDisplayUsingTube()\0row,col\0"
    "pressedClickHandler(int,int)\0"
    "doubleClickHandler(int,int)\0"
    "pickSurf(int,int)\0pickSWC(int,int)\0"
    "pickAPO(int,int)\0pickAPO_Set(int,int)\0"
    "pickMarker(int,int)\0editObjNameAndComments()\0"
    "findNext()\0findPrev()\0findAllHighlight()\0"
    "onMarkerLocalView()\0"
};

const QMetaObject V3dr_surfaceDialog::staticMetaObject = {
    { &SharedToolDialog::staticMetaObject, qt_meta_stringdata_V3dr_surfaceDialog,
      qt_meta_data_V3dr_surfaceDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &V3dr_surfaceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *V3dr_surfaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *V3dr_surfaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_V3dr_surfaceDialog))
        return static_cast<void*>(const_cast< V3dr_surfaceDialog*>(this));
    return SharedToolDialog::qt_metacast(_clname);
}

int V3dr_surfaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SharedToolDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: linkTo((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: { int _r = DecRef((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: onAttached((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: undo(); break;
        case 4: selectAll(); break;
        case 5: deselectAll(); break;
        case 6: selectInverse(); break;
        case 7: selectedOnOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: selectedOn(); break;
        case 9: selectedOff(); break;
        case 10: doMenuOfColor(); break;
        case 11: selectedColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: selectedColor(); break;
        case 13: mapHanchuanColor(); break;
        case 14: mapRandomColor(); break;
        case 15: doMenuOfDisplayMode(); break;
        case 16: setSWCDisplayMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: setSWCDisplayUsingGlobalSettings(); break;
        case 18: setSWCDisplayUsingLine(); break;
        case 19: setSWCDisplayUsingTube(); break;
        case 20: pressedClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: doubleClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: pickSurf((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: pickSWC((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: pickAPO((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: pickAPO_Set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: pickMarker((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: editObjNameAndComments(); break;
        case 28: findNext(); break;
        case 29: findPrev(); break;
        case 30: findAllHighlight(); break;
        case 31: onMarkerLocalView(); break;
        default: ;
        }
        _id -= 32;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
