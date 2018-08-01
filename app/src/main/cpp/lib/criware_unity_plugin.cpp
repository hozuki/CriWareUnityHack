//
// Created by MIC on 2018-08-01.
//

#include "../include/criware.h"

uint32_t UnityPluginLoad(void *a0) {
    CR(UnityPluginLoad,
       a0);
    return 0;
}

uint32_t UnityPluginUnload() {
    CR(UnityPluginUnload);
    return 0;
}

void UnityRenderEvent(void *a0) {
    CR(UnityRenderEvent,
       a0);
}

uint32_t UnitySetGraphicsDevice(uint32_t a0, uint32_t a1, uint32_t a2) {
    CR(UnitySetGraphicsDevice,
       a0, a1, a2);
    return 0;
}
