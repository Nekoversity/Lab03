#include "stdafx.h"

#define BUFFER_SIZE 100
#define ARR_MAX 2000
#define ARR_MIN -1000

int array_init()
{
    int buffer[BUFFER_SIZE];

    for (int i = 0; i < sizeof(buffer)/sizeof(int); ++i)
    {
        buffer[i] = rand() % (ARR_MAX - ARR_MIN + 1) + ARR_MIN;
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

int find_min_max()
{
    srand(time(NULL));

    int a[BUFFER_SIZE];

    INIT_ARRAY(a, BUFFER_SIZE, rand() % (ARR_MAX - ARR_MIN + 1) + ARR_MIN)

    int min, max = a[0];

    for (int i = 0; i < BUFFER_SIZE; ++i)
    {
        if (*(a + i) > max)
            max = *(a + i);
        else if (*(a + i) < min)
            min = *(a + i);
    }

    printf("Min: %d; Max: %d\n", min, max);
    return 0;
}

int find_index()
{
    srand(time(NULL));
    int a[20], size = 20, min = -10, max = 10, num = 8, index = -1;

    INIT_ARRAY(a, size, rand() % (max - min + 1) + min)

    printf("Searching %d array index...\n", num);

    for (int i = 0; i < size; ++i)
    {
        if (*(a + i) == num)
        {
            index = i;
            break;
        }
    }

    if (index >= 0)
        printf("Index of %d is %d\n", num, index);
    else
        printf("Number %d was not found in created array.\n", num);

    return 0;
}

int bubble_sort()
{
    srand(time(NULL));

    int a[15], size = 15, min = 0, max = 100, changed = 0, tmp;

    INIT_ARRAY(a, size, rand() % (max - min + 1) + min)

    PRINT_ARRAY(a, size)

    do {
        changed = 0;

        for (int i = 0; i < (size - 1); ++i)
        {
            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;

                ++changed;
            }
        }
    } while(changed);

    PRINT_ARRAY(a, size)

    return 0;
}

int binary_search()
{
    srand(time(NULL));

    int a[20], size = 20, min = 0, max = 20, num = 8;

    INIT_ARRAY(a, size, rand() % (max - min + 1) + min)

    // Array sorting
    int changed = 0, tmp;
    do {
        changed = 0;

        for (int i = 0; i < (size - 1); ++i)
        {
            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;

                ++changed;
            }
        }
    } while(changed);

    PRINT_ARRAY(a, size)

    int lc = 0, rc = size - 1, m_found = 0, mid;

    while ((lc <= rc) && !m_found)
    {
        mid = (lc + rc) / 2;

        if (a[mid] == num)
            m_found = 1;
        if (a[mid] > num)
            rc = mid - 1;
        else
            lc = mid + 1;
    }

    if (m_found)
        printf("\n\nIndex of %d is %d\n", num, mid);
    else
        printf("\n\nNumber %d not found in array\n", num);

    return 0;
}

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

int float_matrix()
{
    srand(time(NULL));

    int m = 10, n = 10;
    double a[m][n], min = 0.0, max = 20.0;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j) {
            a[i][j] = fRand(min, max);
        }
    }
    for (int i = 0; i < m; ++i)
    {
        printf("\n");
        for (int j = 0; j < n; ++j)
        {
            printf("%.3f\t", a[i][j]);
        }
    }

    double fmin = a[0][0], fmax = a[0][0];
    int ifminm, ifminn, ifmaxm, ifmaxn;

    printf("\n\n");

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j] > fmax)
            {
                fmax = a[i][j];
                ifmaxm = i; ifmaxn = j;
            }
            else if (a[i][j] < fmin)
            {
                fmin = a[i][j];
                ifminm = i; ifminn = j;
            }
        }
    }

    printf("Min: a[%d, %d] = %.3f;\nMax: a[%d, %d] = %.3f;\n",
           ifminm, ifminn, fmin, ifmaxm, ifmaxn, fmax);

    return 0;
}

int main()
{
    float_matrix();
    return 0;
}
