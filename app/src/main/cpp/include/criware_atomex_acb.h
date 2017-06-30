//
// Created by MIC on 2017-06-28.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_ACB_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_ACB_H

#include "criware_common.h"

struct CriWareAtomExAcb;

CA(CriWareAtomExAcb *)criAtomExAcb_LoadAcbFile(LPVOID acbBinder, LPCSTR acbPath, LPVOID awbBinder, LPCSTR awbPath, LPVOID work, uint32_t workSize);
CA(void) criAtomExAcb_Release(CriWareAtomExAcb *acb);
CA(uint32_t) criAtomExAcb_GetNumCues(CriWareAtomExAcb *acb);
CA(bool_t) criAtomExAcb_ExistsId(CriWareAtomExAcb *acb, uint32_t id);
CA(bool_t) criAtomExAcb_ExistsName(CriWareAtomExAcb *acb, LPCSTR name);
CA(uint32_t) criAtomExAcb_GetNumUsableAisacControlsById(CriWareAtomExAcb *acb, uint32_t id);
CA(uint32_t) criAtomExAcb_GetNumUsableAisacControlsByName(CriWareAtomExAcb *acb, LPCSTR name);
CA(bool_t) criAtomExAcb_GetUsableAisacControlById(CriWareAtomExAcb *acb, uint32_t id, uint16_t index, LPVOID info);
CA(bool_t) criAtomExAcb_GetUsableAisacControlByName(CriWareAtomExAcb *acb, LPCSTR name, uint16_t index, LPVOID info);
CA(bool_t) criAtomExAcb_GetWaveformInfoById(CriWareAtomExAcb *acb, uint32_t id, LPVOID waveformInfo);
CA(bool_t) criAtomExAcb_GetWaveformInfoByName(CriWareAtomExAcb *acb, LPCSTR name, LPVOID waveformInfo);
CA(bool_t) criAtomExAcb_GetCueInfoById(CriWareAtomExAcb *acb, uint32_t id, LPVOID cueInfo);
CA(bool_t) criAtomExAcb_GetCueInfoByName(CriWareAtomExAcb *acb, LPCSTR name, LPVOID cueInfo);
CA(bool_t) criAtomExAcb_GetCueInfoByIndex(CriWareAtomExAcb *acb, uint32_t index, LPVOID waveformInfo);
CA(uint32_t) criAtomExAcb_GetNumCuePlayingCountById(CriWareAtomExAcb *acb, uint32_t id);
CA(uint32_t) criAtomExAcb_GetNumCuePlayingCountByName(CriWareAtomExAcb *acb, LPCSTR name);
CA(uint32_t) criAtomExAcb_GetBlockIndexById(CriWareAtomExAcb *acb, uint32_t id, LPCSTR blockName);
CA(uint32_t) criAtomExAcb_GetBlockIndexByName(CriWareAtomExAcb *acb, LPCSTR name, LPCSTR blockName);
CA(void) criAtomExAcb_ResetCueTypeStateById(CriWareAtomExAcb *acb, uint32_t id);
CA(void) criAtomExAcb_ResetCueTypeStateByName(CriWareAtomExAcb *acb, LPCSTR name);
CA(void) criAtomExAcb_AttachAwbFile(CriWareAtomExAcb *acb, LPVOID awbBinder, LPCSTR awbPath, LPCSTR awbName, LPVOID work, uint32_t workSize);
CA(void) criAtomExAcb_DetachAwbFile(CriWareAtomExAcb *acb, LPCSTR awbName);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_ACB_H
