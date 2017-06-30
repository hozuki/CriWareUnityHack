//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

uint32_t criFsLoader_Create(CriWareFsLoader **loader) {
    CR(criFsLoader_Create,
       loader);
    return 0;
}

uint32_t criFsLoader_Destroy(CriWareFsLoader *loader) {
    CR(criFsLoader_Destroy,
       loader);
    return 0;
}

uint32_t criFsLoader_Load(CriWareFsLoader *loader, CriWareFsBinder *binder, LPCSTR path, uint64_t offset, uint64_t loadSize, LPVOID buffer,
                              uint64_t bufferSize) {
    CR(criFsLoader_Load,
       loader, binder, path, offset, loadSize, buffer, bufferSize);
    return 0;
}

uint32_t
criFsLoader_LoadById(CriWareFsLoader *loader, CriWareFsBinder *binder, uint32_t id, uint64_t offset, uint64_t loadSize, LPVOID buffer,
                         uint64_t bufferSize) {
    CR(criFsLoader_LoadById,
       loader, binder, id, offset, loadSize, buffer, bufferSize);
    return 0;
}

uint32_t criFsLoader_Stop(CriWareFsLoader *loader) {
    CR(criFsLoader_Stop,
       loader);
    return 0;
}

uint32_t criFsLoader_GetStatus(CriWareFsLoader *loader, uint32_t *status) {
    CR(criFsLoader_GetStatus,
       loader, status);
    return 0;
}

uint32_t criFsLoader_SetReadUnitSize(CriWareFsLoader *loader, uint64_t unitSize) {
    CR(criFsLoader_SetReadUnitSize,
       loader, unitSize);
    return 0;
}
