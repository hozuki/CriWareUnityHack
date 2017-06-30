//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criAtomExCategory_SetVolumeByName(LPCSTR name, float volume) {
    CR(criAtomExCategory_SetVolumeByName,
                 name, volume);
}

float criAtomExCategory_GetVolumeByName(LPCSTR name) {
    CR(criAtomExCategory_GetVolumeByName,
                 name);
    return 0;
}

void criAtomExCategory_SetVolumeById(uint32_t id, float volume) {
    CR(criAtomExCategory_SetVolumeById,
                 id, volume);
}

float criAtomExCategory_GetVolumeById(uint32_t id) {
    CR(criAtomExCategory_GetVolumeById,
                 id);
    return 0;
}

void criAtomExCategory_MuteByName(LPCSTR name, bool_t mute) {
    CR(criAtomExCategory_MuteByName,
                 name, mute);
}

bool_t criAtomExCategory_IsMutedByName(LPCSTR name) {
    CR(criAtomExCategory_IsMutedByName,
                 name);
    return false;
}

void criAtomExCategory_MuteById(uint32_t id, bool_t mute) {
    CR(criAtomExCategory_MuteById,
                 id, mute);
}

bool_t criAtomExCategory_IsMutedById(uint32_t id) {
    CR(criAtomExCategory_IsMutedById,
                 id);
    return false;
}

void criAtomExCategory_SoloByName(LPCSTR name, bool_t solo, float volume) {
    CR(criAtomExCategory_SoloByName,
                 name, solo, volume);
}

bool_t criAtomExCategory_IsSoloedByName(LPCSTR name) {
    CR(criAtomExCategory_IsSoloedByName,
                 name);
    return false;
}

void criAtomExCategory_SoloById(uint32_t id, bool_t solo, float volume) {
    CR(criAtomExCategory_SoloById,
                 id, solo, volume);
}

bool_t criAtomExCategory_IsSoloedById(uint32_t id) {
    CR(criAtomExCategory_IsSoloedById,
                 id);
    return false;
}

void criAtomExCategory_PauseByName(LPCSTR name, bool_t pause) {
    CR(criAtomExCategory_PauseByName,
                 name, pause);
}

bool_t criAtomExCategory_IsPausedByName(LPCSTR name) {
    CR(criAtomExCategory_IsPausedByName,
                 name);
    return false;
}

void criAtomExCategory_PauseById(uint32_t id, bool_t pause) {
    CR(criAtomExCategory_PauseById,
                 id, pause);
}

bool_t criAtomExCategory_IsPausedById(uint32_t id) {
    CR(criAtomExCategory_IsPausedById,
                 id);
    return false;
}

void criAtomExCategory_SetAisacControlByName(LPCSTR name, uint16_t controlId, float value) {
    CR(criAtomExCategory_SetAisacControlByName,
                 name, controlId, value);
}

void criAtomExCategory_SetAisacControlById(uint32_t id, uint16_t controlId, float value) {
    CR(criAtomExCategory_SetAisacControlById,
                 id, controlId, value);
}
