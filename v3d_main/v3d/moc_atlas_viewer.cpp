/****************************************************************************
** Meta object code from reading C++ file 'atlas_viewer.h'
**
** Created: Tue Jan 27 16:06:58 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "atlas_viewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'atlas_viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_V3D_atlas_viewerDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      33,   23,   23,   23, 0x0a,
      42,   23,   23,   23, 0x0a,
      52,   23,   23,   23, 0x0a,
      61,   59,   23,   23, 0x0a,
      90,   23,   23,   23, 0x0a,
     102,   23,   23,   23, 0x0a,
     116,   23,   23,   23, 0x0a,
     132,   23,   23,   23, 0x0a,
     145,   23,   23,   23, 0x0a,
     159,   23,   23,   23, 0x0a,
     177,  175,   23,   23, 0x0a,
     203,   23,   23,   23, 0x0a,
     227,  225,   23,   23, 0x0a,
     243,   23,   23,   23, 0x0a,
     254,   23,   23,   23, 0x0a,
     265,   23,   23,   23, 0x0a,
     285,  281,   23,   23, 0x0a,
     304,   23,   23,   23, 0x2a,
     320,   23,   23,   23, 0x0a,
     339,   23,   23,   23, 0x0a,
     364,  356,   23,   23, 0x0a,
     386,  356,   23,   23, 0x0a,
     442,  408,   23,   23, 0x0a,
     477,  356,   23,   23, 0x0a,
     503,   23,   23,   23, 0x0a,
     525,   23,   23,   23, 0x0a,
     542,   23,   23,   23, 0x0a,
     561,   23,   23,   23, 0x0a,
     586,   23,   23,   23, 0x0a,
     610,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_V3D_atlas_viewerDialog[] = {
    "V3D_atlas_viewerDialog\0\0accept()\0"
    "reject()\0done(int)\0undo()\0w\0"
    "reCreateTables(XFormWidget*)\0selectAll()\0"
    "deselectAll()\0inverseSelect()\0"
    "onSelected()\0offSelected()\0colorSelected()\0"
    "c\0colorChannelSelected(int)\0"
    "maskImgStateChanged()\0t\0tabChanged(int)\0"
    "findNext()\0findPrev()\0doMenuOfColor()\0"
    "map\0selectedColor(int)\0selectedColor()\0"
    "mapHanchuanColor()\0mapRandomColor()\0"
    "row,col\0pickAtlasRow(int,int)\0"
    "pickLandmark(int,int)\0"
    "row,col,previous_row,previous_col\0"
    "highlightLandmark(int,int,int,int)\0"
    "pickColorChannel(int,int)\0"
    "seeLandmarkProperty()\0moveLandmarkUp()\0"
    "moveLandmarkDown()\0deleteSelectedLandmark()\0"
    "resetAllLandmarkNames()\0"
    "resetAllLandmarkComments()\0"
};

const QMetaObject V3D_atlas_viewerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_V3D_atlas_viewerDialog,
      qt_meta_data_V3D_atlas_viewerDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &V3D_atlas_viewerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *V3D_atlas_viewerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *V3D_atlas_viewerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_V3D_atlas_viewerDialog))
        return static_cast<void*>(const_cast< V3D_atlas_viewerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int V3D_atlas_viewerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: reject(); break;
        case 2: done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: undo(); break;
        case 4: reCreateTables((*reinterpret_cast< XFormWidget*(*)>(_a[1]))); break;
        case 5: selectAll(); break;
        case 6: deselectAll(); break;
        case 7: inverseSelect(); break;
        case 8: onSelected(); break;
        case 9: offSelected(); break;
        case 10: colorSelected(); break;
        case 11: colorChannelSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: maskImgStateChanged(); break;
        case 13: tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: findNext(); break;
        case 15: findPrev(); break;
        case 16: doMenuOfColor(); break;
        case 17: selectedColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: selectedColor(); break;
        case 19: mapHanchuanColor(); break;
        case 20: mapRandomColor(); break;
        case 21: pickAtlasRow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: pickLandmark((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: highlightLandmark((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 24: pickColorChannel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: seeLandmarkProperty(); break;
        case 26: moveLandmarkUp(); break;
        case 27: moveLandmarkDown(); break;
        case 28: deleteSelectedLandmark(); break;
        case 29: resetAllLandmarkNames(); break;
        case 30: resetAllLandmarkComments(); break;
        default: ;
        }
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
