﻿#include <QtCore>
#include <QtGui>

#if (QT_VERSION >= QT_VERSION_CHECK(5,0,0))
#include <QtWidgets>
#endif

#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
#include <QtCore5Compat>
#endif

#pragma execution_character_set("utf-8")
#define AppPath qApp->applicationDirPath()
#define TIMEMS qPrintable(QTime::currentTime().toString("HH:mm:ss zzz"))
#define DATETIME qPrintable(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"))

#include "appdata.h"
#include "appfun.h"
#include "dbdelegate.h"
