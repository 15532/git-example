#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0, m, p = 0;
    int a[10];
    scanf("%d", &n);
    m = n;

    for (; n > 0; i++)
    {
        a[i] = n % 10;
        n = n / 10;
    }

    for (int j = 0; j < i; j++)
    {
        p = p + pow(a[j], i);
    }

    if (p == m)
    {
        printf("%d", i);
    }
    else
    {
        printf("0");
    }

    return 0;
}