/****************************************************************************
** Meta object code from reading C++ file 'ConsoleObserver.h'
**
** Created: Tue Jan 27 16:07:02 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../neuron_annotator/utility/ConsoleObserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConsoleObserver[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   17,   16,   16, 0x05,
      66,   50,   16,   16, 0x05,
     138,  104,   16,   16, 0x05,
     202,  194,   16,   16, 0x05,
     244,   16,   16,   16, 0x05,
     287,  269,   16,   16, 0x05,
     330,  317,   16,   16, 0x05,
     365,  358,   16,   16, 0x05,
     403,  394,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     438,  431,   16,   16, 0x0a,
     463,  431,   16,   16, 0x0a,
     514,  487,   16,   16, 0x0a,
     569,  551,   16,   16, 0x0a,
     612,  603,   16,   16, 0x0a,
     640,  603,   16,   16, 0x0a,
     677,  667,   16,   16, 0x0a,
     701,   16,   16,   16, 0x0a,
     721,  603,   16,   16, 0x08,
     766,  758,   16,   16, 0x08,
     805,  799,   16,   16, 0x08,
     832,  758,   16,   16, 0x08,
     872,  799,   16,   16, 0x08,
     906,  758,   16,   16, 0x08,
     955,  799,   16,   16, 0x08,
     998,  758,   16,   16, 0x08,
    1048,  799,   16,   16, 0x08,
    1092,  758,   16,   16, 0x08,
    1131,  799,   16,   16, 0x08,
    1164,  758,   16,   16, 0x08,
    1206,  799,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConsoleObserver[] = {
    "ConsoleObserver\0\0ontology\0"
    "openOntology(Ontology*)\0annotatedBranch\0"
    "openAnnotatedBranch(AnnotatedBranch*)\0"
    "entityId,annotations,userColorMap\0"
    "updateAnnotations(qint64,AnnotationList*,UserColorMap*)\0"
    "session\0openAnnotationSession(AnnotationSession*)\0"
    "closeAnnotationSession()\0entityId,external\0"
    "selectEntityById(qint64,bool)\0"
    "errorMessage\0communicationError(QString)\0"
    "sample\0updateCurrentSample(Entity*)\0"
    "filename\0openStackWithVaa3d(QString)\0"
    "rootId\0ontologySelected(qint64)\0"
    "ontologyChanged(qint64)\0"
    "category,uniqueId,clearAll\0"
    "entitySelected(QString,QString,bool)\0"
    "category,uniqueId\0entityDeselected(QString,QString)\0"
    "entityId\0entityViewRequested(qint64)\0"
    "annotationsChanged(qint64)\0sessionId\0"
    "sessionSelected(qint64)\0sessionDeselected()\0"
    "annotatedBranchViewRequested(qint64)\0"
    "results\0loadOntologyResults(const void*)\0"
    "error\0loadOntologyError(QString)\0"
    "entityViewRequestedResults(const void*)\0"
    "entityViewRequestedError(QString)\0"
    "annotatedBranchViewRequestedResults(const void*)\0"
    "annotatedBranchViewRequestedError(QString)\0"
    "annotatedBranchViewRequested2Results(const void*)\0"
    "annotatedBranchViewRequested2Error(QString)\0"
    "annotationsChangedResults(const void*)\0"
    "annotationsChangedError(QString)\0"
    "loadAnnotationSessionResults(const void*)\0"
    "loadAnnotationSessionError(QString)\0"
};

const QMetaObject ConsoleObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConsoleObserver,
      qt_meta_data_ConsoleObserver, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConsoleObserver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConsoleObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConsoleObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleObserver))
        return static_cast<void*>(const_cast< ConsoleObserver*>(this));
    return QObject::qt_metacast(_clname);
}

int ConsoleObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openOntology((*reinterpret_cast< Ontology*(*)>(_a[1]))); break;
        case 1: openAnnotatedBranch((*reinterpret_cast< AnnotatedBranch*(*)>(_a[1]))); break;
        case 2: updateAnnotations((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< AnnotationList*(*)>(_a[2])),(*reinterpret_cast< UserColorMap*(*)>(_a[3]))); break;
        case 3: openAnnotationSession((*reinterpret_cast< AnnotationSession*(*)>(_a[1]))); break;
        case 4: closeAnnotationSession(); break;
        case 5: selectEntityById((*reinterpret_cast< const qint64(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 6: communicationError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: updateCurrentSample((*reinterpret_cast< Entity*(*)>(_a[1]))); break;
        case 8: openStackWithVaa3d((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: ontologySelected((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: ontologyChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: entitySelected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: entityDeselected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: entityViewRequested((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 14: annotationsChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 15: sessionSelected((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 16: sessionDeselected(); break;
        case 17: annotatedBranchViewRequested((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 18: loadOntologyResults((*reinterpret_cast< const void*(*)>(_a[1]))); break;
        case 19: loadOntologyError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: entityViewRequestedResults((*reinterpret_cast< const void*(*)>(_a[1]))); break;
        case 21: entityViewRequestedError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: annotatedBranchViewRequestedResults((*reinterpret_cast< const void*(*)>(_a[1]))); break;
        case 23: annotatedBranchViewRequestedError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: annotatedBranchViewRequested2Results((*reinterpret_cast< const void*(*)>(_a[1]))); break;
        case 25: annotatedBranchViewRequested2Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: annotationsChangedResults((*reinterpret_cast< const void*(*)>(_a[1]))); break;
        case 27: annotationsChangedError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: loadAnnotationSessionResults((*reinterpret_cast< const void*(*)>(_a[1]))); break;
        case 29: loadAnnotationSessionError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void ConsoleObserver::openOntology(Ontology * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConsoleObserver::openAnnotatedBranch(AnnotatedBranch * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConsoleObserver::updateAnnotations(qint64 _t1, AnnotationList * _t2, UserColorMap * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConsoleObserver::openAnnotationSession(AnnotationSession * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConsoleObserver::closeAnnotationSession()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ConsoleObserver::selectEntityById(const qint64 & _t1, const bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ConsoleObserver::communicationError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ConsoleObserver::updateCurrentSample(Entity * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ConsoleObserver::openStackWithVaa3d(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
