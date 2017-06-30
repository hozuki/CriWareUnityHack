//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

CriWareAtomExPlayerOutputAnalyzer *criAtomExPlayerOutputAnalyzer_Create(uint32_t numTypes, uint32_t *types) {
    CR(criAtomExPlayerOutputAnalyzer_Create,
       numTypes, types);
    return nullptr;
}

LPVOID criAtomExPlayerOutputAnalyzer_Destroy(CriWareAtomExPlayerOutputAnalyzer *analyzer) {
    CR(criAtomExPlayerOutputAnalyzer_Destroy,
       analyzer);
    return nullptr;
}

void criAtomExPlayerOutputAnalyzer_AttachExPlayer(CriWareAtomExPlayerOutputAnalyzer *analyzer, CriWareAtomExPlayer *player) {
    CR(criAtomExPlayerOutputAnalyzer_AttachExPlayer,
       analyzer, player);
}

void criAtomExPlayerOutputAnalyzer_DetachExPlayer(CriWareAtomExPlayerOutputAnalyzer *analyzer, CriWareAtomExPlayer *player) {
    CR(criAtomExPlayerOutputAnalyzer_DetachExPlayer,
       analyzer, player);
}

float criAtomExPlayerOutputAnalyzer_GetRms(CriWareAtomExPlayerOutputAnalyzer *analyzer, uint32_t channel) {
    CR(criAtomExPlayerOutputAnalyzer_GetRms,
       analyzer, channel);
    return 0;
}
