#include <stdio.h>

int main()
{
    long long int n, m, x = 0, y;
    scanf("%lld", &n);

    for (int i = 1; i <= n; i++)
    {
        m = 1;
        for (int j = 1; j <= i; j++)
        {
            m = m * (j % 10007);
            m = m % 10007;
        }

        y = m % 10007;
        x = x + y;
    }

    printf("%d", x % 10007);

    return 0;
}