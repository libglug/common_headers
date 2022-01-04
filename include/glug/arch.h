#include "os.h"

#define GLUG_ARCH_X86   1
#define GLUG_ARCH_AMD64 2
#define GLUG_ARCH_ARM   3
#define GLUG_ARCH_ARM64 4

#if GLUG_OS == GLUG_OS_WIN

    #if defined(_M_IX86)

        #define GLUG_ARCH GLUG_ARCH_X86
        #define GLUG_ARCH_BITS 32

    #elif defined(_M_AMD64)

        #define GLUG_ARCH GLUG_ARCH_AMD64
        #define GLUG_ARCH_BITS 64

    #elif defined(_M_ARM)

        #define GLUG_ARCH GLUG_ARCH_ARM
        #define GLUG_ARCH_BITS 32

    #elif defined(_M_ARM64)

        #define GLUG_ARCH GLUG_ARCH_ARM64
        #define GLUG_ARCH_BITS 64

    #endif

#elif GLUG_OS == GLUG_OS_OSX

    #include <TargetConditionals.h>
    #if (TARGET_CPU_X86 == 1)

        #define GLUG_ARCH GLUG_ARCH_X86
        #define GLUG_ARCH_BITS 32

    #elif (TARGET_CPU_X86_64 == 1)

        #define GLUG_ARCH GLUG_ARCH_AMD64
        #define GLUG_ARCH_BITS 64

    #endif

#elif GLUG_OS == GLUG_OS_LIN

#elif GLUG_OS == GLUG_OS_BSD

#endif
