/****************************************************************************
** Meta object code from reading C++ file 'v3d_custom_toolbar.h'
**
** Created: Tue Jan 27 16:06:58 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../custom_toolbar/v3d_custom_toolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3d_custom_toolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CustomToolButton[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x0a,
      51,   17,   46,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CustomToolButton[] = {
    "CustomToolButton\0\0text\0setButtonText(QString)\0"
    "bool\0run()\0"
};

const QMetaObject CustomToolButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CustomToolButton,
      qt_meta_data_CustomToolButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomToolButton))
        return static_cast<void*>(const_cast< CustomToolButton*>(this));
    return QObject::qt_metacast(_clname);
}

int CustomToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setButtonText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = run();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_CustomToolbarSelectWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   27,   26,   26, 0x0a,
      56,   26,   26,   26, 0x0a,
      75,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CustomToolbarSelectWidget[] = {
    "CustomToolbarSelectWidget\0\0state\0"
    "setToolBarButton(bool)\0saveToolBarState()\0"
    "openMe()\0"
};

const QMetaObject CustomToolbarSelectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CustomToolbarSelectWidget,
      qt_meta_data_CustomToolbarSelectWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomToolbarSelectWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomToolbarSelectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomToolbarSelectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomToolbarSelectWidget))
        return static_cast<void*>(const_cast< CustomToolbarSelectWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CustomToolbarSelectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setToolBarButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: saveToolBarState(); break;
        case 2: openMe(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
