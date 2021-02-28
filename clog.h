#ifndef CLOG_H
#define CLOG_H


typedef enum CLogLevel {
    CLogDebugLevel,
    CLogInfoLevel,
    CLogErrorLevel,
    CLogFatalLevel,
} CLogLevel;


extern void clog_add_level(CLogLevel level);
extern void clog_remove_level(CLogLevel level);
extern void clog_print(CLogLevel level, char* data);

#endif // CLOG_H