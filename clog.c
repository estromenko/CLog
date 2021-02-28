#include "clog.h"

#include <stdio.h>
#include <stdlib.h>


static CLogLevel level = CLogDebugLevel;

static const char *colors[] = {
    "\033[1;33m[DEBUG] %s\033[0m\n", 
    "\033[1;32m[INFO] %s\033[0m\n", 
    "\033[1;31m[ERROR] %s\033[0m\n", 
    "\033[1;31m[FATAL] %s\033[0m\n",
};


extern void clog_set_level(CLogLevel _level) {
    level = _level;
}

extern void clog_print(CLogLevel input_level, char* data) {
    
    if (input_level == level) {
        printf(colors[level], data);

        if (level == CLogFatalLevel) {
            exit(1);
        }
    }
    

}
