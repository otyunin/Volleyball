/****************************************************************************
** Meta object code from reading C++ file 'authentication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../authentication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authentication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Authentication_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Authentication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Authentication_t qt_meta_stringdata_Authentication = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Authentication"
QT_MOC_LITERAL(1, 15, 11), // "firstWindow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "signal_varible"
QT_MOC_LITERAL(4, 43, 6), // "name_1"
QT_MOC_LITERAL(5, 50, 6), // "name_2"
QT_MOC_LITERAL(6, 57, 8), // "sendData"
QT_MOC_LITERAL(7, 66, 3), // "str"
QT_MOC_LITERAL(8, 70, 20), // "on_startGame_clicked"
QT_MOC_LITERAL(9, 91, 15), // "on_back_clicked"
QT_MOC_LITERAL(10, 107, 12), // "onButtonSend"
QT_MOC_LITERAL(11, 120, 10), // "pl1_change"
QT_MOC_LITERAL(12, 131, 10) // "pl2_change"

    },
    "Authentication\0firstWindow\0\0signal_varible\0"
    "name_1\0name_2\0sendData\0str\0"
    "on_startGame_clicked\0on_back_clicked\0"
    "onButtonSend\0pl1_change\0pl2_change"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Authentication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Authentication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Authentication *_t = static_cast<Authentication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->signal_varible((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_startGame_clicked(); break;
        case 4: _t->on_back_clicked(); break;
        case 5: _t->onButtonSend(); break;
        case 6: _t->pl1_change(); break;
        case 7: _t->pl2_change(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Authentication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Authentication::firstWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Authentication::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Authentication::signal_varible)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Authentication::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Authentication::sendData)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Authentication::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Authentication.data,
      qt_meta_data_Authentication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Authentication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Authentication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Authentication.stringdata0))
        return static_cast<void*>(const_cast< Authentication*>(this));
    return QWidget::qt_metacast(_clname);
}

int Authentication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Authentication::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Authentication::signal_varible(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Authentication::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
