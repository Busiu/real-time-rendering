/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[455];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 34), // "on_verticalSliderRotX_valueCh..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 34), // "on_verticalSliderRotY_valueCh..."
QT_MOC_LITERAL(4, 82, 34), // "on_verticalSliderRotZ_valueCh..."
QT_MOC_LITERAL(5, 117, 34), // "on_verticalSliderZoom_valueCh..."
QT_MOC_LITERAL(6, 152, 44), // "on_verticalSliderTerHeightSca..."
QT_MOC_LITERAL(7, 197, 45), // "on_verticalSliderTerHeightOff..."
QT_MOC_LITERAL(8, 243, 5), // "value"
QT_MOC_LITERAL(9, 249, 39), // "on_horizontalSlider_Slider_va..."
QT_MOC_LITERAL(10, 289, 43), // "on_verticalSliderFogBrightnes..."
QT_MOC_LITERAL(11, 333, 40), // "on_verticalSliderFogDensity_v..."
QT_MOC_LITERAL(12, 374, 41), // "on_verticalSliderFogDensity2_..."
QT_MOC_LITERAL(13, 416, 38) // "on_verticalSliderFogLevel_val..."

    },
    "MainWindow\0on_verticalSliderRotX_valueChanged\0"
    "\0on_verticalSliderRotY_valueChanged\0"
    "on_verticalSliderRotZ_valueChanged\0"
    "on_verticalSliderZoom_valueChanged\0"
    "on_verticalSliderTerHeightScale_valueChanged\0"
    "on_verticalSliderTerHeightOffset_valueChanged\0"
    "value\0on_horizontalSlider_Slider_valueChanged\0"
    "on_verticalSliderFogBrightness_valueChanged\0"
    "on_verticalSliderFogDensity_valueChanged\0"
    "on_verticalSliderFogDensity2_valueChanged\0"
    "on_verticalSliderFogLevel_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       3,    1,   72,    2, 0x08 /* Private */,
       4,    1,   75,    2, 0x08 /* Private */,
       5,    1,   78,    2, 0x08 /* Private */,
       6,    1,   81,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       9,    1,   87,    2, 0x08 /* Private */,
      10,    1,   90,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x08 /* Private */,
      13,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_verticalSliderRotX_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_verticalSliderRotY_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_verticalSliderRotZ_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_verticalSliderZoom_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_verticalSliderTerHeightScale_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_verticalSliderTerHeightOffset_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_verticalSliderFogBrightness_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_verticalSliderFogDensity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_verticalSliderFogDensity2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_verticalSliderFogLevel_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE