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

<font color='yellow'>[DEBUG] 123123 </font>

<font color='red'>[FATAL] FATAL </font>

- ![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) `#f03c15`
- ![#c5f015](https://via.placeholder.com/15/c5f015/000000?text=+) `#c5f015`
- ![#1589F0](https://via.placeholder.com/15/1589F0/000000?text=+) `#1589F0`
