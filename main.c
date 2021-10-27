#include "stdafx.h"

#define BUFFER_SIZE 100

int array_init()
{
    int buffer[BUFFER_SIZE];
    int max = 2000, min = -1000;

    for (int i = 0; i < sizeof(buffer)/sizeof(int); ++i)
    {
        buffer[i] = rand() % (max - min + 1) + min;
    }

    for (int i = 0; i < sizeof(buffer)/sizeof(int); ++i)
    {
        if (i % 10 == 0) printf("\n");
        printf("%d\t", buffer[i]);
    }

    return 0;
}

int array_init_neg()
{
    srand(time(NULL));

    int buffer[BUFFER_SIZE];
    int max = 2000, min = -1000;

    int number_lim = -500, nl_count = 0;

    for (int i = 0; i < sizeof(buffer)/sizeof(int); ++i)
    {
        buffer[i] = rand() % (max - min + 1) + min;
    }

    for (int i = 0; i < sizeof(buffer)/sizeof(int); ++i)
    {
        if (buffer[i] < 0 && buffer[i] > number_lim)
            ++nl_count;
    }

    printf("Total count of numbers (0 > n > -500): %d\n", nl_count);

    return 0;
}



int main()
{

    return 0;
}
