//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

void criFsInstaller_ExecuteMain() {
    CR(criFsInstaller_ExecuteMain);
}

uint32_t criFsInstaller_Create(CriWareFsInstaller **installer, uint32_t option) {
    CR(criFsInstaller_Create,
       installer, option);
    return 0;
}

uint32_t criFsInstaller_Destroy(CriWareFsInstaller *installer) {
    CR(criFsInstaller_Destroy,
       installer);
    return 0;
}

uint32_t
criFsInstaller_Copy(CriWareFsInstaller *installer, CriWareFsBinder *binder, LPCSTR srcPath, LPCSTR dstPath, LPVOID buffer, uint64_t bufferSize) {
    CR(criFsInstaller_Copy,
       installer, binder, srcPath, dstPath, buffer, bufferSize);
    return 0;
}

uint32_t criFsInstaller_Stop(CriWareFsInstaller *installer) {
    CR(criFsInstaller_Stop,
       installer);
    return 0;
}

uint32_t criFsInstaller_GetStatus(CriWareFsInstaller *installer, uint32_t *status) {
    CR(criFsInstaller_GetStatus,
       installer, status);
    return 0;
}

uint32_t criFsInstaller_GetProgress(CriWareFsInstaller *installer, float *progress) {
    CR(criFsInstaller_GetProgress,
       installer, progress);
    return 0;
}
