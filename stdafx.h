#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define INIT_ARRAY(arr, size, init_func) \
{                                        \
    int i;                               \
    for (i = 0; i < size; ++i)           \
    {                                    \
        a[i] = init_func;                \
    }                                    \
}

#define PRINT_ARRAY(arr, size)  \
{                               \
    int i;                      \
    for (i = 0; i < size; ++i)  \
    {                           \
        if (i % 10 == 0) printf("\n");\
        printf("%d\t", arr[i]); \
    }\
}
