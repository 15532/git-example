#include <stdio.h>

int main(void)
{
    int n, a, b, c, m;
    scanf("%d", &n);
    a = n % 10;
    b = n % 100;
    c = n - b;
    m = a * 100 + b - a + c / 100;
    printf("%d", m);

    return 0;
}