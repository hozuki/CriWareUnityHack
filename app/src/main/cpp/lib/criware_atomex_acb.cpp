//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

CriWareAtomExAcb *criAtomExAcb_LoadAcbFile(LPVOID acbBinder, LPCSTR acbPath, LPVOID awbBinder, LPCSTR awbPath, LPVOID work, uint32_t workSize) {
    CR(criAtomExAcb_LoadAcbFile,
                 acbBinder, acbPath, awbBinder, awbPath, work, workSize);
    return nullptr;
}

void criAtomExAcb_Release(CriWareAtomExAcb *acb) {
    CR(criAtomExAcb_Release,
                 acb);
}

uint32_t criAtomExAcb_GetNumCues(CriWareAtomExAcb *acb) {
    CR(criAtomExAcb_GetNumCues,
                 acb);
    return 0;
}

bool_t criAtomExAcb_ExistsId(CriWareAtomExAcb *acb, uint32_t id) {
    CR(criAtomExAcb_ExistsId,
                 acb, id);
    return false;
}

bool_t criAtomExAcb_ExistsName(CriWareAtomExAcb *acb, LPCSTR name) {
    CR(criAtomExAcb_ExistsName,
                 acb, name);
    return false;
}

uint32_t criAtomExAcb_GetNumUsableAisacControlsById(CriWareAtomExAcb *acb, uint32_t id) {
    CR(criAtomExAcb_GetNumUsableAisacControlsById,
                 acb, id);
    return 0;
}

uint32_t criAtomExAcb_GetNumUsableAisacControlsByName(CriWareAtomExAcb *acb, LPCSTR name) {
    CR(criAtomExAcb_GetNumUsableAisacControlsByName,
                 acb, name);
    return 0;
}

bool_t criAtomExAcb_GetUsableAisacControlById(CriWareAtomExAcb *acb, uint32_t id, uint16_t index, LPVOID info) {
    CR(criAtomExAcb_GetUsableAisacControlById,
                 acb, id, index, info);
    return false;
}

bool_t criAtomExAcb_GetUsableAisacControlByName(CriWareAtomExAcb *acb, LPCSTR name, uint16_t index, LPVOID info) {
    CR(criAtomExAcb_GetUsableAisacControlByName,
                 acb, name, index, info);
    return false;
}

bool_t criAtomExAcb_GetWaveformInfoById(CriWareAtomExAcb *acb, uint32_t id, LPVOID waveformInfo) {
    CR(criAtomExAcb_GetWaveformInfoById,
                 acb, id, waveformInfo);
    return false;
}

bool_t criAtomExAcb_GetWaveformInfoByName(CriWareAtomExAcb *acb, LPCSTR name, LPVOID waveformInfo) {
    CR(criAtomExAcb_GetWaveformInfoByName,
                 acb, name, waveformInfo);
    return false;
}

bool_t criAtomExAcb_GetCueInfoById(CriWareAtomExAcb *acb, uint32_t id, LPVOID cueInfo) {
    CR(criAtomExAcb_GetCueInfoById,
                 acb, id, cueInfo);
    return false;
}

bool_t criAtomExAcb_GetCueInfoByName(CriWareAtomExAcb *acb, LPCSTR name, LPVOID cueInfo) {
    CR(criAtomExAcb_GetCueInfoByName,
                 acb, name, cueInfo);
    return false;
}

bool_t criAtomExAcb_GetCueInfoByIndex(CriWareAtomExAcb *acb, uint32_t index, LPVOID waveformInfo) {
    CR(criAtomExAcb_GetCueInfoByIndex,
                 acb, index, waveformInfo);
    return false;
}

uint32_t criAtomExAcb_GetNumCuePlayingCountById(CriWareAtomExAcb *acb, uint32_t id) {
    CR(criAtomExAcb_GetNumCuePlayingCountById,
                 acb, id);
    return 0;
}

uint32_t criAtomExAcb_GetNumCuePlayingCountByName(CriWareAtomExAcb *acb, LPCSTR name) {
    CR(criAtomExAcb_GetNumCuePlayingCountByName,
                 acb, name);
    return 0;
}

uint32_t criAtomExAcb_GetBlockIndexById(CriWareAtomExAcb *acb, uint32_t id, LPCSTR blockName) {
    CR(criAtomExAcb_GetBlockIndexById,
                 acb, id, blockName);
    return 0;
}

uint32_t criAtomExAcb_GetBlockIndexByName(CriWareAtomExAcb *acb, LPCSTR name, LPCSTR blockName) {
    CR(criAtomExAcb_GetBlockIndexByName,
                 acb, name, blockName);
    return 0;
}

void criAtomExAcb_ResetCueTypeStateById(CriWareAtomExAcb *acb, uint32_t id) {
    CR(criAtomExAcb_ResetCueTypeStateById,
                 acb, id);
}

void criAtomExAcb_ResetCueTypeStateByName(CriWareAtomExAcb *acb, LPCSTR name) {
    CR(criAtomExAcb_ResetCueTypeStateByName,
                 acb, name);
}

void criAtomExAcb_AttachAwbFile(CriWareAtomExAcb *acb, LPVOID awbBinder, LPCSTR awbPath, LPCSTR awbName, LPVOID work, uint32_t workSize) {
    CR(criAtomExAcb_AttachAwbFile,
                 acb, awbBinder, awbPath, awbName, work, workSize);
}

void criAtomExAcb_DetachAwbFile(CriWareAtomExAcb *acb, LPCSTR awbName) {
    CR(criAtomExAcb_DetachAwbFile,
                 acb, awbName);
}
