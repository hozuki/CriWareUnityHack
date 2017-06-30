//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criManaUnity_SetConfigParameters(uint32_t graphicsApi, uint32_t numDecoders, uint32_t numMaxEntries, bool_t enableCuePoint) {
    CR(criManaUnity_SetConfigParameters,
       graphicsApi, numDecoders, numMaxEntries, enableCuePoint);
}

void criManaUnity_Initialize() {
    CR(criManaUnity_Initialize);
}

void criManaUnity_Finalize() {
    CR(criManaUnity_Finalize);
}

void criManaUnity_ExecuteMain() {
    CR(criManaUnity_ExecuteMain);
}

uint32_t criManaUnity_GetAllocatedHeapSize() {
    CR(criManaUnity_GetAllocatedHeapSize);
    return 0;
}

void criManaUnity_SetCuePointFormatDelimiter(LPCSTR delimiter) {
    CR(criManaUnity_SetCuePointFormatDelimiter,
       delimiter);
}

uint32_t criManaUnityPlayer_Create() {
    CR(criManaUnityPlayer_Create);
    return 0;
}

void criManaUnityPlayer_Destroy(uint32_t playerId) {
    CR(criManaUnityPlayer_Destroy,
       playerId);
}

void criManaUnityPlayer_SetFile(int32_t playerId, CriWareFsBinder *binder, LPCSTR path) {
    CR(criManaUnityPlayer_SetFile,
       playerId, binder, path);
}

void criManaUnityPlayer_SetContentId(uint32_t playerId, CriWareFsBinder *binder, uint32_t contentId) {
    CR(criManaUnityPlayer_SetContentId,
       playerId, binder, contentId);
}

void criManaUnityPlayer_SetFileRange(uint32_t playerId, LPCSTR path, uint64_t offset, uint64_t range) {
    CR(criManaUnityPlayer_SetFileRange,
       playerId, path, offset, range);
}

bool_t criManaUnityPlayer_EntryFile(uint32_t playerId, CriWareFsBinder *binder, LPCSTR path, bool_t repeat) {
    CR(criManaUnityPlayer_EntryFile,
       playerId, binder, path, repeat);
    return false;
}

bool_t criManaUnityPlayer_EntryContentId(uint32_t playerId, CriWareFsBinder *binder, bool_t contentId, bool_t repeat) {
    CR(criManaUnityPlayer_EntryContentId,
       playerId, binder, contentId, repeat);
    return false;
}

bool_t criManaUnityPlayer_EntryFileRange(uint32_t playerId, LPCSTR path, uint64_t offset, uint64_t range, bool_t repeat) {
    CR(criManaUnityPlayer_EntryFileRange,
       playerId, path, offset, range, repeat);
    return false;
}

void criManaUnityPlayer_ClearEntry(uint32_t playerId) {
    CR(criManaUnityPlayer_ClearEntry,
       playerId);
}

uint32_t criManaUnityPlayer_GetNumberOfEntry(uint32_t playerId) {
    CR(criManaUnityPlayer_GetNumberOfEntry,
       playerId);
    return 0;
}

void criManaUnityPlayer_SetCuePointCallback(uint32_t playerId, LPVOID cbFunc, LPCSTR gameObjectName, LPCSTR funcName) {
    CR(criManaUnityPlayer_SetCuePointCallback,
       playerId, cbFunc, gameObjectName, funcName);
}

void criManaUnityPlayer_GetMovieInfo(uint32_t playerId, CriWareManaMovieInfo *movieInfo) {
    CR(criManaUnityPlayer_GetMovieInfo,
       playerId, movieInfo);
}

void criManaUnityPlayer_Update(uint32_t playerId) {
    CR(criManaUnityPlayer_Update,
       playerId);
}

void criManaUnityPlayer_Prepare(uint32_t playerId) {
    CR(criManaUnityPlayer_Prepare,
       playerId);
}

void criManaUnityPlayer_Start(uint32_t playerId) {
    CR(criManaUnityPlayer_Start,
       playerId);
}

void criManaUnityPlayer_Stop(uint32_t playerId) {
    CR(criManaUnityPlayer_Stop,
       playerId);
}

void criManaUnityPlayer_SetSeekPosition(uint32_t playerId, uint32_t seekFrameIndex) {
    CR(criManaUnityPlayer_SetSeekPosition,
       playerId, seekFrameIndex);
}

bool_t criManaUnityPlayer_UpdateTexture(uint32_t playerId, LPVOID texBuffer, CriWareManaFrameInfo *frameInfo) {
    CR(criManaUnityPlayer_UpdateTexture,
       playerId, texBuffer, frameInfo);
    return false;
}

bool_t criManaUnityPlayer_UpdateTextureYuvByPtr(uint32_t playerId, LPVOID texIdY, LPVOID texIdU, LPVOID texIdV, CriWareManaFrameInfo *frameInfo) {
    CR(criManaUnityPlayer_UpdateTextureYuvByPtr,
       playerId, texIdY, texIdU, texIdV, frameInfo);
    return false;
}

bool_t criManaUnityPlayer_UpdateTextureYuvaByPtr(uint32_t playerId, LPVOID texIdY, LPVOID texIdU, LPVOID texIdV, LPVOID texIdA,
                                                 CriWareManaFrameInfo *frameInfo) {
    CR(criManaUnityPlayer_UpdateTextureYuvaByPtr,
       playerId, texIdY, texIdU, texIdV, texIdA, frameInfo);
    return false;
}

void criManaUnityPlayer_Pause(uint32_t playerId, bool_t sw) {
    CR(criManaUnityPlayer_Pause,
       playerId, sw);
}

bool_t criManaUnityPlayer_IsPaused(uint32_t playerId) {
    CR(criManaUnityPlayer_IsPaused,
       playerId);
    return false;
}

void criManaUnityPlayer_Loop(uint32_t playerId, bool_t sw) {
    CR(criManaUnityPlayer_Loop,
       playerId, sw);
}

uint64_t criManaUnityPlayer_GetTime(uint32_t playerId) {
    CR(criManaUnityPlayer_GetTime,
       playerId);
    return 0;
}

uint32_t criManaUnityPlayer_GetStatus(uint32_t playerId) {
    CR(criManaUnityPlayer_GetStatus,
       playerId);
    return 0;
}

void criManaUnityPlayer_SetAudioTrack(uint32_t playerId, uint32_t track) {
    CR(criManaUnityPlayer_SetAudioTrack,
       playerId, track);
}

void criManaUnityPlayer_SetVolume(uint32_t playerId, float volume) {
    CR(criManaUnityPlayer_SetVolume,
       playerId, volume);
}

void criManaUnityPlayer_SetSubAudioTrack(uint32_t playerId, uint32_t track) {
    CR(criManaUnityPlayer_SetSubAudioTrack,
       playerId, track);
}

void criManaUnityPlayer_SetSubAudioVolume(uint32_t playerId, float volume) {
    CR(criManaUnityPlayer_SetSubAudioVolume,
       playerId, volume);
}

void criManaUnityPlayer_SetSpeed(uint32_t playerId, float speed) {
    CR(criManaUnityPlayer_SetSpeed,
       playerId, speed);
}

void criManaUnityPlayer_SetDeviceSendLevel(uint32_t playerId, uint32_t deviceId, float level) {
    CR(criManaUnityPlayer_SetDeviceSendLevel,
       playerId, deviceId, level);
}

bool_t criManaUnityPlayer_HasAlpha(uint32_t playerId) {
    CR(criManaUnityPlayer_HasAlpha,
       playerId);
    return false;
}
