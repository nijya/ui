/****************************************************************************
** Meta object code from reading C++ file 'player_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../player/player_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerWidget_t {
    QByteArrayData data[14];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerWidget_t qt_meta_stringdata_PlayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlayerWidget"
QT_MOC_LITERAL(1, 13, 8), // "finished"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "setMedia"
QT_MOC_LITERAL(4, 32, 3), // "url"
QT_MOC_LITERAL(5, 36, 8), // "setSpeed"
QT_MOC_LITERAL(6, 45, 5), // "speed"
QT_MOC_LITERAL(7, 51, 9), // "setVolume"
QT_MOC_LITERAL(8, 61, 6), // "volume"
QT_MOC_LITERAL(9, 68, 4), // "play"
QT_MOC_LITERAL(10, 73, 5), // "pause"
QT_MOC_LITERAL(11, 79, 4), // "stop"
QT_MOC_LITERAL(12, 84, 7), // "setTime"
QT_MOC_LITERAL(13, 92, 13) // "mediaFinished"

    },
    "PlayerWidget\0finished\0\0setMedia\0url\0"
    "setSpeed\0speed\0setVolume\0volume\0play\0"
    "pause\0stop\0setTime\0mediaFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x0a /* Public */,
      10,    0,   70,    2, 0x0a /* Public */,
      11,    0,   71,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->setMedia((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 2: _t->setSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->play(); break;
        case 5: _t->pause(); break;
        case 6: _t->stop(); break;
        case 7: _t->setTime(); break;
        case 8: _t->mediaFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerWidget::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlayerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PlayerWidget.data,
    qt_meta_data_PlayerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PlayerWidget::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
