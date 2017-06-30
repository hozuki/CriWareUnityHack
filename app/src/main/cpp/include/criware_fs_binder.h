//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_FS_BINDER_H
#define CRIWAREUNITYHACK_CRIWARE_FS_BINDER_H

#include "criware_common.h"

struct CriWareFsBinder;

CA(uint32_t) criFsBinder_Create(_OUT_ CriWareFsBinder **binder);
CA(uint32_t) criFsBinder_Destroy(CriWareFsBinder *binder);
CA(uint32_t) criFsBinder_BindCpk(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize,
                                 _OUT_ uint32_t *bindId);
CA(uint32_t) criFsBinder_BindDirectory(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize,
                                       _OUT_ uint32_t *bindId);
CA(uint32_t) criFsBinder_BindFile(CriWareFsBinder *binder, CriWareFsBinder *srcBinder, LPCSTR path, LPVOID work, uint32_t workSize,
                                  _OUT_ uint32_t *bindId);
CA(uint32_t) criFsBinder_Unbind(uint32_t bindId);
CA(uint32_t) criFsBinder_GetStatus(uint32_t bindId, _OUT_ uint32_t *status);
CA(uint32_t) criFsBinder_GetFileSize(CriWareFsBinder *binder, LPCSTR path, _OUT_ uint64_t *size);
CA(uint32_t) criFsBinder_GetFileSizeById(CriWareFsBinder *binder, uint32_t id, _OUT_ uint64_t *size);
CA(uint32_t) criFsBinder_SetPriority(CriWareFsBinder *binder, uint32_t priority);

#endif //CRIWAREUNITYHACK_CRIWARE_FS_BINDER_H
