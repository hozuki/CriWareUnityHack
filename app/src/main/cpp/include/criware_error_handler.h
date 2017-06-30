//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ERROR_HANDLER_H
#define CRIWAREUNITYHACK_CRIWARE_ERROR_HANDLER_H

#include "criware_common.h"

CA(uint32_t) criWareUnity_Initialize();
CA(void) criWareUnity_Finalize();
CA(LPVOID) criWareUnity_GetFirstError();
CA(void) criWareUnity_ResetError();
CA(void) criWareUnity_ControlLogOutput(bool_t sw);

#endif //CRIWAREUNITYHACK_CRIWARE_ERROR_HANDLER_H
