//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_H
#define CRIWAREUNITYHACK_CRIWARE_H

#include <dlfcn.h>
#include "criware_common.h"

#include "criware_atom.h"
#include "criware_atom_dec_hca.h"
#include "criware_atomex.h"
#include "criware_atomex_3d_listener.h"
#include "criware_atomex_3d_source.h"
#include "criware_atomex_acb.h"
#include "criware_atomex_asr.h"
#include "criware_atomex_category.h"
#include "criware_atomex_latency_estimator.h"
#include "criware_atomex_playback.h"
#include "criware_atomex_player.h"
#include "criware_atomex_player_output_analyzer.h"
#include "criware_atomex_voice_pool.h"
#include "criware_error_handler.h"
#include "criware_fs.h"
#include "criware_fs_binder.h"
#include "criware_fs_installer.h"
#include "criware_fs_loader.h"
#include "criware_mana.h"
#include "criware_misc.h"
#include "criware_unknown.h"
#include "criware_unity_plugin.h"
#include "dbghelper.h"

typedef struct _CriWareUnityApi {

    jint JNICALL (*JNI_OnLoad)(JavaVM *vm, void *reserved);

    void JNICALL (*JNI_OnUnload)(JavaVM *vm, void *reserved);

    // criware_atom
    CAI(void) (*criAtomUnity_SetConfigParameters)(uint32_t maxVirtualVoices, uint32_t numStandardMemoryVoices, uint32_t numStandardStreamingVoices,
                                                  uint32_t numHcaMxMemoryVoices, uint32_t numHcaMxStreamingVoices, uint32_t outputSamplingRate,
                                                  bool_t usesInGamePreview, float serverFrequency);

    CAI(void) (*criAtomUnity_SetConfigAdditionalParameters_IOS)(uint32_t bufferTime, bool_t overrideIpodMusic);

    CAI(void) (*criAtomUnity_SetConfigAdditionalParameters_ANDROID)(uint32_t numLowDelayMemoryVoices, uint32_t numLowDelayStreamingVoices,
                                                                    uint32_t soundBufferingTime, uint32_t soundStartBufferingTime, uint32_t a0);

    CAI(uint32_t) (*criAtomUnity_Initialize)();

    CAI(void) (*criAtomUnity_Finalize)();

    CAI(void) (*criAtomUnity_Pause)(bool_t pause);

    CAI(void) (*criAtomUnity_GetCpuUsage)(_OUT_ float *last, _OUT_ float *average, _OUT_ float *peak);

    CAI(uint32_t) (*criAtomUnity_GetAllocatedHeapSize)();

    CAI(void) (*criAtomUnity_ControlDataCompatibility)(int32_t code);

    CAI(void) (*criAtomUnitySequencer_SetEventCallback)(LPVOID cb, LPCSTR gameObjectName, LPCSTR funcName, LPCSTR separator);

    CAI(void) (*criAtomUnity_SetMaxSamplingRateForStandardVoicePool)(uint32_t samplingRateForMemory, uint32_t samplingRateForStreaming);

    // criware_atom_dec_hca
    CAI(bool_t)
    (*criAtomDecHca_GetInfo)(LPVOID data, uint32_t byte, _OUT_ uint32_t *samplingRate, _OUT_ uint32_t *numChannels, _OUT_ uint32_t *numSamples,
                             _OUT_ uint32_t *loopStart, _OUT_ uint32_t *loopLength);

    CAI(uint32_t) (*criAtomDecHca_DecodeShortInterleaved)(LPVOID inData, uint32_t inByte, LPVOID outBuf, uint32_t outByte);

    CAI(uint32_t) (*criAtomDecHca_DecodeFloatInterleaved)(LPVOID inData, uint32_t inByte, LPVOID outBuf, uint32_t outByte);

    // criware_atomex
    CAI(bool_t) (*criAtomEx_RegisterAcfFile)(LPVOID binder, LPCSTR path, LPVOID work, uint32_t workSize);

    CAI(bool_t) (*criAtomEx_RegisterAcfData)(LPVOID binder, uint32_t acfDataSize, LPVOID work, uint32_t workSize);

    CAI(void) (*criAtomEx_UnregisterAcf)();

    CAI(void) (*criAtomEx_AttachDspBusSetting)(LPCSTR settingName, LPVOID work, uint32_t workSize);

    CAI(void) (*criAtomEx_DetachDspBusSetting)();

    CAI(void) (*criAtomEx_ApplyDspBusSnapshot)(LPCSTR snapshotName, int32_t timeMillis);

    CAI(uint32_t) (*criAtomEx_GetNumGameVariables)();

    CAI(bool_t) (*criAtomEx_GetGameVariableInfo)(uint16_t index, LPVOID gameVariableInfo);

    CAI(float) (*criAtomEx_GetGameVariableById)(uint32_t id);

    CAI(float) (*criAtomEx_GetGameVariableByName)(LPCSTR name);

    CAI(void) (*criAtomEx_SetGameVariableById)(uint32_t id, float value);

    CAI(void) (*criAtomEx_SetGameVariableByName)(LPCSTR name, float value);

    CAI(void) (*criAtomEx_SetRandomSeed)(uint32_t seed);

    CAI(void) (*criAtom_ResetPerformanceMonitor)();

    CAI(void) (*criAtom_GetPerformanceInfo)(LPVOID info);

    CAI(void) (*criAtom_EnableSlLatencyCheck_ANDROID)(bool_t sw);

    CAI(uint32_t) (*criAtom_GetSlBufferConsumptionLatency_ANDROID)();

    // criware_atomex_3d_listener
    CAI(CriWareAtomEx3dListener *)(*criAtomEx3dListener_Create)(_REF_ CriWareAtomEx3dListenerConfig *config, LPVOID work, uint32_t workSize);

    CAI(void) (*criAtomEx3dListener_Destroy)(CriWareAtomEx3dListener *listener);

    CAI(void) (*criAtomEx3dListener_Update)(CriWareAtomEx3dListener *listener);

    CAI(void) (*criAtomEx3dListener_ResetParameters)(CriWareAtomEx3dListener *listener);

    CAI(void) (*criAtomEx3dListener_SetPosition)(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *position);

    CAI(void) (*criAtomEx3dListener_SetVelocity)(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *velocity);

    CAI(void) (*criAtomEx3dListener_SetOrientation)(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *front,
                                                    _REF_ CriWareAtomExVector *top);

    CAI(void) (*criAtomEx3dListener_SetDistanceFactor)(CriWareAtomEx3dListener *listener, float distanceFactor);

    CAI(void) (*criAtomEx3dListener_SetFocusPoint)(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *focusPoint);

    CAI(void) (*criAtomEx3dListener_SetDistanceFactorLevel)(CriWareAtomEx3dListener *listener, float distanceFactorLevel);

    CAI(void) (*criAtomEx3dListener_SetDirectionFactorLevel)(CriWareAtomEx3dListener *listener, float directionFactorLevel);

    // criware_atomex_3d_source
    CAI(CriWareAtomEx3dSource *)(*criAtomEx3dSource_Create)(_REF_ CriWareAtomEx3dSourceConfig *config, LPVOID work, uint32_t workSize);

    CAI(void) (*criAtomEx3dSource_Destroy)(CriWareAtomEx3dSource *source);

    CAI(void) (*criAtomEx3dSource_Update)(CriWareAtomEx3dSource *source);

    CAI(void) (*criAtomEx3dSource_ResetParameters)(CriWareAtomEx3dSource *source);

    CAI(void) (*criAtomEx3dSource_SetPosition)(CriWareAtomEx3dSource *source, _REF_ CriWareAtomExVector *position);

    CAI(void) (*criAtomEx3dSource_SetVelocity)(CriWareAtomEx3dSource *source, _REF_ CriWareAtomExVector *velocity);

    CAI(void) (*criAtomEx3dSource_SetOrientation)(CriWareAtomEx3dSource *source, _REF_ CriWareAtomExVector *front, _REF_ CriWareAtomExVector *top);

    CAI(void) (*criAtomEx3dSource_SetConeParameter)(CriWareAtomEx3dSource *source, float insideAngle, float outsideAngle, float outsideVolume);

    CAI(void) (*criAtomEx3dSource_SetMinMaxDistance)(CriWareAtomEx3dSource *source, float minDistance, float maxDistance);

    CAI(void) (*criAtomEx3dSource_SetDopplerFactor)(CriWareAtomEx3dSource *source, float dopplerFactor);

    CAI(void) (*criAtomEx3dSource_SetVolume)(CriWareAtomEx3dSource *source, float volume);

    CAI(void) (*criAtomEx3dSource_SetMaxAngleAisacDelta)(CriWareAtomEx3dSource *source, float maxDelta);

    // criware_atomex_acb
    CAI(CriWareAtomExAcb *)(*criAtomExAcb_LoadAcbFile)(LPVOID acbBinder, LPCSTR acbPath, LPVOID awbBinder, LPCSTR awbPath, LPVOID work,
                                                       uint32_t workSize);

    CAI(void) (*criAtomExAcb_Release)(CriWareAtomExAcb *acb);

    CAI(uint32_t) (*criAtomExAcb_GetNumCues)(CriWareAtomExAcb *acb);

    CAI(bool_t) (*criAtomExAcb_ExistsId)(CriWareAtomExAcb *acb, uint32_t id);

    CAI(bool_t) (*criAtomExAcb_ExistsName)(CriWareAtomExAcb *acb, LPCSTR name);

    CAI(uint32_t) (*criAtomExAcb_GetNumUsableAisacControlsById)(CriWareAtomExAcb *acb, uint32_t id);

    CAI(uint32_t) (*criAtomExAcb_GetNumUsableAisacControlsByName)(CriWareAtomExAcb *acb, LPCSTR name);

    CAI(bool_t) (*criAtomExAcb_GetUsableAisacControlById)(CriWareAtomExAcb *acb, uint32_t id, uint16_t index, LPVOID info);

    CAI(bool_t) (*criAtomExAcb_GetUsableAisacControlByName)(CriWareAtomExAcb *acb, LPCSTR name, uint16_t index, LPVOID info);

    CAI(bool_t) (*criAtomExAcb_GetWaveformInfoById)(CriWareAtomExAcb *acb, uint32_t id, LPVOID waveformInfo);

    CAI(bool_t) (*criAtomExAcb_GetWaveformInfoByName)(CriWareAtomExAcb *acb, LPCSTR name, LPVOID waveformInfo);

    CAI(bool_t) (*criAtomExAcb_GetCueInfoById)(CriWareAtomExAcb *acb, uint32_t id, LPVOID cueInfo);

    CAI(bool_t) (*criAtomExAcb_GetCueInfoByName)(CriWareAtomExAcb *acb, LPCSTR name, LPVOID cueInfo);

    CAI(bool_t) (*criAtomExAcb_GetCueInfoByIndex)(CriWareAtomExAcb *acb, uint32_t index, LPVOID waveformInfo);

    CAI(uint32_t) (*criAtomExAcb_GetNumCuePlayingCountById)(CriWareAtomExAcb *acb, uint32_t id);

    CAI(uint32_t) (*criAtomExAcb_GetNumCuePlayingCountByName)(CriWareAtomExAcb *acb, LPCSTR name);

    CAI(uint32_t) (*criAtomExAcb_GetBlockIndexById)(CriWareAtomExAcb *acb, uint32_t id, LPCSTR blockName);

    CAI(uint32_t) (*criAtomExAcb_GetBlockIndexByName)(CriWareAtomExAcb *acb, LPCSTR name, LPCSTR blockName);

    CAI(void) (*criAtomExAcb_ResetCueTypeStateById)(CriWareAtomExAcb *acb, uint32_t id);

    CAI(void) (*criAtomExAcb_ResetCueTypeStateByName)(CriWareAtomExAcb *acb, LPCSTR name);

    CAI(void) (*criAtomExAcb_AttachAwbFile)(CriWareAtomExAcb *acb, LPVOID awbBinder, LPCSTR awbPath, LPCSTR awbName, LPVOID work, uint32_t workSize);

    CAI(void) (*criAtomExAcb_DetachAwbFile)(CriWareAtomExAcb *acb, LPCSTR awbName);

    // criware_atomex_asr
    CAI(void) (*criAtomExAsr_AttachBusAnalyzer)(uint32_t busNo, _REF_ CriWareAtomExBusAnalyzerConfig *config);

    CAI(void) (*criAtomExAsr_DetachBusAnalyzer)(uint32_t busNo);

    CAI(void) (*criAtomExAsr_GetBusAnalyzerInfo)(uint32_t busNo, LPVOID info);

    CAI(void) (*criAtomExAsr_SetBusVolume)(uint32_t busNo, float volume);

    CAI(void) (*criAtomExAsr_SetBusSendLevel)(uint32_t busNo, uint32_t sendToNo, float level);

    CAI(void) (*criAtomExAsr_SetBusMatrix)(uint32_t busNo, uint32_t inputChannels, uint32_t outputChannels, float *matrix);

    // criware_atomex_category
    CAI(void) (*criAtomExCategory_SetVolumeByName)(LPCSTR name, float volume);

    CAI(float) (*criAtomExCategory_GetVolumeByName)(LPCSTR name);

    CAI(void) (*criAtomExCategory_SetVolumeById)(uint32_t id, float volume);

    CAI(float) (*criAtomExCategory_GetVolumeById)(uint32_t id);

    CAI(void) (*criAtomExCategory_MuteByName)(LPCSTR name, bool_t mute);

    CAI(bool_t) (*criAtomExCategory_IsMutedByName)(LPCSTR name);

    CAI(void) (*criAtomExCategory_MuteById)(uint32_t id, bool_t mute);

    CAI(bool_t) (*criAtomExCategory_IsMutedById)(uint32_t id);

    CAI(void) (*criAtomExCategory_SoloByName)(LPCSTR name, bool_t solo, float volume);

    CAI(bool_t) (*criAtomExCategory_IsSoloedByName)(LPCSTR name);

    CAI(void) (*criAtomExCategory_SoloById)(uint32_t id, bool_t solo, float volume);

    CAI(bool_t) (*criAtomExCategory_IsSoloedById)(uint32_t id);

    CAI(void) (*criAtomExCategory_PauseByName)(LPCSTR name, bool_t pause);

    CAI(bool_t) (*criAtomExCategory_IsPausedByName)(LPCSTR name);

    CAI(void) (*criAtomExCategory_PauseById)(uint32_t id, bool_t pause);

    CAI(bool_t) (*criAtomExCategory_IsPausedById)(uint32_t id);

    CAI(void) (*criAtomExCategory_SetAisacControlByName)(LPCSTR name, uint16_t controlId, float value);

    CAI(void) (*criAtomExCategory_SetAisacControlById)(uint32_t id, uint16_t controlId, float value);

    // criware_atomex_latency_estimator
    CAI(void) (*criAtomLatencyEstimator_Initialize_ANDROID)();

    CAI(void) (*criAtomLatencyEstimator_Finalize_ANDROID)();

    CAI(CriWareAtomExEstimatorInfo *)(*criAtomLatencyEstimator_GetCurrentInfo_ANDROID)();

    CAI(void) (*criAtomExPlayback_Stop)(uint32_t id);

    CAI(void) (*criAtomExPlayback_StopWithoutReleaseTime)(uint32_t id);

    CAI(void) (*criAtomExPlayback_Pause)(uint32_t id, bool_t sw);

    CAI(void) (*criAtomExPlayback_Resume)(uint32_t id, uint32_t resumeMode);

    CAI(bool_t) (*criAtomExPlayback_IsPaused)(uint32_t id);

    CAI(uint32_t) (*criAtomExPlayback_GetStatus)(uint32_t id);

    CAI(bool_t) (*criAtomExPlayback_GetFormatInfo)(uint32_t id, _OUT_ CriWareAtomExPlaybackFormatInfo *formatInfo);

    CAI(uint64_t) (*criAtomExPlayback_GetTime)(uint32_t id);

    CAI(bool_t) (*criAtomExPlayback_GetNumPlayedSamples)(uint32_t id, _OUT_ uint64_t *numSamples, _OUT_ uint32_t sampleRate);

    CAI(void) (*criAtomExPlayback_SetNextBlockIndex)(uint32_t id, uint32_t index);

    CAI(uint32_t) (*criAtomExPlayback_GetCurrentBlockIndex)(uint32_t id);

    // criware_atomex_player
    CAI(CriWareAtomExPlayer *)(*criAtomExPlayer_Create)(_REF_ CriWareAtomExPlayerConfig *config, LPVOID work, uint32_t workSize);

    CAI(void) (*criAtomExPlayer_Destroy)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_SetCueId)(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, uint32_t id);

    CAI(void) (*criAtomExPlayer_SetCueName)(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, LPCSTR cueName);

    CAI(void) (*criAtomExPlayer_SetCueIndex)(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, uint32_t index);

    CAI(void) (*criAtomExPlayer_SetFile)(CriWareAtomExPlayer *player, CriWareAtomExAcb *acb, LPCSTR path);

    CAI(void) (*criAtomExPlayer_SetContentId)(CriWareAtomExPlayer *player, LPVOID binder, uint32_t id);

    CAI(void) (*criAtomExPlayer_Start)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_Prepare)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_Stop)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_StopWithoutReleaseTime)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_Pause)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_Resume)(CriWareAtomExPlayer *player, uint32_t resumeMode);

    CAI(bool_t) (*criAtomExPlayer_IsPaused)(CriWareAtomExPlayer *player);

    CAI(uint32_t) (*criAtomExPlayer_GetStatus)(CriWareAtomExPlayer *player);

    CAI(uint64_t) (*criAtomExPlayer_GetTime)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_SetFormat)(CriWareAtomExPlayer *player, uint32_t format);

    CAI(void) (*criAtomExPlayer_SetNumChannels)(CriWareAtomExPlayer *player, uint32_t numChannels);

    CAI(void) (*criAtomExPlayer_SetSamplingRate)(CriWareAtomExPlayer *player, uint32_t samplingRate);

    CAI(void) (*criAtomExPlayer_SetStartTime)(CriWareAtomExPlayer *player, uint64_t startTimeMillis);

    CAI(void) (*criAtomExPlayer_SetSequencePrepareTime)(CriWareAtomExPlayer *player, uint32_t prepareTimeMillis);

    CAI(void) (*criAtomExPlayer_LimitLoopCount)(CriWareAtomExPlayer *player, uint32_t count);

    CAI(void) (*criAtomExPlayer_Update)(CriWareAtomExPlayer *player, uint32_t id);

    CAI(void) (*criAtomExPlayer_UpdateAll)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_ResetParameters)(CriWareAtomExPlayer *player);

    CAI(float) (*criAtomExPlayer_GetParameterFloat32)(CriWareAtomExPlayer *player, uint32_t id);

    CAI(uint32_t) (*criAtomExPlayer_GetParameterUint32)(CriWareAtomExPlayer *player, uint32_t id);

    CAI(int32_t) (*criAtomExPlayer_GetParameterSint32)(CriWareAtomExPlayer *player, uint32_t id);

    CAI(void) (*criAtomExPlayer_SetVolume)(CriWareAtomExPlayer *player, float volume);

    CAI(void) (*criAtomExPlayer_SetPitch)(CriWareAtomExPlayer *player, float pitch);

    CAI(void) (*criAtomExPlayer_SetPan3dAngle)(CriWareAtomExPlayer *player, float pan3dAngle);

    CAI(void) (*criAtomExPlayer_SetPan3dInteriorDistance)(CriWareAtomExPlayer *player, float distance);

    CAI(void) (*criAtomExPlayer_SetPan3dVolume)(CriWareAtomExPlayer *player, float pan3dVolume);

    CAI(void) (*criAtomExPlayer_SetPanType)(CriWareAtomExPlayer *player, uint32_t panType);

    CAI(void) (*criAtomExPlayer_SetSendLevel)(CriWareAtomExPlayer *player, uint32_t channel, uint32_t speakerId, float level);

    CAI(void) (*criAtomExPlayer_SetBusSendLevel)(CriWareAtomExPlayer *player, uint32_t busId, float level);

    CAI(void) (*criAtomExPlayer_SetBusSendLevelOffset)(CriWareAtomExPlayer *player, uint32_t busId, float levelOffset);

    CAI(void) (*criAtomExPlayer_SetDeviceSendLevel)(CriWareAtomExPlayer *player, uint32_t deviceId, float level);

    CAI(void) (*criAtomExPlayer_SetBandpassFilterParameters)(CriWareAtomExPlayer *player, float cofLow, float cofHigh);

    CAI(void)
    (*criAtomExPlayer_SetBiquadFilterParameters)(CriWareAtomExPlayer *player, uint32_t biquadType, float frequency, float gain, float q);

    CAI(void) (*criAtomExPlayer_SetVoicePriority)(CriWareAtomExPlayer *player, uint32_t priority);

    CAI(void) (*criAtomExPlayer_SetVoiceControlMethod)(CriWareAtomExPlayer *player, int32_t method);

    CAI(void) (*criAtomExPlayer_SetAisacControlById)(CriWareAtomExPlayer *player, uint16_t controlId, float controlValue);

    CAI(void) (*criAtomExPlayer_SetAisacControlByName)(CriWareAtomExPlayer *player, LPCSTR controlName, float controlValue);

    CAI(void) (*criAtomExPlayer_Set3dSourceHn)(CriWareAtomExPlayer *player, CriWareAtomEx3dSource *source);

    CAI(void) (*criAtomExPlayer_Set3dListenerHn)(CriWareAtomExPlayer *player, CriWareAtomEx3dListener *listener);

    CAI(void) (*criAtomExPlayer_SetCategoryById)(CriWareAtomExPlayer *player, uint32_t id);

    CAI(void) (*criAtomExPlayer_SetCategoryByName)(CriWareAtomExPlayer *player, LPCSTR name);

    CAI(void) (*criAtomExPlayer_UnsetCategory)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_SetCuePriority)(CriWareAtomExPlayer *player, uint32_t cuePriority);

    CAI(void) (*criAtomExPlayer_SetEnvelopAttackTime)(CriWareAtomExPlayer *player, float attackTimeMillis);

    CAI(void) (*criAtomExPlayer_SetEnvelopHoldTime)(CriWareAtomExPlayer *player, float holdTimeMillis);

    CAI(void) (*criAtomExPlayer_SetEnvelopDecayTime)(CriWareAtomExPlayer *player, float decayTimeMillis);

    CAI(void) (*criAtomExPlayer_SetEnvelopReleaseTime)(CriWareAtomExPlayer *player, float releaseTimeMillis);

    CAI(void) (*criAtomExPlayer_SetEnvelopSustainLevel)(CriWareAtomExPlayer *player, float sustainLevel);

    CAI(void) (*criAtomExPlayer_AttachFader)(CriWareAtomExPlayer *player, LPVOID config, LPVOID work, uint32_t workSize);

    CAI(void) (*criAtomExPlayer_DetachFader)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_SetFadeOutTime)(CriWareAtomExPlayer *player, uint32_t millis);

    CAI(void) (*criAtomExPlayer_SetFadeInTime)(CriWareAtomExPlayer *player, uint32_t millis);

    CAI(void) (*criAtomExPlayer_SetFadeInStartOffset)(CriWareAtomExPlayer *player, uint32_t millis);

    CAI(void) (*criAtomExPlayer_SetFadeOutEndDelay)(CriWareAtomExPlayer *player, uint32_t millis);

    CAI(bool_t) (*criAtomExPlayer_IsFading)(CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayer_ResetFaderParameters)(CriWareAtomExPlayer *player);

    CAI(bool_t) (*criAtomExPlayer_GetAttachedAisacInfo)(CriWareAtomExPlayer *player, uint32_t attachedIndex, LPVOID info);

    CAI(void) (*criAtomExPlayer_SetFirstBlockIndex)(CriWareAtomExPlayer *player, uint32_t index);

    CAI(void) (*criAtomExPlayer_SetSelectorLabel)(CriWareAtomExPlayer *player, LPCSTR selector, LPCSTR label);

    CAI(void) (*criAtomExPlayer_SetRendererType)(CriWareAtomExPlayer *player, uint32_t type);

    CAI(void) (*criAtomExPlayer_SetRandomSeed)(CriWareAtomExPlayer *player, uint32_t seed);

    CAI(void) (*criAtomExPlayer_Loop)(CriWareAtomExPlayer *player, bool_t sw);

    CAI(void) (*criAtomExPlayer_SetAsrRackId)(CriWareAtomExPlayer *player, uint32_t rackId);

    // criware_atomex_player_output_analyzer
    CAI(CriWareAtomExPlayerOutputAnalyzer *)(*criAtomExPlayerOutputAnalyzer_Create)(uint32_t numTypes, uint32_t *types);

    CAI(LPVOID) (*criAtomExPlayerOutputAnalyzer_Destroy)(CriWareAtomExPlayerOutputAnalyzer *analyzer);

    CAI(void) (*criAtomExPlayerOutputAnalyzer_AttachExPlayer)(CriWareAtomExPlayerOutputAnalyzer *analyzer, CriWareAtomExPlayer *player);

    CAI(void) (*criAtomExPlayerOutputAnalyzer_DetachExPlayer)(CriWareAtomExPlayerOutputAnalyzer *analyzer, CriWareAtomExPlayer *player);

    CAI(float) (*criAtomExPlayerOutputAnalyzer_GetRms)(CriWareAtomExPlayerOutputAnalyzer *analyzer, uint32_t channel);

    // criware_atomex_voice_pool
    CAI(void) (*criAtomUnity_GetNumUsedVoices)(uint32_t voicePoolId, _OUT_ uint32_t *numUsedVoices, _OUT_ uint32_t *numPoolVoices);

    // criware_error_handler
    CAI(uint32_t) (*criWareUnity_Initialize)();

    CAI(void) (*criWareUnity_Finalize)();

    CAI(LPVOID) (*criWareUnity_GetFirstError)();

    CAI(void) (*criWareUnity_ResetError)();

    CAI(void) (*criWareUnity_ControlLogOutput)(bool_t sw);

    // criware_fs
    CAI(void)
    (*criFsUnity_SetConfigParameters)(uint32_t numLoaders, uint32_t numBinders, uint32_t numInstallers, uint32_t maxPath, bool_t minimizeUsage);

    CAI(void) (*criFsUnity_SetConfigAdditionalParameters_ANDROID)(uint32_t deviceReadBps);

    CAI(uint32_t) (*criFsUnity_Initialize)();

    CAI(void) (*criFsUnity_Finalize)();

    CAI(uint32_t) (*criFsUnity_GetAllocatedHeapSize)();

    CAI(uint32_t) (*criFsLoader_GetRetryCount)();

    // criware_fs_binder
    CAI(uint32_t) (*criFsBinder_Create)(_OUT_ CriWareFsBinder **binder);

    CAI(uint32_t) (*criFsBinder_Destroy)(CriWareFsBinder *binder);

    CAI(uint32_t) (*criFsBinder_BindCpk)(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize,
                                         _OUT_ uint32_t *bindId);

    CAI(uint32_t) (*criFsBinder_BindDirectory)(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize,
                                               _OUT_ uint32_t *bindId);

    CAI(uint32_t) (*criFsBinder_BindFile)(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize,
                                          _OUT_ uint32_t *bindId);

    CAI(uint32_t) (*criFsBinder_Unbind)(uint32_t bindId);

    CAI(uint32_t) (*criFsBinder_GetStatus)(uint32_t bindId, _OUT_ uint32_t *status);

    CAI(uint32_t) (*criFsBinder_GetFileSize)(CriWareFsBinder *binder, LPCSTR path, _OUT_ uint64_t *size);

    CAI(uint32_t) (*criFsBinder_GetFileSizeById)(CriWareFsBinder *binder, uint32_t id, _OUT_ uint64_t *size);

    CAI(uint32_t) (*criFsBinder_SetPriority)(CriWareFsBinder *binder, uint32_t priority);

    // criware_fs_installer
    CAI(void) (*criFsInstaller_ExecuteMain)();

    CAI(uint32_t) (*criFsInstaller_Create)(_OUT_ CriWareFsInstaller **installer, uint32_t option);

    CAI(uint32_t) (*criFsInstaller_Destroy)(CriWareFsInstaller *installer);

    CAI(uint32_t) (*criFsInstaller_Copy)(CriWareFsInstaller *installer, CriWareFsBinder *binder, LPCSTR srcPath, LPCSTR dstPath,
                                         LPVOID buffer, uint64_t bufferSize);

    CAI(uint32_t) (*criFsInstaller_Stop)(CriWareFsInstaller *installer);

    CAI(uint32_t) (*criFsInstaller_GetStatus)(CriWareFsInstaller *installer, _OUT_ uint32_t *status);

    CAI(uint32_t) (*criFsInstaller_GetProgress)(CriWareFsInstaller *installer, _OUT_ float *progress);

    // criware_fs_loader
    CAI(uint32_t) (*criFsLoader_Create)(_OUT_ CriWareFsLoader **loader);

    CAI(uint32_t) (*criFsLoader_Destroy)(CriWareFsLoader *loader);

    CAI(uint32_t) (*criFsLoader_Load)(CriWareFsLoader *loader, CriWareFsBinder *binder, LPCSTR path, uint64_t offset, uint64_t loadSize,
                                      LPVOID buffer, uint64_t bufferSize);

    CAI(uint32_t) (*criFsLoader_LoadById)(CriWareFsLoader *loader, CriWareFsBinder *binder, uint32_t id, uint64_t offset, uint64_t loadSize,
                                          LPVOID buffer, uint64_t bufferSize);

    CAI(uint32_t) (*criFsLoader_Stop)(CriWareFsLoader *loader);

    CAI(uint32_t) (*criFsLoader_GetStatus)(CriWareFsLoader *loader, _OUT_ uint32_t *status);

    CAI(uint32_t) (*criFsLoader_SetReadUnitSize)(CriWareFsLoader *loader, uint64_t unitSize);

    // criware_mana
    CAI(uint32_t) (*criManaUnity_SetConfigParameters)(uint32_t graphicsApi, uint32_t numDecoders, uint32_t numMaxEntries, bool_t enableCuePoint);

    CAI(void) (*criManaUnity_Initialize)();

    CAI(void) (*criManaUnity_Finalize)();

    CAI(void) (*criManaUnity_ExecuteMain)();

    CAI(uint32_t) (*criManaUnity_GetAllocatedHeapSize)();

    CAI(void) (*criManaUnity_SetCuePointFormatDelimiter)(LPCSTR delimiter);

    CAI(uint32_t) (*criManaUnityPlayer_Create)();

    CAI(void) (*criManaUnityPlayer_Destroy)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_SetFile)(int32_t playerId, CriWareFsBinder *binder, LPCSTR path);

    CAI(void) (*criManaUnityPlayer_SetContentId)(uint32_t playerId, CriWareFsBinder *binder, uint32_t contentId);

    CAI(void) (*criManaUnityPlayer_SetFileRange)(uint32_t playerId, LPCSTR path, uint64_t offset, uint64_t range);

    CAI(bool_t) (*criManaUnityPlayer_EntryFile)(uint32_t playerId, CriWareFsBinder *binder, LPCSTR path, bool_t repeat);

    CAI(bool_t) (*criManaUnityPlayer_EntryContentId)(uint32_t playerId, CriWareFsBinder *binder, int contentId, bool_t repeat);

    CAI(bool_t) (*criManaUnityPlayer_EntryFileRange)(uint32_t playerId, LPCSTR path, uint64_t offset, uint64_t range, bool_t repeat);

    CAI(void) (*criManaUnityPlayer_ClearEntry)(uint32_t playerId);

    CAI(uint32_t) (*criManaUnityPlayer_GetNumberOfEntry)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_SetCuePointCallback)(uint32_t playerId, LPVOID cbFunc, LPCSTR gameObjectName, LPCSTR funcName);

    CAI(void) (*criManaUnityPlayer_GetMovieInfo)(uint32_t playerId, _OUT_ CriWareManaMovieInfo *movieInfo);

    CAI(void) (*criManaUnityPlayer_Update)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_Prepare)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_Start)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_Stop)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_SetSeekPosition)(uint32_t playerId, uint32_t seekFrameIndex);

    CAI(bool_t) (*criManaUnityPlayer_UpdateTexture)(uint32_t playerId, LPVOID texBuffer, _OUT_ CriWareManaFrameInfo *frameInfo);

    CAI(bool_t) (*criManaUnityPlayer_UpdateTextureYuvByPtr)(uint32_t playerId, LPVOID texIdY, LPVOID texIdU, LPVOID texIdV,
                                                            _OUT_ CriWareManaFrameInfo *frameInfo);

    CAI(bool_t) (*criManaUnityPlayer_UpdateTextureYuvaByPtr)(uint32_t playerId, LPVOID texIdY, LPVOID texIdU, LPVOID texIdV, LPVOID texIdA,
                                                             _OUT_ CriWareManaFrameInfo *frameInfo);

    CAI(void) (*criManaUnityPlayer_Pause)(uint32_t playerId, bool_t sw);

    CAI(bool_t) (*criManaUnityPlayer_IsPaused)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_Loop)(uint32_t playerId, bool_t sw);

    CAI(uint64_t) (*criManaUnityPlayer_GetTime)(uint32_t playerId);

    CAI(uint32_t) (*criManaUnityPlayer_GetStatus)(uint32_t playerId);

    CAI(void) (*criManaUnityPlayer_SetAudioTrack)(uint32_t playerId, uint32_t track);

    CAI(void) (*criManaUnityPlayer_SetVolume)(uint32_t playerId, float volume);

    CAI(void) (*criManaUnityPlayer_SetSubAudioTrack)(uint32_t playerId, uint32_t track);

    CAI(void) (*criManaUnityPlayer_SetSubAudioVolume)(uint32_t playerId, float volume);

    CAI(void) (*criManaUnityPlayer_SetSpeed)(uint32_t playerId, float speed);

    CAI(void) (*criManaUnityPlayer_SetDeviceSendLevel)(uint32_t playerId, uint32_t deviceId, float level);

    CAI(bool_t) (*criManaUnityPlayer_HasAlpha)(uint32_t playerId);

    // criware_misc
    CAI(uint32_t) (*criWareUnity_SetDecryptionKey)(uint64_t key, LPCSTR authenticationFile, bool_t enableAtomDecryption, bool_t enableManaDecryption);

    CAI(uint32_t) (*criWareUnity_GetVersionNumber)();

    // criware_unknown
    CAI(uint32_t) (*criWareUnity_SetForceCrashFlagOnError)(uint32_t a0);

    CAI(uint32_t) (*criWareUnity_SetRenderingEventOffsetForMana)(uint32_t a0);

    CAI(uint32_t) (*criAtomUnity_SetConfigAdditionalParameters_PC)(uint64_t a0);

    CAI(uint32_t) (*criManaUnity_SetConfigAdditionalParameters_ANDROID)(uint32_t a0);

    CAI(uint32_t) (*criAtomUnitySequencer_ExecuteQueuedEventCallbacks)();

    // criware_unity_plugin
    CAI(uint32_t) (*UnityPluginLoad)(void *a0);

    CAI(uint32_t) (*UnityPluginUnload)();

    CAI(void) (*UnityRenderEvent)(void *a0);

    CAI(uint32_t) (*UnitySetGraphicsDevice)(uint32_t a0, uint32_t a1, uint32_t a2);

} CriWareUnityApi;

