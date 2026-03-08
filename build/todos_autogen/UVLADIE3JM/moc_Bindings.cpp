/****************************************************************************
** Meta object code from reading C++ file 'Bindings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/Bindings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Bindings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Todos_t {
    QByteArrayData data[22];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Todos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Todos_t qt_meta_stringdata_Todos = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Todos"
QT_MOC_LITERAL(1, 6, 12), // "newDataReady"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 32, 6), // "parent"
QT_MOC_LITERAL(5, 39, 18), // "activeCountChanged"
QT_MOC_LITERAL(6, 58, 12), // "countChanged"
QT_MOC_LITERAL(7, 71, 3), // "add"
QT_MOC_LITERAL(8, 75, 11), // "description"
QT_MOC_LITERAL(9, 87, 14), // "clearCompleted"
QT_MOC_LITERAL(10, 102, 6), // "remove"
QT_MOC_LITERAL(11, 109, 5), // "index"
QT_MOC_LITERAL(12, 115, 6), // "setAll"
QT_MOC_LITERAL(13, 122, 9), // "completed"
QT_MOC_LITERAL(14, 132, 10), // "insertRows"
QT_MOC_LITERAL(15, 143, 3), // "row"
QT_MOC_LITERAL(16, 147, 5), // "count"
QT_MOC_LITERAL(17, 153, 10), // "removeRows"
QT_MOC_LITERAL(18, 164, 12), // "setCompleted"
QT_MOC_LITERAL(19, 177, 5), // "value"
QT_MOC_LITERAL(20, 183, 14), // "setDescription"
QT_MOC_LITERAL(21, 198, 11) // "activeCount"

    },
    "Todos\0newDataReady\0\0QModelIndex\0parent\0"
    "activeCountChanged\0countChanged\0add\0"
    "description\0clearCompleted\0remove\0"
    "index\0setAll\0completed\0insertRows\0row\0"
    "count\0removeRows\0setCompleted\0value\0"
    "setDescription\0activeCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Todos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   94,    2, 0x02 /* Public */,
       9,    0,   97,    2, 0x02 /* Public */,
      10,    1,   98,    2, 0x02 /* Public */,
      12,    1,  101,    2, 0x02 /* Public */,
      14,    3,  104,    2, 0x02 /* Public */,
      14,    2,  111,    2, 0x22 /* Public | MethodCloned */,
      17,    3,  116,    2, 0x02 /* Public */,
      17,    2,  123,    2, 0x22 /* Public | MethodCloned */,
      13,    1,  128,    2, 0x02 /* Public */,
      18,    2,  131,    2, 0x02 /* Public */,
       8,    1,  136,    2, 0x02 /* Public */,
      20,    2,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::ULongLong,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   15,   16,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   15,   16,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Bool, QMetaType::Int,   15,
    QMetaType::Bool, QMetaType::Int, QMetaType::Bool,   15,   19,
    QMetaType::QString, QMetaType::Int,   15,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,   15,   19,

 // properties: name, type, flags
      21, QMetaType::ULongLong, 0x00495801,
      16, QMetaType::ULongLong, 0x00495801,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void Todos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Todos *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newDataReady((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->activeCountChanged(); break;
        case 2: _t->countChanged(); break;
        case 3: _t->add((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clearCompleted(); break;
        case 5: { bool _r = _t->remove((*reinterpret_cast< quint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->insertRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->insertRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->completed((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->setCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->description((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->setDescription((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Todos::*)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Todos::newDataReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Todos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Todos::activeCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Todos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Todos::countChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Todos *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint64*>(_v) = _t->activeCount(); break;
        case 1: *reinterpret_cast< quint64*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Todos::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_Todos.data,
    qt_meta_data_Todos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Todos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Todos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Todos.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int Todos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
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
void Todos::newDataReady(const QModelIndex & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Todos *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Todos::activeCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Todos::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
