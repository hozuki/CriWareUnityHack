//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

CriWareAtomEx3dSource *criAtomEx3dSource_Create(CriWareAtomEx3dSourceConfig *config, LPVOID work, uint32_t workSize) {
    CR(criAtomEx3dSource_Create,
                 config, work, workSize);
    return nullptr;
}

void criAtomEx3dSource_Destroy(CriWareAtomEx3dSource *source) {
    CR(criAtomEx3dSource_Destroy,
                 source);
}

void criAtomEx3dSource_Update(CriWareAtomEx3dSource *source) {
    CR(criAtomEx3dSource_Update,
                 source);
}

void criAtomEx3dSource_ResetParameters(CriWareAtomEx3dSource *source) {
    CR(criAtomEx3dSource_ResetParameters,
                 source);
}

void criAtomEx3dSource_SetPosition(CriWareAtomEx3dSource *source, CriWareAtomExVector *position) {
    CR(criAtomEx3dSource_SetPosition,
                 source, position);
}

void criAtomEx3dSource_SetVelocity(CriWareAtomEx3dSource *source, CriWareAtomExVector *velocity) {
    CR(criAtomEx3dSource_SetVelocity,
                 source, velocity);
}

void criAtomEx3dSource_SetOrientation(CriWareAtomEx3dSource *source, CriWareAtomExVector *front, CriWareAtomExVector *top) {
    CR(criAtomEx3dSource_SetOrientation,
                 source, front, top);
}

void criAtomEx3dSource_SetConeParameter(CriWareAtomEx3dSource *source, float insideAngle, float outsideAngle, float outsideVolume) {
    CR(criAtomEx3dSource_SetConeParameter,
                 source, insideAngle, outsideAngle, outsideVolume);
}

void criAtomEx3dSource_SetMinMaxDistance(CriWareAtomEx3dSource *source, float minDistance, float maxDistance) {
    CR(criAtomEx3dSource_SetMinMaxDistance,
                 source, minDistance, maxDistance);
}

void criAtomEx3dSource_SetDopplerFactor(CriWareAtomEx3dSource *source, float dopplerFactor) {
    CR(criAtomEx3dSource_SetDopplerFactor,
                 source, dopplerFactor);
}

void criAtomEx3dSource_SetVolume(CriWareAtomEx3dSource *source, float volume) {
    CR(criAtomEx3dSource_SetVolume,
                 source, volume);
}

void criAtomEx3dSource_SetMaxAngleAisacDelta(CriWareAtomEx3dSource *source, float maxDelta) {
    CR(criAtomEx3dSource_SetMaxAngleAisacDelta,
                 source, maxDelta);
}
