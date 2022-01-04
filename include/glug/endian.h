#include "os.h"

#define GLUG_ENDIAN_LITTLE 1
#define GLUG_ENDIAN_BIG    2
#define GLUG_ENDIAN_MID_L  3
#define GLUG_ENDIAN_MID_B  4

#if defined(__BYTE_ORDER__)

    #if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__

        #define GLUG_BYTE_ORDER GLUG_ENDIAN_LITTLE

    #elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__

        #define GLUG_BYTE_ORDER GLUG_ENDIAN_BIG

    #elif __BYTE_ORDER__ == __ORDER_PDP_ENDIAN__

        #define GLUG_BYTE_ORDER GLUG_ENDIAN_MID_L

    #endif

#elif GLUG_OS == GLUG_OS_WIN

#elif GLUG_OS == GLUG_OS_OSX

    #include <TargetConditionals.h>
    #if (TARGET_RT_LITTLE_ENDIAN == 1)

        #define GLUG_BYTE_ORDER GLUG_ENDIAN_LITTLE

    #elif (TARGET_RT_BIG_ENDIAN == 1)

        #define GLUG_BYTE_ORDER GLUG_ENDIAN_BIG

    #endif

#elif GLUG_OS == GLUG_OS_LIN

#elif GLUG_OS == GLUG_OS_BSD

#endif
