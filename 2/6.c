#include<stdio.h>

int main()
{
    int n,m,x=0;
    int a[100000]={0};//big le
    
    scanf("%d",&n);
    for(int i=0;i <= n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    m=a[0];
    for(int j=1;j <= n;j++)
    {
        if(m<j)
        {
            x=x+j-m;
            m=j;
        }
        m=m+a[j];
    }

    printf("%d",x);

    return 0;

}