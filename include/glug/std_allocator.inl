#include <glug/allocator_t.h>

#include <stdlib.h>

static void *std_alloc(size_t nbytes, void *context)
{
    (void) context;
    return malloc(nbytes);
}

static void *std_realloc(void *block, size_t nbytes, void *context)
{
    (void) context;
    return realloc(block, nbytes);
}

static void std_free(void *block, void *context)
{
    (void) context;
    free(block);
}

static struct glug_allocator std_allocator =
{
    std_alloc,
    std_free,
    NULL
};
