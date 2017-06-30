//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_MANA_H
#define CRIWAREUNITYHACK_CRIWARE_MANA_H

#include "criware_common.h"

// TODO

struct CriWareFsBinder;
struct CriWareManaMovieInfo;
struct CriWareManaFrameInfo;

CA(void) criManaUnity_SetConfigParameters(uint32_t graphicsApi, uint32_t numDecoders, uint32_t numMaxEntries, bool_t enableCuePoint);
CA(void) criManaUnity_Initialize();
CA(void) criManaUnity_Finalize();
CA(void) criManaUnity_ExecuteMain();
CA(uint32_t) criManaUnity_GetAllocatedHeapSize();
CA(void) criManaUnity_SetCuePointFormatDelimiter(LPCSTR delimiter);
CA(uint32_t) criManaUnityPlayer_Create();
CA(void) criManaUnityPlayer_Destroy(uint32_t playerId);
CA(void) criManaUnityPlayer_SetFile(int32_t playerId, CriWareFsBinder *binder, LPCSTR path);
CA(void) criManaUnityPlayer_SetContentId(uint32_t playerId, CriWareFsBinder *binder, uint32_t contentId);
CA(void) criManaUnityPlayer_SetFileRange(uint32_t playerId, LPCSTR path, uint64_t offset, uint64_t range);
CA(bool_t) criManaUnityPlayer_EntryFile(uint32_t playerId, CriWareFsBinder *binder, LPCSTR path, bool_t repeat);
CA(bool_t) criManaUnityPlayer_EntryContentId(uint32_t playerId, CriWareFsBinder *binder, int contentId, bool_t repeat);
CA(bool_t) criManaUnityPlayer_EntryFileRange(uint32_t playerId, LPCSTR path, uint64_t offset, uint64_t range, bool_t repeat);
CA(void) criManaUnityPlayer_ClearEntry(uint32_t playerId);
CA(uint32_t) criManaUnityPlayer_GetNumberOfEntry(uint32_t playerId);
CA(void) criManaUnityPlayer_SetCuePointCallback(uint32_t playerId, LPVOID cbFunc, LPCSTR gameObjectName, LPCSTR funcName);
CA(void) criManaUnityPlayer_GetMovieInfo(uint32_t playerId, _OUT_ CriWareManaMovieInfo *movieInfo);
CA(void) criManaUnityPlayer_Update(uint32_t playerId);
CA(void) criManaUnityPlayer_Prepare(uint32_t playerId);
CA(void) criManaUnityPlayer_Start(uint32_t playerId);
CA(void) criManaUnityPlayer_Stop(uint32_t playerId);
CA(void) criManaUnityPlayer_SetSeekPosition(uint32_t playerId, uint32_t seekFrameIndex);
CA(bool_t) criManaUnityPlayer_UpdateTexture(uint32_t playerId, LPVOID texBuffer, _OUT_ CriWareManaFrameInfo *frameInfo);
CA(bool_t) criManaUnityPlayer_UpdateTextureYuvByPtr(uint32_t playerId, LPVOID texIdY, LPVOID texIdU, LPVOID texIdV,
                                                    _OUT_ CriWareManaFrameInfo *frameInfo);
CA(bool_t) criManaUnityPlayer_UpdateTextureYuvaByPtr(uint32_t playerId, LPVOID texIdY, LPVOID texIdU, LPVOID texIdV, LPVOID texIdA,
                                                     _OUT_ CriWareManaFrameInfo *frameInfo);
CA(void) criManaUnityPlayer_Pause(uint32_t playerId, bool_t sw);
CA(bool_t) criManaUnityPlayer_IsPaused(uint32_t playerId);
CA(void) criManaUnityPlayer_Loop(uint32_t playerId, bool_t sw);
CA(uint64_t) criManaUnityPlayer_GetTime(uint32_t playerId);
CA(uint32_t) criManaUnityPlayer_GetStatus(uint32_t playerId);
CA(void) criManaUnityPlayer_SetAudioTrack(uint32_t playerId, uint32_t track);
CA(void) criManaUnityPlayer_SetVolume(uint32_t playerId, float volume);
CA(void) criManaUnityPlayer_SetSubAudioTrack(uint32_t playerId, uint32_t track);
CA(void) criManaUnityPlayer_SetSubAudioVolume(uint32_t playerId, float volume);
CA(void) criManaUnityPlayer_SetSpeed(uint32_t playerId, float speed);
CA(void) criManaUnityPlayer_SetDeviceSendLevel(uint32_t playerId, uint32_t deviceId, float level);
CA(bool_t) criManaUnityPlayer_HasAlpha(uint32_t playerId);

#endif //CRIWAREUNITYHACK_CRIWARE_MANA_H
