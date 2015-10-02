/****************************************************************************
** Meta object code from reading C++ file 'dialog_hi_bye.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../YotaHelp/dialog_hi_bye.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_hi_bye.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_Hi_Bye_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_Hi_Bye_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_Hi_Bye_t qt_meta_stringdata_Dialog_Hi_Bye = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Dialog_Hi_Bye"
QT_MOC_LITERAL(1, 14, 9), // "take_Flag"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "get_Selected_Button"
QT_MOC_LITERAL(4, 45, 9), // "get_title"
QT_MOC_LITERAL(5, 55, 8), // "get_text"
QT_MOC_LITERAL(6, 64, 2) // "ok"

    },
    "Dialog_Hi_Bye\0take_Flag\0\0get_Selected_Button\0"
    "get_title\0get_text\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_Hi_Bye[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::QString,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void,

       0        // eod
};

void Dialog_Hi_Bye::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_Hi_Bye *_t = static_cast<Dialog_Hi_Bye *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->take_Flag();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->get_Selected_Button();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->get_title();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->get_text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->ok(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (Dialog_Hi_Bye::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog_Hi_Bye::take_Flag)) {
                *result = 0;
            }
        }
        {
            typedef QString (Dialog_Hi_Bye::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog_Hi_Bye::get_Selected_Button)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Dialog_Hi_Bye::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_Hi_Bye.data,
      qt_meta_data_Dialog_Hi_Bye,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog_Hi_Bye::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_Hi_Bye::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_Hi_Bye.stringdata0))
        return static_cast<void*>(const_cast< Dialog_Hi_Bye*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_Hi_Bye::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
int Dialog_Hi_Bye::take_Flag()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
QString Dialog_Hi_Bye::get_Selected_Button()
{
    QString _t0 = QString();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
