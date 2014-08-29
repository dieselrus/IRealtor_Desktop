/****************************************************************************
** Meta object code from reading C++ file 'realtyobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IRealtor_Desktop/realtyobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realtyobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RealtyObject_t {
    QByteArrayData data[15];
    char stringdata[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RealtyObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RealtyObject_t qt_meta_stringdata_RealtyObject = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 8),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 7),
QT_MOC_LITERAL(4, 31, 11),
QT_MOC_LITERAL(5, 43, 9),
QT_MOC_LITERAL(6, 53, 7),
QT_MOC_LITERAL(7, 61, 9),
QT_MOC_LITERAL(8, 71, 12),
QT_MOC_LITERAL(9, 84, 11),
QT_MOC_LITERAL(10, 96, 17),
QT_MOC_LITERAL(11, 114, 19),
QT_MOC_LITERAL(12, 134, 9),
QT_MOC_LITERAL(13, 144, 10),
QT_MOC_LITERAL(14, 155, 10)
    },
    "RealtyObject\0saveData\0\0getData\0"
    "getSettings\0addRegion\0addType\0addStatus\0"
    "addTradeType\0addMaterial\0addTypeApartament\0"
    "addDocumentProperty\0selectAdr\0setAdderss\0"
    "updateData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RealtyObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RealtyObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RealtyObject *_t = static_cast<RealtyObject *>(_o);
        switch (_id) {
        case 0: _t->saveData(); break;
        case 1: _t->getData(); break;
        case 2: _t->getSettings(); break;
        case 3: _t->addRegion(); break;
        case 4: _t->addType(); break;
        case 5: _t->addStatus(); break;
        case 6: _t->addTradeType(); break;
        case 7: _t->addMaterial(); break;
        case 8: _t->addTypeApartament(); break;
        case 9: _t->addDocumentProperty(); break;
        case 10: _t->selectAdr(); break;
        case 11: _t->setAdderss(); break;
        case 12: _t->updateData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RealtyObject::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RealtyObject.data,
      qt_meta_data_RealtyObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *RealtyObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RealtyObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RealtyObject.stringdata))
        return static_cast<void*>(const_cast< RealtyObject*>(this));
    return QDialog::qt_metacast(_clname);
}

int RealtyObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
