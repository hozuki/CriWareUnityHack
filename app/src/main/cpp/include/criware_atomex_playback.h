//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYBACK_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYBACK_H

#include "criware_common.h"

struct CriWareAtomExPlaybackFormatInfo;

CA(void) criAtomExPlayback_Stop(uint32_t id);
CA(void) criAtomExPlayback_StopWithoutReleaseTime(uint32_t id);
CA(void) criAtomExPlayback_Pause(uint32_t id, bool_t sw);
CA(void) criAtomExPlayback_Resume(uint32_t id, uint32_t resumeMode);
CA(bool_t) criAtomExPlayback_IsPaused(uint32_t id);
CA(uint32_t) criAtomExPlayback_GetStatus(uint32_t id);
CA(bool_t) criAtomExPlayback_GetFormatInfo(uint32_t id, _OUT_ CriWareAtomExPlaybackFormatInfo *formatInfo);
CA(uint64_t) criAtomExPlayback_GetTime(uint32_t id);
CA(bool_t) criAtomExPlayback_GetNumPlayedSamples(uint32_t id, _OUT_ uint64_t *numSamples, _OUT_ uint32_t sampleRate);
CA(void) criAtomExPlayback_SetNextBlockIndex(uint32_t id, uint32_t index);
CA(uint32_t) criAtomExPlayback_GetCurrentBlockIndex(uint32_t id);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYBACK_H
