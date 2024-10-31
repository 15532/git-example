#include<stdio.h>

int main()
{
    int a[18]={0,0,3,0,0,0,0,0,0,0,0,0,0,14,15,16,0,18};
    int n,m,p;
    scanf("%d",&n);
    if(n==1)
    {
        scanf("%d",&m);
        printf("%d ",a[m-1]);
        printf("%d ",a[m-1]);
        printf("%d",a[m-1]);
    }
    else
    {
        int x=-1,y=0,z=0;
        scanf("%d",&m);
        x=a[m-1];y=a[m-1];z=a[m-1];
        for(int i=1; i<=n-1; i++)
        {
            scanf("%d",&m);
            x&=a[m-1];
            y|=a[m-1];
            z^=a[m-1];
        }
        printf("%d ",x);
        printf("%d ",y);
        printf("%d",z);
    }
    return 0;
}