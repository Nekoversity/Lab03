#include <stdio.h>

int main() {
    double f = 1.2, x;
    double *pf;
    pf = &f;
    x = *pf;

    printf("pf=%p; px=%p; f=%f; x=%f\n", pf, &x , f, x);

    f = 1.5;

    printf("pf=%p; px=%p; f=%f; x=%f", pf, &x , f, x);

    return 0;
}
