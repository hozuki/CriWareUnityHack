//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_ATOMEX_LATENCY_ESTIMATOR_H
#define CRIWAREUNITYHACK_CRIWARE_ATOMEX_LATENCY_ESTIMATOR_H

#include "criware_common.h"

struct CriWareAtomExEstimatorInfo;

CA(void) criAtomLatencyEstimator_Initialize_ANDROID();
CA(void) criAtomLatencyEstimator_Finalize_ANDROID();
CA(CriWareAtomExEstimatorInfo *) criAtomLatencyEstimator_GetCurrentInfo_ANDROID();

#endif //CRIWAREUNITYHACK_CRIWARE_ATOMEX_LATENCY_ESTIMATOR_H
