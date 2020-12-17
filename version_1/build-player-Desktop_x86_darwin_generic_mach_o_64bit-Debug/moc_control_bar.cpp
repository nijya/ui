/****************************************************************************
** Meta object code from reading C++ file 'control_bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../player/control_bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control_bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlBar_t {
    QByteArrayData data[26];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlBar_t qt_meta_stringdata_ControlBar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ControlBar"
QT_MOC_LITERAL(1, 11, 10), // "backToMenu"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "shouldPlay"
QT_MOC_LITERAL(4, 34, 11), // "shouldPause"
QT_MOC_LITERAL(5, 46, 10), // "shouldStop"
QT_MOC_LITERAL(6, 57, 12), // "mediaChanged"
QT_MOC_LITERAL(7, 70, 3), // "url"
QT_MOC_LITERAL(8, 74, 12), // "speedChanged"
QT_MOC_LITERAL(9, 87, 8), // "newSpeed"
QT_MOC_LITERAL(10, 96, 13), // "volumeChanged"
QT_MOC_LITERAL(11, 110, 9), // "newVolume"
QT_MOC_LITERAL(12, 120, 8), // "hideList"
QT_MOC_LITERAL(13, 129, 11), // "displayList"
QT_MOC_LITERAL(14, 141, 18), // "playFinishedAction"
QT_MOC_LITERAL(15, 160, 17), // "menuButtonClicked"
QT_MOC_LITERAL(16, 178, 24), // "playOrPauseButtonClicked"
QT_MOC_LITERAL(17, 203, 17), // "stopButtonClicked"
QT_MOC_LITERAL(18, 221, 21), // "backwardButtonClicked"
QT_MOC_LITERAL(19, 243, 21), // "forwardButtonClickede"
QT_MOC_LITERAL(20, 265, 17), // "loopButtonClicked"
QT_MOC_LITERAL(21, 283, 18), // "speedButtonClicked"
QT_MOC_LITERAL(22, 302, 19), // "volumeButtonClicked"
QT_MOC_LITERAL(23, 322, 19), // "volumeSliderChanged"
QT_MOC_LITERAL(24, 342, 8), // "newValue"
QT_MOC_LITERAL(25, 351, 17) // "listButtonClicked"

    },
    "ControlBar\0backToMenu\0\0shouldPlay\0"
    "shouldPause\0shouldStop\0mediaChanged\0"
    "url\0speedChanged\0newSpeed\0volumeChanged\0"
    "newVolume\0hideList\0displayList\0"
    "playFinishedAction\0menuButtonClicked\0"
    "playOrPauseButtonClicked\0stopButtonClicked\0"
    "backwardButtonClicked\0forwardButtonClickede\0"
    "loopButtonClicked\0speedButtonClicked\0"
    "volumeButtonClicked\0volumeSliderChanged\0"
    "newValue\0listButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    0,  115,    2, 0x06 /* Public */,
       4,    0,  116,    2, 0x06 /* Public */,
       5,    0,  117,    2, 0x06 /* Public */,
       6,    1,  118,    2, 0x06 /* Public */,
       8,    1,  121,    2, 0x06 /* Public */,
      10,    1,  124,    2, 0x06 /* Public */,
      12,    0,  127,    2, 0x06 /* Public */,
      13,    0,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  129,    2, 0x0a /* Public */,
      15,    0,  130,    2, 0x08 /* Private */,
      16,    0,  131,    2, 0x08 /* Private */,
      17,    0,  132,    2, 0x08 /* Private */,
      18,    0,  133,    2, 0x08 /* Private */,
      19,    0,  134,    2, 0x08 /* Private */,
      20,    0,  135,    2, 0x08 /* Private */,
      21,    0,  136,    2, 0x08 /* Private */,
      22,    0,  137,    2, 0x08 /* Private */,
      23,    1,  138,    2, 0x08 /* Private */,
      25,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,

       0        // eod
};

void ControlBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToMenu(); break;
        case 1: _t->shouldPlay(); break;
        case 2: _t->shouldPause(); break;
        case 3: _t->shouldStop(); break;
        case 4: _t->mediaChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 5: _t->speedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->hideList(); break;
        case 8: _t->displayList(); break;
        case 9: _t->playFinishedAction(); break;
        case 10: _t->menuButtonClicked(); break;
        case 11: _t->playOrPauseButtonClicked(); break;
        case 12: _t->stopButtonClicked(); break;
        case 13: _t->backwardButtonClicked(); break;
        case 14: _t->forwardButtonClickede(); break;
        case 15: _t->loopButtonClicked(); break;
        case 16: _t->speedButtonClicked(); break;
        case 17: _t->volumeButtonClicked(); break;
        case 18: _t->volumeSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->listButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControlBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::backToMenu)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::shouldPlay)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::shouldPause)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::shouldStop)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::mediaChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::speedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::volumeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::hideList)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ControlBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlBar::displayList)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ControlBar.data,
    qt_meta_data_ControlBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ControlBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void ControlBar::backToMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControlBar::shouldPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControlBar::shouldPause()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ControlBar::shouldStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ControlBar::mediaChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ControlBar::speedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ControlBar::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ControlBar::hideList()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ControlBar::displayList()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
