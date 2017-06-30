//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

bool_t criAtomEx_RegisterAcfFile(LPVOID binder, LPCSTR path, LPVOID work, uint32_t workSize) {
    CR(criAtomEx_RegisterAcfFile,
                 binder, path, work, workSize);
    return false;
}

bool_t criAtomEx_RegisterAcfData(LPVOID acfData, uint32_t acfDataSize, LPVOID work, uint32_t workSize) {
    CR(criAtomEx_RegisterAcfData,
                 acfData, acfDataSize, work, workSize);
    return false;
}

void criAtomEx_UnregisterAcf() {
    CR(criAtomEx_UnregisterAcf);
}

void criAtomEx_AttachDspBusSetting(LPCSTR settingName, LPVOID work, uint32_t workSize) {
    CR(criAtomEx_AttachDspBusSetting,
                 settingName, work, workSize);
}

void criAtomEx_DetachDspBusSetting() {
    CR(criAtomEx_DetachDspBusSetting);
}

void criAtomEx_ApplyDspBusSnapshot(LPCSTR snapshotName, int32_t timeMillis) {
    CR(criAtomEx_ApplyDspBusSnapshot,
                 snapshotName, timeMillis);
}

uint32_t criAtomEx_GetNumGameVariables() {
    CR(criAtomEx_GetNumGameVariables);
    return 0;
}

bool_t criAtomEx_GetGameVariableInfo(uint16_t index, LPVOID gameVariableInfo) {
    CR(criAtomEx_GetGameVariableInfo,
                 index, gameVariableInfo);
    return false;
}

float criAtomEx_GetGameVariableById(uint32_t id) {
    CR(criAtomEx_GetGameVariableById,
                 id);
    return 0;
}

float criAtomEx_GetGameVariableByName(LPCSTR name) {
    CR(criAtomEx_GetGameVariableByName,
                 name);
    return 0;
}

void criAtomEx_SetGameVariableById(uint32_t id, float value) {
    CR(criAtomEx_SetGameVariableById,
                 id, value);
}

void criAtomEx_SetGameVariableByName(LPCSTR name, float value) {
    CR(criAtomEx_SetGameVariableByName,
                 name, value);
}

void criAtomEx_SetRandomSeed(uint32_t seed) {
    CR(criAtomEx_SetRandomSeed,
                 seed);
}

void criAtom_ResetPerformanceMonitor() {
    CR(criAtom_ResetPerformanceMonitor);
}

void criAtom_GetPerformanceInfo(LPVOID info) {
    CR(criAtom_GetPerformanceInfo,
                 info);
}

void criAtom_EnableSlLatencyCheck_ANDROID(bool_t sw) {
    CR(criAtom_EnableSlLatencyCheck_ANDROID,
                 sw);
}

uint32_t criAtom_GetSlBufferConsumptionLatency_ANDROID() {
    CR(criAtom_GetSlBufferConsumptionLatency_ANDROID);
    return 0;
}
