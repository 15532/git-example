#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    int n, i = 0;

    scanf("%lf %d", &x, &n);
    for (y = 0; i <= n; i++)
    {
        y = pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1) + y;
    }

    printf("%.10lf", y * 4);
}