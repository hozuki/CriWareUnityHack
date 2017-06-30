//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOM_DEC_HCA_H
#define CRIWAREUNITYHACK_CRIWARE_ATOM_DEC_HCA_H

#include "criware_common.h"

CA(bool_t) criAtomDecHca_GetInfo(LPVOID data, uint32_t byte, _OUT_ uint32_t *samplingRate, _OUT_ uint32_t *numChannels, _OUT_ uint32_t *numSamples,
                                 _OUT_ uint32_t *loopStart, _OUT_ uint32_t *loopLength);
CA(uint32_t) criAtomDecHca_DecodeShortInterleaved(LPVOID inData, uint32_t inByte, LPVOID outBuf, uint32_t outByte);
CA(uint32_t) criAtomDecHca_DecodeFloatInterleaved(LPVOID inData, uint32_t inByte, LPVOID outBuf, uint32_t outByte);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOM_DEC_HCA_H
