//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_FS_INSTALLER_H
#define CRIWAREUNITYHACK_CRIWARE_FS_INSTALLER_H

#include "criware_common.h"

struct CriWareFsInstaller;
struct CriWareFsBinder;

CA(void) criFsInstaller_ExecuteMain();
CA(uint32_t) criFsInstaller_Create(_OUT_ CriWareFsInstaller **installer, uint32_t option);
CA(uint32_t) criFsInstaller_Destroy(CriWareFsInstaller *installer);
CA(uint32_t) criFsInstaller_Copy(CriWareFsInstaller *installer, CriWareFsBinder *binder, LPCSTR srcPath, LPCSTR dstPath,
                                     LPVOID buffer, uint64_t bufferSize);
CA(uint32_t) criFsInstaller_Stop(CriWareFsInstaller *installer);
CA(uint32_t) criFsInstaller_GetStatus(CriWareFsInstaller *installer, _OUT_ uint32_t *status);
CA(uint32_t) criFsInstaller_GetProgress(CriWareFsInstaller *installer, _OUT_ float *progress);

#endif //CRIWAREUNITYHACK_CRIWARE_FS_INSTALLER_H
