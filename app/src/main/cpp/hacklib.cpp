//
// Created by MIC on 2017-06-29.
//

#include <jni.h>
#include <dlfcn.h>
#include <string>
#include "include/criware.h"

#define CURRENT_JNI_VERSION JNI_VERSION_1_6

CriWareUnityApi CW_API_OBJECT_NAME = {0};
void *g_GenuineLib = nullptr;

extern "C"
JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved) {
    DEBUG_LOG("CriWare hack: loaded.");
    g_GenuineLib = dlopen(CRIWARE_GENUINE_PLUGIN_FILE_NAME, RTLD_LAZY);
    DEBUG_LOG("On load: lib handle = %p", g_GenuineLib);
    ResolveFunctions();

    jint ret = CURRENT_JNI_VERSION;
    if (CW_API_OBJECT_NAME.JNI_OnLoad) {
        ret = CW_API_OBJECT_NAME.JNI_OnLoad(vm, reserved);
    }
    return ret;
}

extern "C"
JNIEXPORT void JNICALL
JNI_OnUnload(JavaVM *vm, void *reserved) {
    if (g_GenuineLib) {
        if (CW_API_OBJECT_NAME.JNI_OnUnload) {
            CW_API_OBJECT_NAME.JNI_OnUnload(vm, reserved);
        }
        memset(&CW_API_OBJECT_NAME, 0, sizeof(CriWareUnityApi));
        dlclose(g_GenuineLib);
    }
}

