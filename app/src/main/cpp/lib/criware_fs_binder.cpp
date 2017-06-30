//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

uint32_t criFsBinder_Create(CriWareFsBinder **binder) {
    CR(criFsBinder_Create,
       binder);
    return 0;
}

uint32_t criFsBinder_Destroy(CriWareFsBinder *binder) {
    CR(criFsBinder_Destroy,
       binder);
    return 0;
}

uint32_t criFsBinder_BindCpk(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize, uint32_t *bindId) {
    CR(criFsBinder_BindCpk,
       binder, srcBinder, path, work, workSize, bindId);
    return 0;
}

uint32_t
criFsBinder_BindDirectory(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize, uint32_t *bindId) {
    CR(criFsBinder_BindDirectory,
       binder, srcBinder, path, work, workSize, bindId);
    return 0;
}

uint32_t
criFsBinder_BindFile(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize, uint32_t *bindId) {
    CR(criFsBinder_BindFile,
       binder, srcBinder, path, work, workSize, bindId);
    return 0;
}

uint32_t criFsBinder_Unbind(uint32_t bindId) {
    CR(criFsBinder_Unbind,
       bindId);
    return 0;
}

uint32_t criFsBinder_GetStatus(uint32_t bindId, uint32_t *status) {
    CR(criFsBinder_GetStatus,
       bindId, status);
    return 0;
}

uint32_t criFsBinder_GetFileSize(CriWareFsBinder *binder, LPCSTR path, uint64_t *size) {
    CR(criFsBinder_GetFileSize,
       binder, path, size);
    return 0;
}

uint32_t criFsBinder_GetFileSizeById(CriWareFsBinder *binder, uint32_t id, uint64_t *size) {
    CR(criFsBinder_GetFileSizeById,
       binder, id, size);
    return 0;
}

uint32_t criFsBinder_SetPriority(CriWareFsBinder *binder, uint32_t priority) {
    CR(criFsBinder_SetPriority,
       binder, priority);
    return 0;
}
