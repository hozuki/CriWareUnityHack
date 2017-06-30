//
// Created by MIC on 2017-06-28.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOM_H
#define CRIWAREUNITYHACK_CRIWARE_ATOM_H

#include "criware_common.h"

CA(void) criAtomUnity_SetConfigParameters(uint32_t maxVirtualVoices, uint32_t numStandardMemoryVoices, uint32_t numStandardStreamingVoices,
                                          uint32_t numHcaMxMemoryVoices, uint32_t numHcaMxStreamingVoices, uint32_t outputSamplingRate,
                                          bool_t usesInGamePreview, float serverFrequency);
CA(void) criAtomUnity_SetConfigAdditionalParameters_IOS(uint32_t bufferTime, bool_t overrideIpodMusic);
CA(void) criAtomUnity_SetConfigAdditionalParameters_ANDROID(uint32_t numLowDelayMemoryVoices, uint32_t numLowDelayStreamingVoices,
                                                            uint32_t soundBufferingTime, uint32_t soundStartBufferingTime, uint32_t a0);
CA(uint32_t) criAtomUnity_Initialize();
CA(void) criAtomUnity_Finalize();
CA(void) criAtomUnity_Pause(bool_t pause);
CA(void) criAtomUnity_GetCpuUsage(_OUT_ float *last, _OUT_ float *average, _OUT_ float *peak);
CA(uint32_t) criAtomUnity_GetAllocatedHeapSize();
CA(void) criAtomUnity_ControlDataCompatibility(int32_t code);
CA(void) criAtomUnitySequencer_SetEventCallback(LPVOID cb, LPCSTR gameObjectName, LPCSTR funcName, LPCSTR separator);
CA(void) criAtomUnity_SetMaxSamplingRateForStandardVoicePool(uint32_t samplingRateForMemory, uint32_t samplingRateForStreaming);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOM_H