void ResolveFunctions() {
    if (!g_GenuineLib) {
        return;
    }
    auto lib = g_GenuineLib;
    auto &g = g_CriWareUnityApi;
    void *ptr;

#define r(name) \
    DEBUG_LOG("Resolving symbol " # name " ..."); \
    ptr = dlsym(lib, "" # name); \
    memcpy(&g.name, &ptr, sizeof(void *)); \
    DEBUG_LOG("Resolved symbol " # name ": address = %p", ptr)

    r(JNI_OnLoad);
    r(JNI_OnUnload);

    // criware_atom
    r(criAtomUnity_SetConfigParameters);
    r(criAtomUnity_SetConfigAdditionalParameters_IOS);
    r(criAtomUnity_SetConfigAdditionalParameters_ANDROID);
    r(criAtomUnity_Initialize);
    r(criAtomUnity_Finalize);
    r(criAtomUnity_Pause);
    r(criAtomUnity_GetCpuUsage);
    r(criAtomUnity_GetAllocatedHeapSize);
    r(criAtomUnity_ControlDataCompatibility);
    r(criAtomUnitySequencer_SetEventCallback);
    r(criAtomUnity_SetMaxSamplingRateForStandardVoicePool);

    // criware_atom_dec_hca
    r(criAtomDecHca_GetInfo);
    r(criAtomDecHca_DecodeShortInterleaved);
    r(criAtomDecHca_DecodeFloatInterleaved);

    // criware_atomex
    r(criAtomEx_RegisterAcfFile);
    r(criAtomEx_RegisterAcfData);
    r(criAtomEx_UnregisterAcf);
    r(criAtomEx_AttachDspBusSetting);
    r(criAtomEx_DetachDspBusSetting);
    r(criAtomEx_ApplyDspBusSnapshot);
    r(criAtomEx_GetNumGameVariables);
    r(criAtomEx_GetGameVariableInfo);
    r(criAtomEx_GetGameVariableById);
    r(criAtomEx_GetGameVariableByName);
    r(criAtomEx_SetGameVariableById);
    r(criAtomEx_SetGameVariableByName);
    r(criAtomEx_SetRandomSeed);
    r(criAtom_ResetPerformanceMonitor);
    r(criAtom_GetPerformanceInfo);
    r(criAtom_EnableSlLatencyCheck_ANDROID);
    r(criAtom_GetSlBufferConsumptionLatency_ANDROID);

    // criware_atomex_3d_listener
    r(criAtomEx3dListener_Create);
    r(criAtomEx3dListener_Destroy);
    r(criAtomEx3dListener_Update);
    r(criAtomEx3dListener_ResetParameters);
    r(criAtomEx3dListener_SetPosition);
    r(criAtomEx3dListener_SetVelocity);
    r(criAtomEx3dListener_SetOrientation);
    r(criAtomEx3dListener_SetDistanceFactor);
    r(criAtomEx3dListener_SetFocusPoint);
    r(criAtomEx3dListener_SetDistanceFactorLevel);
    r(criAtomEx3dListener_SetDirectionFactorLevel);

    // criware_atomex_3d_source
    r(criAtomEx3dSource_Create);
    r(criAtomEx3dSource_Destroy);
    r(criAtomEx3dSource_Update);
    r(criAtomEx3dSource_ResetParameters);
    r(criAtomEx3dSource_SetPosition);
    r(criAtomEx3dSource_SetVelocity);
    r(criAtomEx3dSource_SetOrientation);
    r(criAtomEx3dSource_SetConeParameter);
    r(criAtomEx3dSource_SetMinMaxDistance);
    r(criAtomEx3dSource_SetDopplerFactor);
    r(criAtomEx3dSource_SetVolume);
    r(criAtomEx3dSource_SetMaxAngleAisacDelta);

    // criware_atomex_acb
    r(criAtomExAcb_LoadAcbFile);
    r(criAtomExAcb_Release);
    r(criAtomExAcb_GetNumCues);
    r(criAtomExAcb_ExistsId);
    r(criAtomExAcb_ExistsName);
    r(criAtomExAcb_GetNumUsableAisacControlsById);
    r(criAtomExAcb_GetNumUsableAisacControlsByName);
    r(criAtomExAcb_GetUsableAisacControlById);
    r(criAtomExAcb_GetUsableAisacControlByName);
    r(criAtomExAcb_GetWaveformInfoById);
    r(criAtomExAcb_GetWaveformInfoByName);
    r(criAtomExAcb_GetCueInfoById);
    r(criAtomExAcb_GetCueInfoByName);
    r(criAtomExAcb_GetCueInfoByIndex);
    r(criAtomExAcb_GetNumCuePlayingCountById);
    r(criAtomExAcb_GetNumCuePlayingCountByName);
    r(criAtomExAcb_GetBlockIndexById);
    r(criAtomExAcb_GetBlockIndexByName);
    r(criAtomExAcb_ResetCueTypeStateById);
    r(criAtomExAcb_ResetCueTypeStateByName);
    r(criAtomExAcb_AttachAwbFile);
    r(criAtomExAcb_DetachAwbFile);

    // criware_atomex_asr
    r(criAtomExAsr_AttachBusAnalyzer);
    r(criAtomExAsr_DetachBusAnalyzer);
    r(criAtomExAsr_GetBusAnalyzerInfo);
    r(criAtomExAsr_SetBusVolume);
    r(criAtomExAsr_SetBusSendLevel);
    r(criAtomExAsr_SetBusMatrix);

    // criware_atomex_category
    r(criAtomExCategory_SetVolumeByName);
    r(criAtomExCategory_GetVolumeByName);
    r(criAtomExCategory_SetVolumeById);
    r(criAtomExCategory_GetVolumeById);
    r(criAtomExCategory_MuteByName);
    r(criAtomExCategory_IsMutedByName);
    r(criAtomExCategory_MuteById);
    r(criAtomExCategory_IsMutedById);
    r(criAtomExCategory_SoloByName);
    r(criAtomExCategory_IsSoloedByName);
    r(criAtomExCategory_SoloById);
    r(criAtomExCategory_IsSoloedById);
    r(criAtomExCategory_PauseByName);
    r(criAtomExCategory_IsPausedByName);
    r(criAtomExCategory_PauseById);
    r(criAtomExCategory_IsPausedById);
    r(criAtomExCategory_SetAisacControlByName);
    r(criAtomExCategory_SetAisacControlById);

    // criware_atomex_latency_estimator
    r(criAtomLatencyEstimator_Initialize_ANDROID);
    r(criAtomLatencyEstimator_Finalize_ANDROID);
    r(criAtomLatencyEstimator_GetCurrentInfo_ANDROID);

    // criware_atomex_playback
    r(criAtomExPlayback_Stop);
    r(criAtomExPlayback_StopWithoutReleaseTime);
    r(criAtomExPlayback_Pause);
    r(criAtomExPlayback_Resume);
    r(criAtomExPlayback_IsPaused);
    r(criAtomExPlayback_GetStatus);
    r(criAtomExPlayback_GetFormatInfo);
    r(criAtomExPlayback_GetTime);
    r(criAtomExPlayback_GetNumPlayedSamples);
    r(criAtomExPlayback_SetNextBlockIndex);
    r(criAtomExPlayback_GetCurrentBlockIndex);

    // criware_atomex_player
    r(criAtomExPlayer_Create);
    r(criAtomExPlayer_Destroy);
    r(criAtomExPlayer_SetCueId);
    r(criAtomExPlayer_SetCueName);
    r(criAtomExPlayer_SetCueIndex);
    r(criAtomExPlayer_SetFile);
    r(criAtomExPlayer_SetContentId);
    r(criAtomExPlayer_Start);
    r(criAtomExPlayer_Prepare);
    r(criAtomExPlayer_Stop);
    r(criAtomExPlayer_StopWithoutReleaseTime);
    r(criAtomExPlayer_Pause);
    r(criAtomExPlayer_Resume);
    r(criAtomExPlayer_IsPaused);
    r(criAtomExPlayer_GetStatus);
    r(criAtomExPlayer_GetTime);
    r(criAtomExPlayer_SetFormat);
    r(criAtomExPlayer_SetNumChannels);
    r(criAtomExPlayer_SetSamplingRate);
    r(criAtomExPlayer_SetStartTime);
    r(criAtomExPlayer_SetSequencePrepareTime);
    r(criAtomExPlayer_LimitLoopCount);
    r(criAtomExPlayer_Update);
    r(criAtomExPlayer_UpdateAll);
    r(criAtomExPlayer_ResetParameters);
    r(criAtomExPlayer_GetParameterFloat32);
    r(criAtomExPlayer_GetParameterUint32);
    r(criAtomExPlayer_GetParameterSint32);
    r(criAtomExPlayer_SetVolume);
    r(criAtomExPlayer_SetPitch);
    r(criAtomExPlayer_SetPan3dAngle);
    r(criAtomExPlayer_SetPan3dInteriorDistance);
    r(criAtomExPlayer_SetPan3dVolume);
    r(criAtomExPlayer_SetPanType);
    r(criAtomExPlayer_SetSendLevel);
    r(criAtomExPlayer_SetBusSendLevel);
    r(criAtomExPlayer_SetBusSendLevelOffset);
    r(criAtomExPlayer_SetDeviceSendLevel);
    r(criAtomExPlayer_SetBandpassFilterParameters);
    r(criAtomExPlayer_SetBiquadFilterParameters);
    r(criAtomExPlayer_SetVoicePriority);
    r(criAtomExPlayer_SetVoiceControlMethod);
    r(criAtomExPlayer_SetAisacControlById);
    r(criAtomExPlayer_SetAisacControlByName);
    r(criAtomExPlayer_Set3dSourceHn);
    r(criAtomExPlayer_Set3dListenerHn);
    r(criAtomExPlayer_SetCategoryById);
    r(criAtomExPlayer_SetCategoryByName);
    r(criAtomExPlayer_UnsetCategory);
    r(criAtomExPlayer_SetCuePriority);
    r(criAtomExPlayer_SetEnvelopAttackTime);
    r(criAtomExPlayer_SetEnvelopHoldTime);
    r(criAtomExPlayer_SetEnvelopDecayTime);
    r(criAtomExPlayer_SetEnvelopReleaseTime);
    r(criAtomExPlayer_SetEnvelopSustainLevel);
    r(criAtomExPlayer_AttachFader);
    r(criAtomExPlayer_DetachFader);
    r(criAtomExPlayer_SetFadeOutTime);
    r(criAtomExPlayer_SetFadeInTime);
    r(criAtomExPlayer_SetFadeInStartOffset);
    r(criAtomExPlayer_SetFadeOutEndDelay);
    r(criAtomExPlayer_IsFading);
    r(criAtomExPlayer_ResetFaderParameters);
    r(criAtomExPlayer_GetAttachedAisacInfo);
    r(criAtomExPlayer_SetFirstBlockIndex);
    r(criAtomExPlayer_SetSelectorLabel);
    r(criAtomExPlayer_SetRendererType);
    r(criAtomExPlayer_SetRandomSeed);
    r(criAtomExPlayer_Loop);
    r(criAtomExPlayer_SetAsrRackId);

    // criware_atomex_player_output_analyzer
    r(criAtomExPlayerOutputAnalyzer_Create);
    r(criAtomExPlayerOutputAnalyzer_Destroy);
    r(criAtomExPlayerOutputAnalyzer_AttachExPlayer);
    r(criAtomExPlayerOutputAnalyzer_DetachExPlayer);
    r(criAtomExPlayerOutputAnalyzer_GetRms);

    // criware_atomex_voice_pool
    r(criAtomUnity_GetNumUsedVoices);

    // criware_error_handler
    r(criWareUnity_Initialize);
    r(criWareUnity_Finalize);
    r(criWareUnity_GetFirstError);
    r(criWareUnity_ResetError);
    r(criWareUnity_ControlLogOutput);

    // criware_fs
    r(criFsUnity_SetConfigParameters);
    r(criFsUnity_SetConfigAdditionalParameters_ANDROID);
    r(criFsUnity_Initialize);
    r(criFsUnity_Finalize);
    r(criFsUnity_GetAllocatedHeapSize);
    r(criFsLoader_GetRetryCount);

    // criware_fs_binder
    r(criFsBinder_Create);
    r(criFsBinder_Destroy);
    r(criFsBinder_BindCpk);
    r(criFsBinder_BindDirectory);
    r(criFsBinder_BindFile);
    r(criFsBinder_Unbind);
    r(criFsBinder_GetStatus);
    r(criFsBinder_GetFileSize);
    r(criFsBinder_GetFileSizeById);
    r(criFsBinder_SetPriority);

    // criware_fs_installer
    r(criFsInstaller_ExecuteMain);
    r(criFsInstaller_Create);
    r(criFsInstaller_Destroy);
    r(criFsInstaller_Copy);
    r(criFsInstaller_Stop);
    r(criFsInstaller_GetStatus);
    r(criFsInstaller_GetProgress);

    // criware_fs_loader
    r(criFsLoader_Create);
    r(criFsLoader_Destroy);
    r(criFsLoader_Load);
    r(criFsLoader_LoadById);
    r(criFsLoader_Stop);
    r(criFsLoader_GetStatus);
    r(criFsLoader_SetReadUnitSize);

    // criware_mana
    r(criManaUnity_SetConfigParameters);
    r(criManaUnity_Initialize);
    r(criManaUnity_Finalize);
    r(criManaUnity_ExecuteMain);
    r(criManaUnity_GetAllocatedHeapSize);
    r(criManaUnity_SetCuePointFormatDelimiter);
    r(criManaUnityPlayer_Create);
    r(criManaUnityPlayer_Destroy);
    r(criManaUnityPlayer_SetFile);
    r(criManaUnityPlayer_SetContentId);
    r(criManaUnityPlayer_SetFileRange);
    r(criManaUnityPlayer_EntryFile);
    r(criManaUnityPlayer_EntryContentId);
    r(criManaUnityPlayer_EntryFileRange);
    r(criManaUnityPlayer_ClearEntry);
    r(criManaUnityPlayer_GetNumberOfEntry);
    r(criManaUnityPlayer_SetCuePointCallback);
    r(criManaUnityPlayer_GetMovieInfo);
    r(criManaUnityPlayer_Update);
    r(criManaUnityPlayer_Prepare);
    r(criManaUnityPlayer_Start);
    r(criManaUnityPlayer_Stop);
    r(criManaUnityPlayer_SetSeekPosition);
    r(criManaUnityPlayer_UpdateTexture);
    r(criManaUnityPlayer_UpdateTextureYuvByPtr);
    r(criManaUnityPlayer_UpdateTextureYuvaByPtr);
    r(criManaUnityPlayer_Pause);
    r(criManaUnityPlayer_IsPaused);
    r(criManaUnityPlayer_Loop);
    r(criManaUnityPlayer_GetTime);
    r(criManaUnityPlayer_GetStatus);
    r(criManaUnityPlayer_SetAudioTrack);
    r(criManaUnityPlayer_SetVolume);
    r(criManaUnityPlayer_SetSubAudioTrack);
    r(criManaUnityPlayer_SetSubAudioVolume);
    r(criManaUnityPlayer_SetSpeed);
    r(criManaUnityPlayer_SetDeviceSendLevel);
    r(criManaUnityPlayer_HasAlpha);

    // criware_misc
    r(criWareUnity_SetDecryptionKey);
    r(criWareUnity_GetVersionNumber);

    // criware_unknown
    r(criWareUnity_SetForceCrashFlagOnError);
    r(criWareUnity_SetRenderingEventOffsetForMana);
    r(criAtomUnity_SetConfigAdditionalParameters_PC);
    r(criManaUnity_SetConfigAdditionalParameters_ANDROID);

    // criware_unity_plugin
    r(UnityPluginLoad);
    r(UnityPluginUnload);
    r(UnityRenderEvent);
    r(UnitySetGraphicsDevice);
}
