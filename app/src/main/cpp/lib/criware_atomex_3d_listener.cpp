//
// Created by MIC on 2017-06-29.
//

#include "../include/criware.h"

CriWareAtomEx3dListener *criAtomEx3dListener_Create(CriWareAtomEx3dListenerConfig *config, LPVOID work, uint32_t workSize) {
    CR(criAtomEx3dListener_Create,
                 config, work, workSize);
    return nullptr;
}

void criAtomEx3dListener_Destroy(CriWareAtomEx3dListener *listener) {
    CR(criAtomEx3dListener_Destroy,
                 listener);
}

void criAtomEx3dListener_Update(CriWareAtomEx3dListener *listener) {
    CR(criAtomEx3dListener_Update,
                 listener);
}

void criAtomEx3dListener_ResetParameters(CriWareAtomEx3dListener *listener) {
    CR(criAtomEx3dListener_ResetParameters,
                 listener);
}

void criAtomEx3dListener_SetPosition(CriWareAtomEx3dListener *listener, CriWareAtomExVector *position) {
    CR(criAtomEx3dListener_SetPosition,
                 listener, position);
}

void criAtomEx3dListener_SetVelocity(CriWareAtomEx3dListener *listener, CriWareAtomExVector *velocity) {
    CR(criAtomEx3dListener_SetVelocity,
                 listener, velocity);
}

void criAtomEx3dListener_SetOrientation(CriWareAtomEx3dListener *listener, CriWareAtomExVector *front, CriWareAtomExVector *top) {
    CR(criAtomEx3dListener_SetOrientation,
                 listener, front, top);
}

void criAtomEx3dListener_SetDistanceFactor(CriWareAtomEx3dListener *listener, float distanceFactor) {
    CR(criAtomEx3dListener_SetDistanceFactor,
                 listener, distanceFactor);
}

void criAtomEx3dListener_SetFocusPoint(CriWareAtomEx3dListener *listener, CriWareAtomExVector *focusPoint) {
    CR(criAtomEx3dListener_SetFocusPoint,
                 listener, focusPoint);
}

void criAtomEx3dListener_SetDistanceFactorLevel(CriWareAtomEx3dListener *listener, float distanceFactorLevel) {
    CR(criAtomEx3dListener_SetDistanceFactorLevel,
                 listener, distanceFactorLevel);
}

void criAtomEx3dListener_SetDirectionFactorLevel(CriWareAtomEx3dListener *listener, float directionFactorLevel) {
    CR(criAtomEx3dListener_SetDirectionFactorLevel,
                 listener, directionFactorLevel);
}
