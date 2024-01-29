/****************************************************************************
** Meta object code from reading C++ file 'path_mark_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../home/autolabor/catkin_ws/src/navigation/path_mark_plugin/include/path_mark_plugin/path_mark_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'path_mark_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_autolabor_plugin1__PathMarkPlugin_t {
    QByteArrayData data[21];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_autolabor_plugin1__PathMarkPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_autolabor_plugin1__PathMarkPlugin_t qt_meta_stringdata_autolabor_plugin1__PathMarkPlugin = {
    {
QT_MOC_LITERAL(0, 0, 33), // "autolabor_plugin1::PathMarkPl..."
QT_MOC_LITERAL(1, 34, 21), // "start_record_callback"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 20), // "stop_record_callback"
QT_MOC_LITERAL(4, 78, 19), // "start_task_callback"
QT_MOC_LITERAL(5, 98, 18), // "stop_task_callback"
QT_MOC_LITERAL(6, 117, 26), // "photo_task_button_callback"
QT_MOC_LITERAL(7, 144, 8), // "markPose"
QT_MOC_LITERAL(8, 153, 36), // "geometry_msgs::PoseStamped::C..."
QT_MOC_LITERAL(9, 190, 4), // "pose"
QT_MOC_LITERAL(10, 195, 13), // "initPoseTable"
QT_MOC_LITERAL(11, 209, 9), // "writePose"
QT_MOC_LITERAL(12, 219, 3), // "msg"
QT_MOC_LITERAL(13, 223, 20), // "photo_point_callback"
QT_MOC_LITERAL(14, 244, 3), // "row"
QT_MOC_LITERAL(15, 248, 6), // "column"
QT_MOC_LITERAL(16, 255, 10), // "del_marker"
QT_MOC_LITERAL(17, 266, 36), // "visualization_msgs::Marker::C..."
QT_MOC_LITERAL(18, 303, 10), // "resetTable"
QT_MOC_LITERAL(19, 314, 10), // "writeTrack"
QT_MOC_LITERAL(20, 325, 24) // "nav_msgs::Path::ConstPtr"

    },
    "autolabor_plugin1::PathMarkPlugin\0"
    "start_record_callback\0\0stop_record_callback\0"
    "start_task_callback\0stop_task_callback\0"
    "photo_task_button_callback\0markPose\0"
    "geometry_msgs::PoseStamped::ConstPtr\0"
    "pose\0initPoseTable\0writePose\0msg\0"
    "photo_point_callback\0row\0column\0"
    "del_marker\0visualization_msgs::Marker::ConstPtr\0"
    "resetTable\0writeTrack\0nav_msgs::Path::ConstPtr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_autolabor_plugin1__PathMarkPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x09 /* Protected */,
       3,    0,   75,    2, 0x09 /* Protected */,
       4,    0,   76,    2, 0x09 /* Protected */,
       5,    0,   77,    2, 0x09 /* Protected */,
       6,    0,   78,    2, 0x09 /* Protected */,
       7,    1,   79,    2, 0x09 /* Protected */,
      10,    0,   82,    2, 0x09 /* Protected */,
      11,    1,   83,    2, 0x09 /* Protected */,
      13,    2,   86,    2, 0x09 /* Protected */,
      16,    2,   91,    2, 0x09 /* Protected */,
      18,    0,   96,    2, 0x09 /* Protected */,
      19,    1,   97,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,   12,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   12,

       0        // eod
};

void autolabor_plugin1::PathMarkPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PathMarkPlugin *_t = static_cast<PathMarkPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start_record_callback(); break;
        case 1: _t->stop_record_callback(); break;
        case 2: _t->start_task_callback(); break;
        case 3: _t->stop_task_callback(); break;
        case 4: _t->photo_task_button_callback(); break;
        case 5: _t->markPose((*reinterpret_cast< const geometry_msgs::PoseStamped::ConstPtr(*)>(_a[1]))); break;
        case 6: _t->initPoseTable(); break;
        case 7: _t->writePose((*reinterpret_cast< const geometry_msgs::PoseStamped::ConstPtr(*)>(_a[1]))); break;
        case 8: _t->photo_point_callback((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->del_marker((*reinterpret_cast< const visualization_msgs::Marker::ConstPtr(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->resetTable(); break;
        case 11: _t->writeTrack((*reinterpret_cast< const nav_msgs::Path::ConstPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject autolabor_plugin1::PathMarkPlugin::staticMetaObject = {
    { &rviz::Panel::staticMetaObject, qt_meta_stringdata_autolabor_plugin1__PathMarkPlugin.data,
      qt_meta_data_autolabor_plugin1__PathMarkPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *autolabor_plugin1::PathMarkPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *autolabor_plugin1::PathMarkPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_autolabor_plugin1__PathMarkPlugin.stringdata0))
        return static_cast<void*>(this);
    return rviz::Panel::qt_metacast(_clname);
}

int autolabor_plugin1::PathMarkPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
