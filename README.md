# CLog
Simple colored logger for C/C++ applications


# Usage
```c
#include "clog.h"


int main() {
    clog_add_level(CLogDebugLevel); // Adding new global level

    clog_print(CLogInfoLevel, "Some random text"); // Won't be printed
    clog_print(CLogDebugLevel, "123123"); // Will be printed

    clog_add_level(CLogFatalLevel);
    clog_remove_level(CLogDebugLevel); // Removing level globally

    clog_print(CLogDebugLevel, "..."); // Won't be printed
    clog_print(CLogFatalLevel, "FATAL"); // Program will exit

    clog_print(CLogFatalLevel, "FATAL2"); // Won't be printed because program finished
    return 0;
}


```
# Output:

[DEBUG] 123123 

[FATAL] FATAL
