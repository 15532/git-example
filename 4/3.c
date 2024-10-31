#include <stdio.h>

int main()
{
    int m, n, p;
    int a[100][100];
    int b[100][100];
    scanf("%d %d %d", &m, &n, &p);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}