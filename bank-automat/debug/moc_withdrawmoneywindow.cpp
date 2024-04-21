/****************************************************************************
** Meta object code from reading C++ file 'withdrawmoneywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../withdrawmoneywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'withdrawmoneywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WithdrawMoneyWindow_t {
    QByteArrayData data[12];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WithdrawMoneyWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WithdrawMoneyWindow_t qt_meta_stringdata_WithdrawMoneyWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WithdrawMoneyWindow"
QT_MOC_LITERAL(1, 20, 26), // "on_btn_withdraw_20_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 26), // "on_btn_withdraw_40_clicked"
QT_MOC_LITERAL(4, 75, 26), // "on_btn_withdraw_60_clicked"
QT_MOC_LITERAL(5, 102, 27), // "on_btn_withdraw_100_clicked"
QT_MOC_LITERAL(6, 130, 27), // "on_btn_withdraw_200_clicked"
QT_MOC_LITERAL(7, 158, 27), // "on_btn_withdraw_500_clicked"
QT_MOC_LITERAL(8, 186, 30), // "on_btn_withdraw_return_clicked"
QT_MOC_LITERAL(9, 217, 18), // "updateBalanceSLotW"
QT_MOC_LITERAL(10, 236, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 251, 5) // "reply"

    },
    "WithdrawMoneyWindow\0on_btn_withdraw_20_clicked\0"
    "\0on_btn_withdraw_40_clicked\0"
    "on_btn_withdraw_60_clicked\0"
    "on_btn_withdraw_100_clicked\0"
    "on_btn_withdraw_200_clicked\0"
    "on_btn_withdraw_500_clicked\0"
    "on_btn_withdraw_return_clicked\0"
    "updateBalanceSLotW\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WithdrawMoneyWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void WithdrawMoneyWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WithdrawMoneyWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_withdraw_20_clicked(); break;
        case 1: _t->on_btn_withdraw_40_clicked(); break;
        case 2: _t->on_btn_withdraw_60_clicked(); break;
        case 3: _t->on_btn_withdraw_100_clicked(); break;
        case 4: _t->on_btn_withdraw_200_clicked(); break;
        case 5: _t->on_btn_withdraw_500_clicked(); break;
        case 6: _t->on_btn_withdraw_return_clicked(); break;
        case 7: _t->updateBalanceSLotW((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WithdrawMoneyWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_WithdrawMoneyWindow.data,
    qt_meta_data_WithdrawMoneyWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WithdrawMoneyWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WithdrawMoneyWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WithdrawMoneyWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WithdrawMoneyWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
