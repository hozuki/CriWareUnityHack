//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criAtomUnity_SetConfigParameters(uint32_t maxVirtualVoices, uint32_t numStandardMemoryVoices, uint32_t numStandardStreamingVoices,
                                      uint32_t numHcaMxMemoryVoices, uint32_t numHcaMxStreamingVoices, uint32_t outputSamplingRate,
                                      bool_t usesInGamePreview, float serverFrequency) {
    CR(criAtomUnity_SetConfigParameters,
       maxVirtualVoices, numStandardMemoryVoices, numStandardStreamingVoices,
       numHcaMxMemoryVoices, numHcaMxStreamingVoices, outputSamplingRate, usesInGamePreview,
       serverFrequency);
}

void criAtomUnity_SetConfigAdditionalParameters_IOS(uint32_t bufferTime, bool_t overrideIpodMusic) {
    CR(criAtomUnity_SetConfigAdditionalParameters_IOS,
       bufferTime, overrideIpodMusic);
}

void criAtomUnity_SetConfigAdditionalParameters_ANDROID(uint32_t numLowDelayMemoryVoices, uint32_t numLowDelayStreamingVoices,
                                                        uint32_t soundBufferingTime, uint32_t soundStartBufferingTime, uint32_t a0) {
    CR(criAtomUnity_SetConfigAdditionalParameters_ANDROID,
       numLowDelayMemoryVoices, numLowDelayStreamingVoices, soundBufferingTime, soundStartBufferingTime, a0);
}

uint32_t criAtomUnity_Initialize() {
    CR(criAtomUnity_Initialize);
    return 0;
}

void criAtomUnity_Finalize() {
    CR(criAtomUnity_Finalize);
}

void criAtomUnity_Pause(bool_t pause) {
    CR(criAtomUnity_Pause, pause);
}

void criAtomUnity_GetCpuUsage(float *last, float *average, float *peak) {
    CR(criAtomUnity_GetCpuUsage,
       last, average, peak);
}

uint32_t criAtomUnity_GetAllocatedHeapSize() {
    CR(criAtomUnity_GetAllocatedHeapSize);
    return 0;
}

void criAtomUnity_ControlDataCompatibility(int32_t code) {
    CR(criAtomUnity_ControlDataCompatibility,
       code);
}

void criAtomUnitySequencer_SetEventCallback(LPVOID cb, LPCSTR gameObjectName, LPCSTR funcName, LPCSTR separator) {
    CR(criAtomUnitySequencer_SetEventCallback,
       cb, gameObjectName, funcName, separator);
}

void criAtomUnity_SetMaxSamplingRateForStandardVoicePool(uint32_t samplingRateForMemory, uint32_t samplingRateForStreaming) {
    CR(criAtomUnity_SetMaxSamplingRateForStandardVoicePool,
       samplingRateForMemory, samplingRateForStreaming);
}
