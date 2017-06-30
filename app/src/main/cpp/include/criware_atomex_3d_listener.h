//
// Created by MIC on 2017-06-28.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_3D_LISTENER_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_3D_LISTENER_H

#include "criware_common.h"

struct CriWareAtomEx3dListener;
struct CriWareAtomEx3dListenerConfig;
struct CriWareAtomExVector;

CA(CriWareAtomEx3dListener *)criAtomEx3dListener_Create(_REF_ CriWareAtomEx3dListenerConfig *config, LPVOID work, uint32_t workSize);
CA(void) criAtomEx3dListener_Destroy(CriWareAtomEx3dListener *listener);
CA(void) criAtomEx3dListener_Update(CriWareAtomEx3dListener *listener);
CA(void) criAtomEx3dListener_ResetParameters(CriWareAtomEx3dListener *listener);
CA(void) criAtomEx3dListener_SetPosition(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *position);
CA(void) criAtomEx3dListener_SetVelocity(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *velocity);
CA(void) criAtomEx3dListener_SetOrientation(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *front, _REF_ CriWareAtomExVector *top);
CA(void) criAtomEx3dListener_SetDistanceFactor(CriWareAtomEx3dListener *listener, float distanceFactor);
CA(void) criAtomEx3dListener_SetFocusPoint(CriWareAtomEx3dListener *listener, _REF_ CriWareAtomExVector *focusPoint);
CA(void) criAtomEx3dListener_SetDistanceFactorLevel(CriWareAtomEx3dListener *listener, float distanceFactorLevel);
CA(void) criAtomEx3dListener_SetDirectionFactorLevel(CriWareAtomEx3dListener *listener, float directionFactorLevel);

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_3D_LISTENER_H
