#include <stdio.h>
#include <math.h>

int main()
{
    double p1, p2;
    p1 = 4 * (4 * atan(1.0 / 5.0) - atan(1.0 / 239.0));
    p2 = log(pow(640320, 3) + 744) / sqrt(163);
    printf("%.15f\n", p1);
    printf("%.15f", p2);

    return 0;
}
