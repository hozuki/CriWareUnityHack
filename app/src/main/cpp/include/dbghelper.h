//
// Created by MIC on 2017-06-29.
//

#ifndef CRIWAREUNITYHACK_DBGHELPER_H
#define CRIWAREUNITYHACK_DBGHELPER_H

#include <android/log.h>

static inline void DEBUG_LOG(const char *fmt, ...) {
    va_list arg_ptr;
    va_start(arg_ptr, fmt);
    __android_log_vprint(ANDROID_LOG_INFO, "fakecri", fmt, arg_ptr);
    va_end(arg_ptr);
}

#endif //CRIWAREUNITYHACK_DBGHELPER_H
