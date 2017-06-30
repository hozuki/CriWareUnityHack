//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

CriWareAtomExPlayer *criAtomExPlayer_Create(CriWareAtomExPlayerConfig *config, LPVOID work, uint32_t workSize) {
    CR(criAtomExPlayer_Create,
       config, work, workSize);
    return nullptr;
}

void criAtomExPlayer_Destroy(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_Destroy,
       player);
}

void criAtomExPlayer_SetCueId(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, uint32_t id) {
    CR(criAtomExPlayer_SetCueId,
       player, acb, id);
}

void criAtomExPlayer_SetCueName(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, LPCSTR cueName) {
    CR(criAtomExPlayer_SetCueName,
       player, acb, cueName);
}

void criAtomExPlayer_SetCueIndex(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, uint32_t index) {
    CR(criAtomExPlayer_SetCueIndex,
       player, acb, index);
}

void criAtomExPlayer_SetFile(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, LPCSTR path) {
    CR(criAtomExPlayer_SetFile,
       player, acb, path);
}

void criAtomExPlayer_SetContentId(CriWareAtomExPlayer *player, LPVOID binder, uint32_t id) {
    CR(criAtomExPlayer_SetContentId,
       player, binder, id);
}

void criAtomExPlayer_Start(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_Start,
       player);
}

void criAtomExPlayer_Prepare(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_Prepare,
       player);
}

void criAtomExPlayer_Stop(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_Stop,
       player);
}

void criAtomExPlayer_StopWithoutReleaseTime(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_StopWithoutReleaseTime,
       player);
}

void criAtomExPlayer_Pause(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_Pause,
       player);
}

void criAtomExPlayer_Resume(CriWareAtomExPlayer *player, uint32_t resumeMode) {
    CR(criAtomExPlayer_Resume,
       player, resumeMode);
}

int criAtomExPlayer_IsPaused(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_IsPaused,
       player);
    return false;
}

uint32_t criAtomExPlayer_GetStatus(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_GetStatus,
       player);
    return 0;
}

uint64_t criAtomExPlayer_GetTime(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_GetTime,
       player);
    return 0;
}

void criAtomExPlayer_SetFormat(CriWareAtomExPlayer *player, uint32_t format) {
    CR(criAtomExPlayer_SetFormat,
       player, format);
}

void criAtomExPlayer_SetNumChannels(CriWareAtomExPlayer *player, uint32_t numChannels) {
    CR(criAtomExPlayer_SetNumChannels,
       player, numChannels);
}

void criAtomExPlayer_SetSamplingRate(CriWareAtomExPlayer *player, uint32_t samplingRate) {
    CR(criAtomExPlayer_SetSamplingRate,
       player, samplingRate);
}

void criAtomExPlayer_SetStartTime(CriWareAtomExPlayer *player, uint64_t startTimeMillis) {
    CR(criAtomExPlayer_SetStartTime,
       player, startTimeMillis);
}

void criAtomExPlayer_SetSequencePrepareTime(CriWareAtomExPlayer *player, uint32_t prepareTimeMillis) {
    CR(criAtomExPlayer_SetSequencePrepareTime,
       player, prepareTimeMillis);
}

void criAtomExPlayer_LimitLoopCount(CriWareAtomExPlayer *player, uint32_t count) {
    CR(criAtomExPlayer_LimitLoopCount,
       player, count);
}

void criAtomExPlayer_Update(CriWareAtomExPlayer *player, uint32_t id) {
    CR(criAtomExPlayer_Update,
       player, id);
}

void criAtomExPlayer_UpdateAll(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_UpdateAll,
       player);
}

void criAtomExPlayer_ResetParameters(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_ResetParameters,
       player);
}

float criAtomExPlayer_GetParameterFloat32(CriWareAtomExPlayer *player, uint32_t id) {
    CR(criAtomExPlayer_GetParameterFloat32,
       player, id);
    return 0;
}

unsigned int criAtomExPlayer_GetParameterUint32(CriWareAtomExPlayer *player, uint32_t id) {
    CR(criAtomExPlayer_GetParameterUint32,
       player, id);
    return 0;
}

int criAtomExPlayer_GetParameterSint32(CriWareAtomExPlayer *player, uint32_t id) {
    CR(criAtomExPlayer_GetParameterSint32,
       player, id);
    return 0;
}

