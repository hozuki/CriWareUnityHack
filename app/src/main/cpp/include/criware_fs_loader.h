//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_FS_LOADER_H
#define CRIWAREUNITYHACK_CRIWARE_FS_LOADER_H

#include "criware_common.h"

struct CriWareFsLoader;
struct CriWareFsBinder;

CA(uint32_t) criFsLoader_Create(_OUT_ CriWareFsLoader **loader);
CA(uint32_t) criFsLoader_Destroy(CriWareFsLoader *loader);
CA(uint32_t) criFsLoader_Load(CriWareFsLoader *loader, CriWareFsBinder *binder, LPCSTR path, uint64_t offset, uint64_t loadSize,
                                  LPVOID buffer, uint64_t bufferSize);
CA(uint32_t) criFsLoader_LoadById(CriWareFsLoader *loader, CriWareFsBinder *binder, uint32_t id, uint64_t offset, uint64_t loadSize,
                                      LPVOID buffer, uint64_t bufferSize);
CA(uint32_t) criFsLoader_Stop(CriWareFsLoader *loader);
CA(uint32_t) criFsLoader_GetStatus(CriWareFsLoader *loader, _OUT_ uint32_t *status);
CA(uint32_t) criFsLoader_SetReadUnitSize(CriWareFsLoader *loader, uint64_t unitSize);

#endif //CRIWAREUNITYHACK_CRIWARE_FS_LOADER_H
