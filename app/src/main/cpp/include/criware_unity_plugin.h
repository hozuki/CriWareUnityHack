//
// Created by MIC on 2018-08-01.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_UNITY_PLUGIN_H
#define CRIWAREUNITYHACK_CRIWARE_UNITY_PLUGIN_H

#include "criware_common.h"

CA(uint32_t) UnityPluginLoad(void *a0);
CA(uint32_t) UnityPluginUnload();
CA(void) UnityRenderEvent(void *a0);
CA(uint32_t) UnitySetGraphicsDevice(uint32_t a0, uint32_t a1, uint32_t a2);

#endif //CRIWAREUNITYHACK_CRIWARE_UNITY_PLUGIN_H
