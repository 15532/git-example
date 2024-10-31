#include<stdio.h>

int main()
{
    int n;
    int a[2000]={0};
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((j+1)%i==0)
            {
                if(a[j]==0)
                a[j]=1;
                else
                a[j]=0;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        printf("%d ",i+1);
    } 

    return 0;
}