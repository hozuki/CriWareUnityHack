//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYER_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYER_H

#include "criware_common.h"

struct CriWareAtomExPlayer;
struct CriWareAtomExPlayerConfig;
struct CriWareAtomExAcb;
struct CriWareAtomEx3dSource;
struct CriWareAtomEx3dListener;

CA(CriWareAtomExPlayer *)criAtomExPlayer_Create(_REF_ CriWareAtomExPlayerConfig *config, LPVOID work, uint32_t workSize);
CA(void) criAtomExPlayer_Destroy(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_SetCueId(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, uint32_t id);
CA(void) criAtomExPlayer_SetCueName(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, LPCSTR cueName);
CA(void) criAtomExPlayer_SetCueIndex(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, uint32_t index);
CA(void) criAtomExPlayer_SetFile(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, LPCSTR path);
CA(void) criAtomExPlayer_SetContentId(CriWareAtomExPlayer *player, LPVOID binder, uint32_t id);
CA(void) criAtomExPlayer_Start(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_Prepare(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_Stop(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_StopWithoutReleaseTime(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_Pause(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_Resume(CriWareAtomExPlayer *player, uint32_t resumeMode);
CA(bool_t) criAtomExPlayer_IsPaused(CriWareAtomExPlayer *player);
CA(uint32_t) criAtomExPlayer_GetStatus(CriWareAtomExPlayer *player);
CA(uint64_t) criAtomExPlayer_GetTime(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_SetFormat(CriWareAtomExPlayer *player, uint32_t format);
CA(void) criAtomExPlayer_SetNumChannels(CriWareAtomExPlayer *player, uint32_t numChannels);
CA(void) criAtomExPlayer_SetSamplingRate(CriWareAtomExPlayer *player, uint32_t samplingRate);
CA(void) criAtomExPlayer_SetStartTime(CriWareAtomExPlayer *player, uint64_t startTimeMillis);
CA(void) criAtomExPlayer_SetSequencePrepareTime(CriWareAtomExPlayer *player, uint32_t prepareTimeMillis);
CA(void) criAtomExPlayer_LimitLoopCount(CriWareAtomExPlayer *player, uint32_t count);
CA(void) criAtomExPlayer_Update(CriWareAtomExPlayer *player, uint32_t id);
CA(void) criAtomExPlayer_UpdateAll(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_ResetParameters(CriWareAtomExPlayer *player);
CA(float) criAtomExPlayer_GetParameterFloat32(CriWareAtomExPlayer *player, uint32_t id);
CA(uint32_t) criAtomExPlayer_GetParameterUint32(CriWareAtomExPlayer *player, uint32_t id);
CA(int32_t) criAtomExPlayer_GetParameterSint32(CriWareAtomExPlayer *player, uint32_t id);
CA(void) criAtomExPlayer_SetVolume(CriWareAtomExPlayer *player, float volume);
CA(void) criAtomExPlayer_SetPitch(CriWareAtomExPlayer *player, float pitch);
CA(void) criAtomExPlayer_SetPan3dAngle(CriWareAtomExPlayer *player, float pan3dAngle);
CA(void) criAtomExPlayer_SetPan3dInteriorDistance(CriWareAtomExPlayer *player, float distance);
CA(void) criAtomExPlayer_SetPan3dVolume(CriWareAtomExPlayer *player, float pan3dVolume);
CA(void) criAtomExPlayer_SetPanType(CriWareAtomExPlayer *player, uint32_t panType);
CA(void) criAtomExPlayer_SetSendLevel(CriWareAtomExPlayer *player, uint32_t channel, uint32_t speakerId, float level);
CA(void) criAtomExPlayer_SetBusSendLevel(CriWareAtomExPlayer *player, uint32_t busId, float level);
CA(void) criAtomExPlayer_SetBusSendLevelOffset(CriWareAtomExPlayer *player, uint32_t busId, float levelOffset);
CA(void) criAtomExPlayer_SetDeviceSendLevel(CriWareAtomExPlayer *player, uint32_t deviceId, float level);
CA(void) criAtomExPlayer_SetBandpassFilterParameters(CriWareAtomExPlayer *player, float cofLow, float cofHigh);
CA(void) criAtomExPlayer_SetBiquadFilterParameters(CriWareAtomExPlayer *player, uint32_t biquadType, float frequency, float gain, float q);
CA(void) criAtomExPlayer_SetVoicePriority(CriWareAtomExPlayer *player, uint32_t priority);
CA(void) criAtomExPlayer_SetVoiceControlMethod(CriWareAtomExPlayer *player, int32_t method);
CA(void) criAtomExPlayer_SetAisacControlById(CriWareAtomExPlayer *player, uint16_t controlId, float controlValue);
CA(void) criAtomExPlayer_SetAisacControlByName(CriWareAtomExPlayer *player, LPCSTR controlName, float controlValue);
CA(void) criAtomExPlayer_Set3dSourceHn(CriWareAtomExPlayer *player, CriWareAtomEx3dSource *source);
CA(void) criAtomExPlayer_Set3dListenerHn(CriWareAtomExPlayer *player, CriWareAtomEx3dListener *listener);
CA(void) criAtomExPlayer_SetCategoryById(CriWareAtomExPlayer *player, uint32_t id);
CA(void) criAtomExPlayer_SetCategoryByName(CriWareAtomExPlayer *player, LPCSTR name);
CA(void) criAtomExPlayer_UnsetCategory(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_SetCuePriority(CriWareAtomExPlayer *player, uint32_t cuePriority);
CA(void) criAtomExPlayer_SetEnvelopAttackTime(CriWareAtomExPlayer *player, float attackTimeMillis);
CA(void) criAtomExPlayer_SetEnvelopHoldTime(CriWareAtomExPlayer *player, float holdTimeMillis);
CA(void) criAtomExPlayer_SetEnvelopDecayTime(CriWareAtomExPlayer *player, float decayTimeMillis);
CA(void) criAtomExPlayer_SetEnvelopReleaseTime(CriWareAtomExPlayer *player, float releaseTimeMillis);
CA(void) criAtomExPlayer_SetEnvelopSustainLevel(CriWareAtomExPlayer *player, float sustainLevel);
CA(void) criAtomExPlayer_AttachFader(CriWareAtomExPlayer *player, LPVOID config, LPVOID work, uint32_t workSize);
CA(void) criAtomExPlayer_DetachFader(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_SetFadeOutTime(CriWareAtomExPlayer *player, uint32_t millis);
CA(void) criAtomExPlayer_SetFadeInTime(CriWareAtomExPlayer *player, uint32_t millis);
CA(void) criAtomExPlayer_SetFadeInStartOffset(CriWareAtomExPlayer *player, uint32_t millis);
CA(void) criAtomExPlayer_SetFadeOutEndDelay(CriWareAtomExPlayer *player, uint32_t millis);
CA(bool_t) criAtomExPlayer_IsFading(CriWareAtomExPlayer *player);
CA(void) criAtomExPlayer_ResetFaderParameters(CriWareAtomExPlayer *player);
CA(bool_t) criAtomExPlayer_GetAttachedAisacInfo(CriWareAtomExPlayer *player, uint32_t attachedIndex, LPVOID info);
CA(void) criAtomExPlayer_SetFirstBlockIndex(CriWareAtomExPlayer *player, uint32_t index);
CA(void) criAtomExPlayer_SetSelectorLabel(CriWareAtomExPlayer *player, LPCSTR selector, LPCSTR label);
CA(void) criAtomExPlayer_SetRendererType(CriWareAtomExPlayer *player, uint32_t type);
CA(void) criAtomExPlayer_SetRandomSeed(CriWareAtomExPlayer *player, uint32_t seed);
CA(void) criAtomExPlayer_Loop(CriWareAtomExPlayer *player, bool_t sw);
CA(void) criAtomExPlayer_SetAsrRackId(CriWareAtomExPlayer *player, uint32_t rackId);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYER_H
