#include "stdafx.h"
#include "alib.c"

int sam01()
{
    srand(time(NULL));

    int a[20], size = 20, min = 0, max = 25;
    long int sum = 0;

    INIT_ARRAY(a, size, rand() % (max - min + 1) + min)
    PRINT_ARRAY(a, size)

    for (int i = 0; i < size; ++i)
    {
        if (i % 2 != 0) sum += pow(a[1], 2);
    }

    printf("\n\nSum: %ld\n", sum);

    return 0;
}

int sam02()
{
    srand(time(NULL));

    double a[5][5], size = 5, min = 0.0, max = 20.0;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            a[i][j] = fRand(min, max);
        }
    }

    int changed, tmp;
    for (int i = 0; i < size; ++i)
    {
        do {
            changed = 0;
            for (int j = 0; j < (size - 1); ++j)
            {
                if (a[i][j] > a[i][j + 1])
                {
                    tmp = a[i][j];
                    a[i][j] = a[i][j + 1];
                    a[i][j + 1] = tmp;
                    ++changed;
                }
            }
        } while(changed);
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            printf("%.3f\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    sam02();
    return 0;
}
