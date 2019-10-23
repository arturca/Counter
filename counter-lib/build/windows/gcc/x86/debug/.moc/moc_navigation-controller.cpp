/****************************************************************************
** Meta object code from reading C++ file 'navigation-controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/controllers/navigation-controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigation-controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_counter__controllers__NavigationController_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_counter__controllers__NavigationController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_counter__controllers__NavigationController_t qt_meta_stringdata_counter__controllers__NavigationController = {
    {
QT_MOC_LITERAL(0, 0, 42), // "counter::controllers::Navigat..."
QT_MOC_LITERAL(1, 43, 10), // "goInfoView"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 15), // "goDashboardView"
QT_MOC_LITERAL(4, 71, 11), // "goGraphView"
QT_MOC_LITERAL(5, 83, 10) // "goSaveView"

    },
    "counter::controllers::NavigationController\0"
    "goInfoView\0\0goDashboardView\0goGraphView\0"
    "goSaveView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_counter__controllers__NavigationController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void counter::controllers::NavigationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigationController *_t = static_cast<NavigationController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goInfoView(); break;
        case 1: _t->goDashboardView(); break;
        case 2: _t->goGraphView(); break;
        case 3: _t->goSaveView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationController::goInfoView)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NavigationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationController::goDashboardView)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NavigationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationController::goGraphView)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NavigationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationController::goSaveView)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject counter::controllers::NavigationController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_counter__controllers__NavigationController.data,
    qt_meta_data_counter__controllers__NavigationController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *counter::controllers::NavigationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *counter::controllers::NavigationController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_counter__controllers__NavigationController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int counter::controllers::NavigationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void counter::controllers::NavigationController::goInfoView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void counter::controllers::NavigationController::goDashboardView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void counter::controllers::NavigationController::goGraphView()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void counter::controllers::NavigationController::goSaveView()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
