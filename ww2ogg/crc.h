#ifndef _CRC_H
#define _CRC_H

#include <stdint.h>
#include "ww2ogg_export.h"

#ifdef __cplusplus
extern "C" {
#endif

uint32_t WW2OGG_EXPORT checksum(unsigned char *data, int bytes);

#ifdef __cplusplus
}
#endif

#endif
