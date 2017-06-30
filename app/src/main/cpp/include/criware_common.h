//
// Created by MIC on 2017-06-28.
//

#ifndef CRIWAREUNITYHACK_CRIWARE_COMMON_H
#define CRIWAREUNITYHACK_CRIWARE_COMMON_H

#include <jni.h>

#define _OUT_
#define _REF_

typedef void *LPVOID;

typedef const char *LPCSTR;

typedef int32_t bool_t;

#define CA(ret_type) extern "C" JNIEXPORT ret_type JNICALL

#define CAI(ret_type) /*JNIIMPORT*/ ret_type JNICALL

#endif //CRIWAREUNITYHACK_CRIWARE_COMMON_H
