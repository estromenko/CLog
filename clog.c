#include "clog.h"

#include <stdio.h>
#include <stdlib.h>


static CLogLevel levels[4] = {};
static int len = 0;


static const char *colors[4] = {
    "\033[1;33m[DEBUG] %s\033[0m\n", 
    "\033[1;32m[INFO] %s\033[0m\n", 
    "\033[1;31m[ERROR] %s\033[0m\n", 
    "\033[1;31m[FATAL] %s\033[0m\n",
};


extern void clog_add_level(CLogLevel level) {
    levels[len++] = level;
}

extern void clog_remove_level(CLogLevel level) {
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            for (int j = i - 1; j < len - 1; j++) {
                levels[j] = levels[j + 1]; 
            }
            len--;
            break;
        }
    }
}

extern void clog_print(CLogLevel level, char* data) {
    for (int i = 0; i < len; i++) {
        if (level == levels[i]) {
            printf(colors[levels[i]], data);
            if (level == CLogFatalLevel) {
                exit(1);
            }
            break;
        }
    }
}