#define CW_API_OBJECT_NAME g_CriWareUnityApi

extern void *g_GenuineLib;

void ResolveFunctions();

#define CRIWARE_GENUINE_PLUGIN_FILE_NAME ("libcri_ware_unity-g.so")

static inline void try_load_lib(LPCSTR callerName) {
    if (g_GenuineLib) {
        return;
    }

    DEBUG_LOG("CriWare hack: loaded.");
    g_GenuineLib = dlopen(CRIWARE_GENUINE_PLUGIN_FILE_NAME, RTLD_LAZY);
    DEBUG_LOG("On load (in %s): lib handle = %p", callerName, g_GenuineLib);
    ResolveFunctions();
}

extern CriWareUnityApi CW_API_OBJECT_NAME;

#define CR(method, ...) \
    do { \
        try_load_lib(__func__); \
        DEBUG_LOG("Function call: %s", __func__); \
        if (CW_API_OBJECT_NAME . method) { \
            return CW_API_OBJECT_NAME . method(__VA_ARGS__); \
        } \
    } while (false)

//#define CHECKED_RET(method, def_val, ...) \
//    if (CW_API_OBJECT_NAME . method) { \
//        return CW_API_OBJECT_NAME . method(__VA_ARGS__); \
//    } else { \
//        return def_val; \
//    }

#endif //CRIWAREUNITYHACK_CRIWARE_H
