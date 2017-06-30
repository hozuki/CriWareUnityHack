//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_CATEGORY_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_CATEGORY_H

#include "criware_common.h"

CA(void) criAtomExCategory_SetVolumeByName(LPCSTR name, float volume);
CA(float) criAtomExCategory_GetVolumeByName(LPCSTR name);
CA(void) criAtomExCategory_SetVolumeById(uint32_t id, float volume);
CA(float) criAtomExCategory_GetVolumeById(uint32_t id);
CA(void) criAtomExCategory_MuteByName(LPCSTR name, bool_t mute);
CA(bool_t) criAtomExCategory_IsMutedByName(LPCSTR name);
CA(void) criAtomExCategory_MuteById(uint32_t id, bool_t mute);
CA(bool_t) criAtomExCategory_IsMutedById(uint32_t id);
CA(void) criAtomExCategory_SoloByName(LPCSTR name, bool_t solo, float volume);
CA(bool_t) criAtomExCategory_IsSoloedByName(LPCSTR name);
CA(void) criAtomExCategory_SoloById(uint32_t id, bool_t solo, float volume);
CA(bool_t) criAtomExCategory_IsSoloedById(uint32_t id);
CA(void) criAtomExCategory_PauseByName(LPCSTR name, bool_t pause);
CA(bool_t) criAtomExCategory_IsPausedByName(LPCSTR name);
CA(void) criAtomExCategory_PauseById(uint32_t id, bool_t pause);
CA(bool_t) criAtomExCategory_IsPausedById(uint32_t id);
CA(void) criAtomExCategory_SetAisacControlByName(LPCSTR name, uint16_t controlId, float value);
CA(void) criAtomExCategory_SetAisacControlById(uint32_t id, uint16_t controlId, float value);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_CATEGORY_H
