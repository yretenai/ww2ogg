//
// Created by yretenai on 2020-08-16.
//

#ifndef WW2OGG_EXPORT_ROOT_H
#define WW2OGG_EXPORT_ROOT_H

#ifdef _WIN32
#include "ww2ogg_export_win32.h"
#else
#include "ww2ogg_export_cl.h"
#endif

#endif //WW2OGG_EXPORT_ROOT_H
