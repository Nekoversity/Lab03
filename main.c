#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int array_init()
{
    int buffer[BUFFER_SIZE];
    int max = 100, min = -150;

    for (int i = 0; i < sizeof(buffer)/sizeof(int); ++i)
    {
        buffer[i] = rand() % (max - min + 1) + min;
    }

    for (int i = 0; i < sizeof(buffer)/sizeof(int); ++i)
    {
        if (i % 10 == 0) printf("\n");
        printf("%d ", buffer[i]);
    }

    return 0;
}

int main()
{
    return 0;
}
