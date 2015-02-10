/****************************************************************************
** Meta object code from reading C++ file 'NeuronContextMenu.h'
**
** Created: Tue Jan 27 16:07:02 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/gui/NeuronContextMenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NeuronContextMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NeuronContextMenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_NeuronContextMenu[] = {
    "NeuronContextMenu\0"
};

const QMetaObject NeuronContextMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_NeuronContextMenu,
      qt_meta_data_NeuronContextMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NeuronContextMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NeuronContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NeuronContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NeuronContextMenu))
        return static_cast<void*>(const_cast< NeuronContextMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int NeuronContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
