/****************************************************************************
** Meta object code from reading C++ file 'qnemainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qnemainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnemainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNEMainWindow_t {
    QByteArrayData data[6];
    char stringdata[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNEMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNEMainWindow_t qt_meta_stringdata_QNEMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QNEMainWindow"
QT_MOC_LITERAL(1, 14, 8), // "saveFile"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "loadFile"
QT_MOC_LITERAL(4, 33, 8), // "addBlock"
QT_MOC_LITERAL(5, 42, 7) // "saveXML"

    },
    "QNEMainWindow\0saveFile\0\0loadFile\0"
    "addBlock\0saveXML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNEMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNEMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNEMainWindow *_t = static_cast<QNEMainWindow *>(_o);
        switch (_id) {
        case 0: _t->saveFile(); break;
        case 1: _t->loadFile(); break;
        case 2: _t->addBlock(); break;
        case 3: _t->saveXML(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QNEMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QNEMainWindow.data,
      qt_meta_data_QNEMainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *QNEMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNEMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNEMainWindow.stringdata))
        return static_cast<void*>(const_cast< QNEMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QNEMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
