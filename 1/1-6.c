#include <stdio.h>

int main(void)
{
    double p, l, t, n;
    scanf("%lg %lg %lg", &p, &l, &t);
    n = (l * l * l * p) / 8.314 / t;
    printf("%.4e", n);

    return 0;
}