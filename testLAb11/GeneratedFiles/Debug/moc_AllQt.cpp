/****************************************************************************
** Meta object code from reading C++ file 'AllQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AllQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AllQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AllQt_t {
    QByteArrayData data[13];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AllQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AllQt_t qt_meta_stringdata_AllQt = {
    {
QT_MOC_LITERAL(0, 0, 5), // "AllQt"
QT_MOC_LITERAL(1, 6, 15), // "listItemChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "addCoat"
QT_MOC_LITERAL(4, 31, 10), // "deleteCoat"
QT_MOC_LITERAL(5, 42, 10), // "updateCoat"
QT_MOC_LITERAL(6, 53, 15), // "filterCoatsRepo"
QT_MOC_LITERAL(7, 69, 24), // "moveCoatToShoppingBasket"
QT_MOC_LITERAL(8, 94, 28), // "moveAllCoatsToShoppingBasket"
QT_MOC_LITERAL(9, 123, 7), // "display"
QT_MOC_LITERAL(10, 131, 4), // "next"
QT_MOC_LITERAL(11, 136, 9), // "saveToCSV"
QT_MOC_LITERAL(12, 146, 10) // "saveToHtml"

    },
    "AllQt\0listItemChanged\0\0addCoat\0"
    "deleteCoat\0updateCoat\0filterCoatsRepo\0"
    "moveCoatToShoppingBasket\0"
    "moveAllCoatsToShoppingBasket\0display\0"
    "next\0saveToCSV\0saveToHtml"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AllQt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AllQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AllQt *_t = static_cast<AllQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listItemChanged(); break;
        case 1: _t->addCoat(); break;
        case 2: _t->deleteCoat(); break;
        case 3: _t->updateCoat(); break;
        case 4: _t->filterCoatsRepo(); break;
        case 5: _t->moveCoatToShoppingBasket(); break;
        case 6: _t->moveAllCoatsToShoppingBasket(); break;
        case 7: _t->display(); break;
        case 8: _t->next(); break;
        case 9: _t->saveToCSV(); break;
        case 10: _t->saveToHtml(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AllQt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AllQt.data,
      qt_meta_data_AllQt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AllQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AllQt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AllQt.stringdata0))
        return static_cast<void*>(const_cast< AllQt*>(this));
    return QWidget::qt_metacast(_clname);
}

int AllQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
