/****************************************************************************
** Meta object code from reading C++ file 'table_main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../table_main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'table_main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Table_Main_Window_t {
    QByteArrayData data[12];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Table_Main_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Table_Main_Window_t qt_meta_stringdata_Table_Main_Window = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Table_Main_Window"
QT_MOC_LITERAL(1, 18, 13), // "addButtonSlot"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "deleteButtonSlot"
QT_MOC_LITERAL(4, 50, 8), // "newTable"
QT_MOC_LITERAL(5, 59, 4), // "open"
QT_MOC_LITERAL(6, 64, 4), // "save"
QT_MOC_LITERAL(7, 69, 7), // "save_as"
QT_MOC_LITERAL(8, 77, 5), // "about"
QT_MOC_LITERAL(9, 83, 11), // "WriteInFile"
QT_MOC_LITERAL(10, 95, 6), // "QFile&"
QT_MOC_LITERAL(11, 102, 1) // "f"

    },
    "Table_Main_Window\0addButtonSlot\0\0"
    "deleteButtonSlot\0newTable\0open\0save\0"
    "save_as\0about\0WriteInFile\0QFile&\0f"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Table_Main_Window[] = {

 // content:
       7,       // revision
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

void Table_Main_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Table_Main_Window *_t = static_cast<Table_Main_Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addButtonSlot(); break;
        case 1: _t->deleteButtonSlot(); break;
        case 2: _t->newTable(); break;
        case 3: _t->open(); break;
        case 4: _t->save(); break;
        case 5: _t->save_as(); break;
        case 6: _t->about(); break;
        case 7: _t->WriteInFile((*reinterpret_cast< QFile(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Table_Main_Window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Table_Main_Window.data,
      qt_meta_data_Table_Main_Window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Table_Main_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Table_Main_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Table_Main_Window.stringdata0))
        return static_cast<void*>(const_cast< Table_Main_Window*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Table_Main_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
