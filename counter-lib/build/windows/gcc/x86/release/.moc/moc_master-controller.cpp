/****************************************************************************
** Meta object code from reading C++ file 'master-controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/controllers/master-controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'master-controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_counter__controllers__MasterController_t {
    QByteArrayData data[18];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_counter__controllers__MasterController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_counter__controllers__MasterController_t qt_meta_stringdata_counter__controllers__MasterController = {
    {
QT_MOC_LITERAL(0, 0, 38), // "counter::controllers::MasterC..."
QT_MOC_LITERAL(1, 39, 24), // "notifyFirstOptionChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 24), // "secondFirstOptionChanged"
QT_MOC_LITERAL(4, 90, 6), // "timing"
QT_MOC_LITERAL(5, 97, 21), // "getFirstOptionRepName"
QT_MOC_LITERAL(6, 119, 22), // "getSecondOptionRepName"
QT_MOC_LITERAL(7, 142, 21), // "setFirstOptionRepName"
QT_MOC_LITERAL(8, 164, 7), // "newName"
QT_MOC_LITERAL(9, 172, 22), // "setSecondOptionRepName"
QT_MOC_LITERAL(10, 195, 18), // "firstOptionClicked"
QT_MOC_LITERAL(11, 214, 19), // "secondOptionClicked"
QT_MOC_LITERAL(12, 234, 17), // "saveToFileClicked"
QT_MOC_LITERAL(13, 252, 8), // "file_url"
QT_MOC_LITERAL(14, 261, 14), // "ui_firstOption"
QT_MOC_LITERAL(15, 276, 15), // "ui_secondOption"
QT_MOC_LITERAL(16, 292, 23), // "ui_navigationController"
QT_MOC_LITERAL(17, 316, 43) // "counter::controllers::Navigat..."

    },
    "counter::controllers::MasterController\0"
    "notifyFirstOptionChanged\0\0"
    "secondFirstOptionChanged\0timing\0"
    "getFirstOptionRepName\0getSecondOptionRepName\0"
    "setFirstOptionRepName\0newName\0"
    "setSecondOptionRepName\0firstOptionClicked\0"
    "secondOptionClicked\0saveToFileClicked\0"
    "file_url\0ui_firstOption\0ui_secondOption\0"
    "ui_navigationController\0"
    "counter::controllers::NavigationController*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_counter__controllers__MasterController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   66,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x02 /* Public */,
       6,    0,   68,    2, 0x02 /* Public */,
       7,    1,   69,    2, 0x02 /* Public */,
       9,    1,   72,    2, 0x02 /* Public */,
      10,    0,   75,    2, 0x02 /* Public */,
      11,    0,   76,    2, 0x02 /* Public */,
      12,    1,   77,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00495003,
      15, QMetaType::QString, 0x00495003,
      16, 0x80000000 | 17, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void counter::controllers::MasterController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasterController *_t = static_cast<MasterController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notifyFirstOptionChanged(); break;
        case 1: _t->secondFirstOptionChanged(); break;
        case 2: _t->timing(); break;
        case 3: { QString _r = _t->getFirstOptionRepName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getSecondOptionRepName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setFirstOptionRepName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setSecondOptionRepName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->firstOptionClicked(); break;
        case 8: _t->secondOptionClicked(); break;
        case 9: _t->saveToFileClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MasterController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MasterController::notifyFirstOptionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MasterController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MasterController::secondFirstOptionChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< counter::controllers::NavigationController* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MasterController *_t = static_cast<MasterController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFirstOption(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSecondOption(); break;
        case 2: *reinterpret_cast< counter::controllers::NavigationController**>(_v) = _t->navigationController(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MasterController *_t = static_cast<MasterController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->incrFirstOption(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->incrSecondOption(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject counter::controllers::MasterController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_counter__controllers__MasterController.data,
    qt_meta_data_counter__controllers__MasterController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *counter::controllers::MasterController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *counter::controllers::MasterController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_counter__controllers__MasterController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int counter::controllers::MasterController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void counter::controllers::MasterController::notifyFirstOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void counter::controllers::MasterController::secondFirstOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
