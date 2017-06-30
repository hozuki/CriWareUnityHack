//
// Created by MIC on 2017-06-29.
//

#include <inttypes.h>
#include "../include/criware.h"
#include "../include/dbghelper.h"

uint32_t criWareUnity_SetDecryptionKey(uint64_t key, LPCSTR authenticationFile, bool_t enableAtomDecryption, bool_t enableManaDecryption) {
    if (g_CriWareUnityApi.criWareUnity_SetDecryptionKey) {
        DEBUG_LOG("Intercepted decryption key: %" PRIu64, key);
        return g_CriWareUnityApi.criWareUnity_SetDecryptionKey(key, authenticationFile, enableAtomDecryption, enableManaDecryption);
    } else {
        return 0;
    }
}

uint32_t criWareUnity_GetVersionNumber() {
    CR(criWareUnity_GetVersionNumber);
    return 0;
}
