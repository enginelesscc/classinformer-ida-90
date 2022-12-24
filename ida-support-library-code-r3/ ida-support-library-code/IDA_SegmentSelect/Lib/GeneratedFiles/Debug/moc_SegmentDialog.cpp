/****************************************************************************
** Meta object code from reading C++ file 'SegmentDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SegmentDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SegmentDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SegmentDialog_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SegmentDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SegmentDialog_t qt_meta_stringdata_SegmentDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SegmentDialog"
QT_MOC_LITERAL(1, 14, 16), // "onDoubleRowClick"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "row"
QT_MOC_LITERAL(4, 36, 6) // "column"

    },
    "SegmentDialog\0onDoubleRowClick\0\0row\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SegmentDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void SegmentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SegmentDialog *_t = static_cast<SegmentDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDoubleRowClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SegmentDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SegmentDialog.data,
      qt_meta_data_SegmentDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SegmentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SegmentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SegmentDialog.stringdata0))
        return static_cast<void*>(const_cast< SegmentDialog*>(this));
    if (!strcmp(_clname, "Ui::SegSelectDialog"))
        return static_cast< Ui::SegSelectDialog*>(const_cast< SegmentDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SegmentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
