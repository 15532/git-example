#include <stdio.h>

int a[1000000];
int main()
{
    int n, k, b;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int l = 0, r = n - 1, p = a[k - 1];

    while (l != r)
    {
        b = 0;
        for (; l < r; l++)
        {
            if (a[l] >= p)
                break;
        }
        for (; r > l; r--)
        {
            if (a[r] < p)
            {
                b = 1;
                break;
            }
        }
        if (l != r)
        {
            int t = a[r];
            a[r] = a[l];
            a[l] = t;
        }
    }

    if (b == 0)
    {
        int q = 0;
        for (; q < n; q++)
        {
            if (a[q] == p)
                break;
        }

        int t = a[q];
        a[q] = a[l];
        a[l] = t;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}