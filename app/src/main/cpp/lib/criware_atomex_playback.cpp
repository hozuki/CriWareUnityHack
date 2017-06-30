//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criAtomExPlayback_Stop(uint32_t id) {
    CR(criAtomExPlayback_Stop,
       id);
}

void criAtomExPlayback_StopWithoutReleaseTime(uint32_t id) {
    CR(criAtomExPlayback_StopWithoutReleaseTime,
       id);
}

void criAtomExPlayback_Pause(uint32_t id, bool_t sw) {
    CR(criAtomExPlayback_Pause,
       id, sw);
}

void criAtomExPlayback_Resume(uint32_t id, uint32_t resumeMode) {
    CR(criAtomExPlayback_Resume,
       id, resumeMode);
}

bool_t criAtomExPlayback_IsPaused(uint32_t id) {
    CR(criAtomExPlayback_IsPaused,
       id);
    return false;
}

uint32_t criAtomExPlayback_GetStatus(uint32_t id) {
    CR(criAtomExPlayback_GetStatus,
       id);
    return 0;
}

bool_t criAtomExPlayback_GetFormatInfo(uint32_t id, CriWareAtomExPlaybackFormatInfo *formatInfo) {
    CR(criAtomExPlayback_GetFormatInfo,
       id, formatInfo);
    return false;
}

uint64_t criAtomExPlayback_GetTime(uint32_t id) {
    CR(criAtomExPlayback_GetTime,
       id);
    return 0;
}

bool_t criAtomExPlayback_GetNumPlayedSamples(uint32_t id, uint64_t *numSamples, uint32_t sampleRate) {
    CR(criAtomExPlayback_GetNumPlayedSamples,
       id, numSamples, sampleRate);
    return false;
}

void criAtomExPlayback_SetNextBlockIndex(uint32_t id, uint32_t index) {
    CR(criAtomExPlayback_SetNextBlockIndex,
       id, index);
}

uint32_t criAtomExPlayback_GetCurrentBlockIndex(uint32_t id) {
    CR(criAtomExPlayback_GetCurrentBlockIndex,
       id);
    return 0;
}
