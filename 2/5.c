#include<stdio.h>

int main()
{
    int a,b,c,n,x=0;//bai shi ge  xiao-da
    scanf("%d",&n);

    while (n != 495)

    {
        a = n/100;
    b = (n%100)/10;
    c = n%10;

    int t;
    if(a>b)
    {
        t=a;a=b;b=t;
    }
    if(a>c)
    {
        t=a;a=c;c=t;
    }
    if(b>c)
    {
        t=b;b=c;c=t;
    }

    int max,min;
    max=c*100+b*10+a;
    min=a*100+b*10+c;
    
    int m=n;
    n=max-min;
    if(m-n>0)
    {
        x=x+m-n;
    }

    }

    printf("%d",x);


    return 0;
}