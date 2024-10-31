#include <stdio.h>
#include <math.h>

int main(void)
{
    int p, q;
    double x;
    scanf("%d %d", &p, &q);
    double d = pow(q / 2.0, 2) + pow(p / 3.0, 3);

    x = cbrt(-(q / 2.0) + pow(pow(q / 2.0, 2) + pow(p / 3.0, 3), 1.0 / 2.0)) + cbrt(-(q / 2.0) - pow(pow(q / 2.0, 2) + pow(p / 3.0, 3), 1.0 / 2.0));

    printf("%.3f", x);

    return 0;
}