#ifndef CV_DLL_GLOBAL_H
#define CV_DLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CV_DLL_LIBRARY)
#  define CV_DLL_EXPORT Q_DECL_EXPORT
#else
#  define CV_DLL_EXPORT Q_DECL_IMPORT
#endif

#endif // CV_DLL_GLOBAL_H
