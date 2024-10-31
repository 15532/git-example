#include <stdio.h>

int main(void)
{

    int n;
    int a[5] = {50, 20, 10, 5, 1};
    int b[5];
    scanf("%d", &n);
    int i = 0;

    while (i <= 4)
    {
        b[i] = n / a[i];
        n = n % a[i];
        i++;
    }

    for (int j = 0; j <= 4; j++)
    {
        printf("%d\n", b[j]);
    }

    return 0;
}