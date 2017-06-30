//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criAtomUnity_GetNumUsedVoices(uint32_t voicePoolId, uint32_t *numUsedVoices, uint32_t *numPoolVoices) {
    CR(criAtomUnity_GetNumUsedVoices,
       voicePoolId, numUsedVoices, numPoolVoices);
}
