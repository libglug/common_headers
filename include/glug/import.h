#include "os.h"

#ifndef GLUG_LIB_API
    #ifndef GLUG_STATIC
        #if defined(GLUG_OS_WIN)

            #define GLUG_LIB_API __declspec (dllimport)

        #elif defined(GLUG_OS_MAC) || defined(GLUG_OS_LIN) || defined(GLUG_OS_BSD)

            #define GLUG_LIB_API __attribute__ ((visibility ("default")))

        #endif
    #else

        #define GLUG_LIB_API

    #endif // GLUG_STATIC

#endif // GLUG_LIB_API
