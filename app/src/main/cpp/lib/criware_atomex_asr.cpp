//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criAtomExAsr_AttachBusAnalyzer(uint32_t busNo, CriWareAtomExBusAnalyzerConfig *config) {
    CR(criAtomExAsr_AttachBusAnalyzer,
                 busNo, config);
}

void criAtomExAsr_DetachBusAnalyzer(uint32_t busNo) {
    CR(criAtomExAsr_DetachBusAnalyzer,
                 busNo);
}

void criAtomExAsr_GetBusAnalyzerInfo(uint32_t busNo, LPVOID info) {
    CR(criAtomExAsr_GetBusAnalyzerInfo,
                 busNo, info);
}

void criAtomExAsr_SetBusVolume(uint32_t busNo, float volume) {
    CR(criAtomExAsr_SetBusVolume,
                 busNo, volume);
}

void criAtomExAsr_SetBusSendLevel(uint32_t busNo, uint32_t sendToNo, float level) {
    CR(criAtomExAsr_SetBusSendLevel,
                 busNo, sendToNo, level);
}

void criAtomExAsr_SetBusMatrix(uint32_t busNo, uint32_t inputChannels, uint32_t outputChannels, float *matrix) {
    CR(criAtomExAsr_SetBusMatrix,
                 busNo, inputChannels, outputChannels, matrix);
}
