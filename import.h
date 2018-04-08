#ifndef GLUG_LIB_API

  #if defined (WIN32) || defined (_WIN32) || defined (WIN64) || defined (_WIN64)

    #define GLUG_LIB_API __declspec (dllimport)

  #elif defined (__linux__)

    #define GLUG_LIB_API __attribute__ ((visibility ("default")))

  #elif defined (__APPLE__) && defined (__MACH__)
    #include <TargetConditionals.h>

    #if TARGET_OS_MAC == 1

      #define GLUG_LIB_API __attribute__ ((visibility ("default")))

    #endif

  #endif

#endif // GLUG_LIB_API