void criAtomExPlayer_SetVolume(CriWareAtomExPlayer *player, float volume) {
    CR(criAtomExPlayer_SetVolume,
       player, volume);
}

void criAtomExPlayer_SetPitch(CriWareAtomExPlayer *player, float pitch) {
    CR(criAtomExPlayer_SetPitch,
       player, pitch);
}

void criAtomExPlayer_SetPan3dAngle(CriWareAtomExPlayer *player, float pan3dAngle) {
    CR(criAtomExPlayer_SetPan3dAngle,
       player, pan3dAngle);
}

void criAtomExPlayer_SetPan3dInteriorDistance(CriWareAtomExPlayer *player, float distance) {
    CR(criAtomExPlayer_SetPan3dInteriorDistance,
       player, distance);
}

void criAtomExPlayer_SetPan3dVolume(CriWareAtomExPlayer *player, float pan3dVolume) {
    CR(criAtomExPlayer_SetPan3dVolume,
       player, pan3dVolume);
}

void criAtomExPlayer_SetPanType(CriWareAtomExPlayer *player, uint32_t panType) {
    CR(criAtomExPlayer_SetPanType,
       player, panType);
}

void criAtomExPlayer_SetSendLevel(CriWareAtomExPlayer *player, uint32_t channel, uint32_t speakerId, float level) {
    CR(criAtomExPlayer_SetSendLevel,
       player, channel, speakerId, level);
}

void criAtomExPlayer_SetBusSendLevel(CriWareAtomExPlayer *player, uint32_t busId, float level) {
    CR(criAtomExPlayer_SetBusSendLevel,
       player, busId, level);
}

void criAtomExPlayer_SetBusSendLevelOffset(CriWareAtomExPlayer *player, uint32_t busId, float levelOffset) {
    CR(criAtomExPlayer_SetBusSendLevelOffset,
       player, busId, levelOffset);
}

void criAtomExPlayer_SetDeviceSendLevel(CriWareAtomExPlayer *player, uint32_t deviceId, float level) {
    CR(criAtomExPlayer_SetDeviceSendLevel,
       player, deviceId, level);
}

void criAtomExPlayer_SetBandpassFilterParameters(CriWareAtomExPlayer *player, float cofLow, float cofHigh) {
    CR(criAtomExPlayer_SetBandpassFilterParameters,
       player, cofLow, cofHigh);
}

void criAtomExPlayer_SetBiquadFilterParameters(CriWareAtomExPlayer *player, uint32_t biquadType, float frequency, float gain, float q) {
    CR(criAtomExPlayer_SetBiquadFilterParameters,
       player, biquadType, frequency, gain, q);
}

void criAtomExPlayer_SetVoicePriority(CriWareAtomExPlayer *player, uint32_t priority) {
    CR(criAtomExPlayer_SetVoicePriority,
       player, priority);
}

void criAtomExPlayer_SetVoiceControlMethod(CriWareAtomExPlayer *player, int32_t method) {
    CR(criAtomExPlayer_SetVoiceControlMethod,
       player, method);
}

void criAtomExPlayer_SetAisacControlById(CriWareAtomExPlayer *player, uint16_t controlId, float controlValue) {
    CR(criAtomExPlayer_SetAisacControlById,
       player, controlId, controlValue);
}

void criAtomExPlayer_SetAisacControlByName(CriWareAtomExPlayer *player, LPCSTR controlName, float controlValue) {
    CR(criAtomExPlayer_SetAisacControlByName,
       player, controlName, controlValue);
}

void criAtomExPlayer_Set3dSourceHn(CriWareAtomExPlayer *player, CriWareAtomEx3dSource *source) {
    CR(criAtomExPlayer_Set3dSourceHn,
       player, source);
}

void criAtomExPlayer_Set3dListenerHn(CriWareAtomExPlayer *player, CriWareAtomEx3dListener *listener) {
    CR(criAtomExPlayer_Set3dListenerHn,
       player, listener);
}

void criAtomExPlayer_SetCategoryById(CriWareAtomExPlayer *player, uint32_t id) {
    CR(criAtomExPlayer_SetCategoryById,
       player, id);
}

void criAtomExPlayer_SetCategoryByName(CriWareAtomExPlayer *player, LPCSTR name) {
    CR(criAtomExPlayer_SetCategoryByName,
       player, name);
}

