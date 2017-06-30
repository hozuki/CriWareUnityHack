//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criFsUnity_SetConfigParameters(uint32_t numLoaders, uint32_t numBinders, uint32_t numInstallers, uint32_t maxPath, bool_t minimizeUsage) {
    CR(criFsUnity_SetConfigParameters,
       numLoaders, numBinders, numInstallers, maxPath, minimizeUsage);
}

void criFsUnity_SetConfigAdditionalParameters_ANDROID(uint32_t deviceReadBps) {
    CR(criFsUnity_SetConfigAdditionalParameters_ANDROID,
       deviceReadBps);
}

uint32_t criFsUnity_Initialize() {
    CR(criFsUnity_Initialize);
    return 0;
}

void criFsUnity_Finalize() {
    CR(criFsUnity_Finalize);
}

uint32_t criFsUnity_GetAllocatedHeapSize() {
    CR(criFsUnity_GetAllocatedHeapSize);
    return 0;
}

uint32_t criFsLoader_GetRetryCount() {
    CR(criFsLoader_GetRetryCount);
    return 0;
}
