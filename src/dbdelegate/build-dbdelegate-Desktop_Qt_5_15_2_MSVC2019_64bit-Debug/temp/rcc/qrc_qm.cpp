/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.15.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // E:/Project_Github/CMakeQtDemo/src/dbdelegate/core_common/qrc/qm/widgets.qm
  
  
    // E:/Project_Github/CMakeQtDemo/src/dbdelegate/core_common/qrc/qm/qt_zh_CN.qm
  
  
  
static const unsigned char qt_resource_data[117938] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // qm
  0x0,0x2,
  0x0,0x0,0x7,0x7d,
  0x0,0x71,
  0x0,0x6d,
    // widgets.qm
  0x0,0xa,
  0xd,0xc5,0x1a,0x3d,
  0x0,0x77,
  0x0,0x69,0x0,0x64,0x0,0x67,0x0,0x65,0x0,0x74,0x0,0x73,0x0,0x2e,0x0,0x71,0x0,0x6d,
    // qt_zh_CN.qm
  0x0,0xb,
  0xe,0xc9,0x5b,0x7d,
  0x0,0x71,
  0x0,0x74,0x0,0x5f,0x0,0x7a,0x0,0x68,0x0,0x5f,0x0,0x43,0x0,0x4e,0x0,0x2e,0x0,0x71,0x0,0x6d,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/qm
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/qm/widgets.qm
  0x0,0x0,0x0,0xa,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x54,0x56,0x79,0xd,0xc8,
  // :/qm/qt_zh_CN.qm
  0x0,0x0,0x0,0x24,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x2,0x55,
0x0,0x0,0x1,0x50,0x5f,0x85,0x99,0x3d,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_qm)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_qm)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qm)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qm)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_qm)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qm)(); }
   } dummy;
}
