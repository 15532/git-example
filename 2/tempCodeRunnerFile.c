#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n,m=0;
    scanf("%d",&n);
    int p[n];
    bool np[n];

    for(int i=2; i<=n; i++)
    {
        if(!np[i])
        {p[m++]=i;}
        for(int j=0; j<m; j++)
        {
            if(p[j]*i>n)
            break;

            np[p[j]*i]=true;

            if(i%p[j]==0)
            break;
        }
    }
    printf("%d",m);

    return 0;
}