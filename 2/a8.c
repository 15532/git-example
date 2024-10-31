#include <stdio.h>

int main()
{
    long long int n, m=1, x = 0;
    scanf("%lld", &n);

    for(int i=1 ;i<=n ;i++)
    {
        m=(m*i)%1000000007;
        x=x+m;
    }

    printf("%d", x % 1000000007);

    return 0;
}