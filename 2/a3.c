#include <stdio.h>

int main()
{
    unsigned long long int n, k, m;
    scanf("%lld %lld", &n, &k);
    m = n + k;

    if (n % 400 == 0)
        printf("Leap year!\n");
    else if (n % 4 == 0 && n % 100 != 0)
        printf("Leap year!\n");
    else
        printf("Normal year!\n");

    if (m % 400 == 0)
        printf("Leap year!");
    else if (m % 4 == 0 && m % 100 != 0)
        printf("Leap year!");
    else
        printf("Normal year!");

    return 0;
}