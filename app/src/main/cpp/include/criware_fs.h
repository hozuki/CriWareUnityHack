//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_FS_H
#define CRIWAREUNITYHACK_CRIWARE_FS_H

#include "criware_common.h"

CA(void) criFsUnity_SetConfigParameters(uint32_t numLoaders, uint32_t numBinders, uint32_t numInstallers, uint32_t maxPath, bool_t minimizeUsage);
CA(void) criFsUnity_SetConfigAdditionalParameters_ANDROID(uint32_t deviceReadBps);
CA(uint32_t) criFsUnity_Initialize();
CA(void) criFsUnity_Finalize();
CA(uint32_t) criFsUnity_GetAllocatedHeapSize();
CA(uint32_t) criFsLoader_GetRetryCount();

#endif //CRIWAREUNITYHACK_CRIWARE_FS_H
