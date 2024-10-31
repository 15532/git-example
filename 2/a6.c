#include <stdio.h>

int main()
{
    int n, m, i;
    scanf("%d", &n);
    m = n;
    for (i = 0; n > 1; i++)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;

        if (m < n)
            m = n;
    }

    printf("%d %d", i, m);

    return 0;
}