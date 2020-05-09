#ifndef GLUG_ALLOCATOR_H
#define GLUG_ALLOCATOR_H

#include <stddef.h>

typedef void *(*glug_malloc_t) (size_t nbytes);
typedef void  (*glug_free_t)   (void *block);

struct glug_allocator
{
    glug_malloc_t  malloc;
    glug_free_t    free;
};

#ifdef GLUG_USE_TYPEDEFS
    typedef struct glug_allocator glug_allocator_t;
#endif

#endif // GLUG_ALLOCATOR_H
