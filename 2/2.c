#include <stdio.h>

int main()
{
    int a[100000] = {0};
    int n, i, x = 0;

    scanf("%d", &n);

    for (i = 0; i < 2 * n - 1; i++)
    {
        scanf("%d", &x);
        a[x]++;
    }

    for (int j = 0; j <= 100000; j++)
    {
        if (a[j] == 1)
        {
            printf("%d", j);
            break;
        }
    }

    return 0;
}