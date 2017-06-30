//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_ASR_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_ASR_H

#include "criware_common.h"

struct CriWareAtomExBusAnalyzerConfig;

CA(void) criAtomExAsr_AttachBusAnalyzer(uint32_t busNo, _REF_ CriWareAtomExBusAnalyzerConfig *config);
CA(void) criAtomExAsr_DetachBusAnalyzer(uint32_t busNo);
CA(void) criAtomExAsr_GetBusAnalyzerInfo(uint32_t busNo, LPVOID info);
CA(void) criAtomExAsr_SetBusVolume(uint32_t busNo, float volume);
CA(void) criAtomExAsr_SetBusSendLevel(uint32_t busNo, uint32_t sendToNo, float level);
CA(void) criAtomExAsr_SetBusMatrix(uint32_t busNo, uint32_t inputChannels, uint32_t outputChannels, float *matrix);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_ASR_H
