#include<stdio.h>

int main()
{
    int a,b,n=0;
    scanf("%d %d",&a,&b);
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",~a);
    printf("%d\n",a<<b);
    printf("%d\n",a>>b);
    printf("%d\n",(a>>b)&1);
    while(a)
    {
        n += a&1;
        a>>=1;
    }
    printf("%d",n);

    return 0;
}