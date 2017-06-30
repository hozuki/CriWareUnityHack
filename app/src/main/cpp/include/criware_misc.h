//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_MISC_H
#define CRIWAREUNITYHACK_CRIWARE_MISC_H

#include "criware_common.h"

CA(uint32_t) criWareUnity_SetDecryptionKey(uint64_t key, LPCSTR authenticationFile, bool_t enableAtomDecryption, bool_t enableManaDecryption);
CA(uint32_t) criWareUnity_GetVersionNumber();

#endif //CRIWAREUNITYHACK_CRIWARE_MISC_H
