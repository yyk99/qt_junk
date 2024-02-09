#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(EXTRADIALOGS_LIB)
#  define EXTRADIALOGS_EXPORT Q_DECL_EXPORT
# else
#  define EXTRADIALOGS_EXPORT Q_DECL_IMPORT
# endif
#else
# define EXTRADIALOGS_EXPORT
#endif
