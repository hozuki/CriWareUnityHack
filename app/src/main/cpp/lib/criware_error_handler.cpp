//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

uint32_t criWareUnity_Initialize() {
    CR(criWareUnity_Initialize);
    return 0;
}

void criWareUnity_Finalize() {
    CR(criWareUnity_Finalize);
}

LPVOID criWareUnity_GetFirstError() {
    CR(criWareUnity_GetFirstError);
    return nullptr;
}

void criWareUnity_ResetError() {
    CR(criWareUnity_ResetError);
}

void criWareUnity_ControlLogOutput(bool_t sw) {
    CR(criWareUnity_ControlLogOutput,
       sw);
}
