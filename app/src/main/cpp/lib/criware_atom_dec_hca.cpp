//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

bool_t criAtomDecHca_GetInfo(LPVOID data, uint32_t byte, uint32_t *samplingRate, uint32_t *numChannels, uint32_t *numSamples,
                             uint32_t *loopStart, uint32_t *loopLength) {
    CR(criAtomDecHca_GetInfo,
                 data, byte, samplingRate, numChannels, numSamples, loopStart, loopLength);
    return false;
}

uint32_t criAtomDecHca_DecodeShortInterleaved(LPVOID inData, uint32_t inByte, LPVOID outBuf, uint32_t outByte) {
    CR(criAtomDecHca_DecodeShortInterleaved,
                 inData, inByte, outBuf, outByte);
    return 0;
}

uint32_t criAtomDecHca_DecodeFloatInterleaved(LPVOID inData, uint32_t inByte, LPVOID outBuf, uint32_t outByte) {
    CR(criAtomDecHca_DecodeFloatInterleaved,
                 inData, inByte, outBuf, outByte);
    return 0;
}
