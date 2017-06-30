//
// Created by MIC on 2017-06-28.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_H

#include "criware_common.h"

CA(bool_t) criAtomEx_RegisterAcfFile(LPVOID binder, LPCSTR path, LPVOID work, uint32_t workSize);
CA(bool_t) criAtomEx_RegisterAcfData(LPVOID acfData, uint32_t acfDataSize, LPVOID work, uint32_t workSize);
CA(void) criAtomEx_UnregisterAcf();
CA(void) criAtomEx_AttachDspBusSetting(LPCSTR settingName, LPVOID work, uint32_t workSize);
CA(void) criAtomEx_DetachDspBusSetting();
CA(void) criAtomEx_ApplyDspBusSnapshot(LPCSTR snapshotName, int32_t timeMillis);
CA(uint32_t) criAtomEx_GetNumGameVariables();
CA(bool_t) criAtomEx_GetGameVariableInfo(uint16_t index, LPVOID gameVariableInfo);
CA(float) criAtomEx_GetGameVariableById(uint32_t id);
CA(float) criAtomEx_GetGameVariableByName(LPCSTR name);
CA(void) criAtomEx_SetGameVariableById(uint32_t id, float value);
CA(void) criAtomEx_SetGameVariableByName(LPCSTR name, float value);
CA(void) criAtomEx_SetRandomSeed(uint32_t seed);
CA(void) criAtom_ResetPerformanceMonitor();
CA(void) criAtom_GetPerformanceInfo(LPVOID info);
CA(void) criAtom_EnableSlLatencyCheck_ANDROID(bool_t sw);
CA(uint32_t) criAtom_GetSlBufferConsumptionLatency_ANDROID();

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_H
