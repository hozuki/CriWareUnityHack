//
// Created by MIC on 2017-06-28.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_3D_SOURCE_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_3D_SOURCE_H

#include "criware_common.h"

struct CriWareAtomEx3dSource;
struct CriWareAtomEx3dSourceConfig;
struct CriWareAtomExVector;

CA(CriWareAtomEx3dSource *)criAtomEx3dSource_Create(_REF_ CriWareAtomEx3dSourceConfig *config, LPVOID work, uint32_t workSize);
CA(void) criAtomEx3dSource_Destroy(CriWareAtomEx3dSource *source);
CA(void) criAtomEx3dSource_Update(CriWareAtomEx3dSource *source);
CA(void) criAtomEx3dSource_ResetParameters(CriWareAtomEx3dSource *source);
CA(void) criAtomEx3dSource_SetPosition(CriWareAtomEx3dSource *source, _REF_ CriWareAtomExVector *position);
CA(void) criAtomEx3dSource_SetVelocity(CriWareAtomEx3dSource *source, _REF_ CriWareAtomExVector *velocity);
CA(void) criAtomEx3dSource_SetOrientation(CriWareAtomEx3dSource *source, _REF_ CriWareAtomExVector *front, _REF_ CriWareAtomExVector *top);
CA(void) criAtomEx3dSource_SetConeParameter(CriWareAtomEx3dSource *source, float insideAngle, float outsideAngle, float outsideVolume);
CA(void) criAtomEx3dSource_SetMinMaxDistance(CriWareAtomEx3dSource *source, float minDistance, float maxDistance);
CA(void) criAtomEx3dSource_SetDopplerFactor(CriWareAtomEx3dSource *source, float dopplerFactor);
CA(void) criAtomEx3dSource_SetVolume(CriWareAtomEx3dSource *source, float volume);
CA(void) criAtomEx3dSource_SetMaxAngleAisacDelta(CriWareAtomEx3dSource *source, float maxDelta);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_3D_SOURCE_H
