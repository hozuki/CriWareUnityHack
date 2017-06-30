//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYER_OUTPUT_ANALYZER_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYER_OUTPUT_ANALYZER_H

#include "criware_common.h"

struct CriWareAtomExPlayerOutputAnalyzer;
struct CriWareAtomExPlayer;

CA(CriWareAtomExPlayerOutputAnalyzer *)criAtomExPlayerOutputAnalyzer_Create(uint32_t numTypes, uint32_t *types);
CA(LPVOID) criAtomExPlayerOutputAnalyzer_Destroy(CriWareAtomExPlayerOutputAnalyzer *analyzer);
CA(void) criAtomExPlayerOutputAnalyzer_AttachExPlayer(CriWareAtomExPlayerOutputAnalyzer *analyzer, CriWareAtomExPlayer *player);
CA(void) criAtomExPlayerOutputAnalyzer_DetachExPlayer(CriWareAtomExPlayerOutputAnalyzer *analyzer, CriWareAtomExPlayer *player);
CA(float) criAtomExPlayerOutputAnalyzer_GetRms(CriWareAtomExPlayerOutputAnalyzer *analyzer, uint32_t channel);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_PLAYER_OUTPUT_ANALYZER_H
