/****************************************************************************
** Meta object code from reading C++ file 'two-option-counter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/controllers/two-option-counter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'two-option-counter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_counter__controllers__TwoOptionCounter_t {
    QByteArrayData data[9];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_counter__controllers__TwoOptionCounter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_counter__controllers__TwoOptionCounter_t qt_meta_stringdata_counter__controllers__TwoOptionCounter = {
    {
QT_MOC_LITERAL(0, 0, 38), // "counter::controllers::TwoOpti..."
QT_MOC_LITERAL(1, 39, 24), // "notifyFirstOptionChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 24), // "secondFirstOptionChanged"
QT_MOC_LITERAL(4, 90, 18), // "firstOptionClicked"
QT_MOC_LITERAL(5, 109, 19), // "secondOptionClicked"
QT_MOC_LITERAL(6, 129, 17), // "saveToFileClicked"
QT_MOC_LITERAL(7, 147, 14), // "ui_firstOption"
QT_MOC_LITERAL(8, 162, 15) // "ui_secondOption"

    },
    "counter::controllers::TwoOptionCounter\0"
    "notifyFirstOptionChanged\0\0"
    "secondFirstOptionChanged\0firstOptionClicked\0"
    "secondOptionClicked\0saveToFileClicked\0"
    "ui_firstOption\0ui_secondOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_counter__controllers__TwoOptionCounter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x02 /* Public */,
       5,    0,   42,    2, 0x02 /* Public */,
       6,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495003,
       8, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void counter::controllers::TwoOptionCounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TwoOptionCounter *_t = static_cast<TwoOptionCounter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notifyFirstOptionChanged(); break;
        case 1: _t->secondFirstOptionChanged(); break;
        case 2: _t->firstOptionClicked(); break;
        case 3: _t->secondOptionClicked(); break;
        case 4: _t->saveToFileClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TwoOptionCounter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TwoOptionCounter::notifyFirstOptionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TwoOptionCounter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TwoOptionCounter::secondFirstOptionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TwoOptionCounter *_t = static_cast<TwoOptionCounter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFirstOption(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSecondOption(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TwoOptionCounter *_t = static_cast<TwoOptionCounter *>(_o);
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
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject counter::controllers::TwoOptionCounter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_counter__controllers__TwoOptionCounter.data,
    qt_meta_data_counter__controllers__TwoOptionCounter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *counter::controllers::TwoOptionCounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *counter::controllers::TwoOptionCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_counter__controllers__TwoOptionCounter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int counter::controllers::TwoOptionCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void counter::controllers::TwoOptionCounter::notifyFirstOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void counter::controllers::TwoOptionCounter::secondFirstOptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