void criAtomExPlayer_UnsetCategory(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_UnsetCategory,
       player);
}

void criAtomExPlayer_SetCuePriority(CriWareAtomExPlayer *player, uint32_t cuePriority) {
    CR(criAtomExPlayer_SetCuePriority,
       player, cuePriority);
}

void criAtomExPlayer_SetEnvelopAttackTime(CriWareAtomExPlayer *player, float attackTimeMillis) {
    CR(criAtomExPlayer_SetEnvelopAttackTime, player, attackTimeMillis);
}

void criAtomExPlayer_SetEnvelopHoldTime(CriWareAtomExPlayer *player, float holdTimeMillis) {
    CR(criAtomExPlayer_SetEnvelopHoldTime, player, holdTimeMillis);
}

void criAtomExPlayer_SetEnvelopDecayTime(CriWareAtomExPlayer *player, float decayTimeMillis) {
    CR(criAtomExPlayer_SetEnvelopDecayTime, player, decayTimeMillis);
}

void criAtomExPlayer_SetEnvelopReleaseTime(CriWareAtomExPlayer *player, float releaseTimeMillis) {
    CR(criAtomExPlayer_SetEnvelopReleaseTime, player, releaseTimeMillis);
}

void criAtomExPlayer_SetEnvelopSustainLevel(CriWareAtomExPlayer *player, float sustainLevel) {
    CR(criAtomExPlayer_SetEnvelopSustainLevel,
       player, sustainLevel);
}

void criAtomExPlayer_AttachFader(CriWareAtomExPlayer *player, LPVOID config, LPVOID work, uint32_t workSize) {
    CR(criAtomExPlayer_AttachFader,
       player, config, work, workSize);
}

void criAtomExPlayer_DetachFader(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_DetachFader,
       player);
}

void criAtomExPlayer_SetFadeOutTime(CriWareAtomExPlayer *player, uint32_t millis) {
    CR(criAtomExPlayer_SetFadeOutTime,
       player, millis);
}

void criAtomExPlayer_SetFadeInTime(CriWareAtomExPlayer *player, uint32_t millis) {
    CR(criAtomExPlayer_SetFadeInTime,
       player, millis);
}

void criAtomExPlayer_SetFadeInStartOffset(CriWareAtomExPlayer *player, uint32_t millis) {
    CR(criAtomExPlayer_SetFadeInStartOffset,
       player, millis);
}

void criAtomExPlayer_SetFadeOutEndDelay(CriWareAtomExPlayer *player, uint32_t millis) {
    CR(criAtomExPlayer_SetFadeOutEndDelay,
       player, millis);
}

bool_t criAtomExPlayer_IsFading(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_IsFading,
       player);
    return false;
}

void criAtomExPlayer_ResetFaderParameters(CriWareAtomExPlayer *player) {
    CR(criAtomExPlayer_ResetFaderParameters,
       player);
}

bool_t criAtomExPlayer_GetAttachedAisacInfo(CriWareAtomExPlayer *player, uint32_t attachedIndex, LPVOID info) {
    CR(criAtomExPlayer_GetAttachedAisacInfo,
       player, attachedIndex, info);
    return false;
}

void criAtomExPlayer_SetFirstBlockIndex(CriWareAtomExPlayer *player, uint32_t index) {
    CR(criAtomExPlayer_SetFirstBlockIndex,
       player, index);
}

void criAtomExPlayer_SetSelectorLabel(CriWareAtomExPlayer *player, LPCSTR selector, LPCSTR label) {
    CR(criAtomExPlayer_SetSelectorLabel,
       player, selector, label);
}

void criAtomExPlayer_SetRendererType(CriWareAtomExPlayer *player, uint32_t type) {
    CR(criAtomExPlayer_SetRendererType,
       player, type);
}

void criAtomExPlayer_SetRandomSeed(CriWareAtomExPlayer *player, uint32_t seed) {
    CR(criAtomExPlayer_SetRandomSeed,
       player, seed);
}

void criAtomExPlayer_Loop(CriWareAtomExPlayer *player, bool_t sw) {
    CR(criAtomExPlayer_Loop,
       player, sw);
}

void criAtomExPlayer_SetAsrRackId(CriWareAtomExPlayer *player, uint32_t rackId) {
    CR(criAtomExPlayer_SetAsrRackId,
       player, rackId);
}
