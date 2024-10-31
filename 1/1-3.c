#include <stdio.h>
#include <math.h>

int main(void)
{
    double p1, p2;
    p1 = log(pow(5280, 3) * pow((236674 + 30303 * sqrt(61)), 3) + 744) / sqrt(427);
    p2 = 4 * (6 * atan(1.0 / 8.0) + 2 * atan(1.0 / 57.0) + atan(1.0 / 239.0));

    printf("%.15f\n", p1);
    printf("%.15f", p2);

    return 0;
}