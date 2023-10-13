/****************************************************************************
** Meta object code from reading C++ file 'btaptab.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/btaptab.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'btaptab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSbtapTabENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSbtapTabENDCLASS = QtMocHelpers::stringData(
    "btapTab",
    "on_detailButton_clicked",
    "",
    "buttonAdd_clicked",
    "loadFromDatabase",
    "updateTotalCalories"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSbtapTabENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[8];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[17];
    char stringdata5[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSbtapTabENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSbtapTabENDCLASS_t qt_meta_stringdata_CLASSbtapTabENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "btapTab"
        QT_MOC_LITERAL(8, 23),  // "on_detailButton_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 17),  // "buttonAdd_clicked"
        QT_MOC_LITERAL(51, 16),  // "loadFromDatabase"
        QT_MOC_LITERAL(68, 19)   // "updateTotalCalories"
    },
    "btapTab",
    "on_detailButton_clicked",
    "",
    "buttonAdd_clicked",
    "loadFromDatabase",
    "updateTotalCalories"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbtapTabENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject btapTab::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSbtapTabENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbtapTabENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbtapTabENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<btapTab, std::true_type>,
        // method 'on_detailButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadFromDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTotalCalories'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void btapTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<btapTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_detailButton_clicked(); break;
        case 1: _t->buttonAdd_clicked(); break;
        case 2: _t->loadFromDatabase(); break;
        case 3: _t->updateTotalCalories(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *btapTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btapTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbtapTabENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int btapTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
