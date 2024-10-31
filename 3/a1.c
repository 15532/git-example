#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        int m=a;
        a=b;
        b=m;
    }

    while(b!=0)
    {
        int t=a;
        a=b;
        b=t%b;
    }

    printf("%d",a);
    return 0;
}