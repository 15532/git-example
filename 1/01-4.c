#include <stdio.h>

int main()
{
    float m, r, f;
    scanf("%g %g", &m, &r);

    f = 6.674 * 1e-11 * 77.15 * m / (r * r);

    printf("%.3e", f);

    return 0;
}