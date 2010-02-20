/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Feb 20 15:28:27 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      29,   11,   11,   11, 0x09,
      46,   11,   11,   11, 0x09,
      62,   60,   11,   11, 0x09,
      79,   11,   11,   11, 0x09,
      99,   11,   11,   11, 0x09,
     126,  119,   11,   11, 0x09,
     145,   11,   11,   11, 0x09,
     163,   11,   11,   11, 0x09,
     184,   11,   11,   11, 0x09,
     207,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0adjustLocation()\0"
    "changeLocation()\0adjustTitle()\0p\0"
    "setProgress(int)\0finishLoading(bool)\0"
    "highlightAllLinks()\0invert\0"
    "rotateImages(bool)\0removeGifImages()\0"
    "removeInlineFrames()\0removeObjectElements()\0"
    "removeEmbeddedElements()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: adjustLocation(); break;
        case 1: changeLocation(); break;
        case 2: adjustTitle(); break;
        case 3: setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: finishLoading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: highlightAllLinks(); break;
        case 6: rotateImages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: removeGifImages(); break;
        case 8: removeInlineFrames(); break;
        case 9: removeObjectElements(); break;
        case 10: removeEmbeddedElements(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
