#include<stdio.h>

int main()
{
    int n,k,m=0,l,j=1;
    int next[501];
    int s[501]={0};
    scanf("%d %d",&n,&k);
    l=n;//left p

    for(int i=1; i<n; i++)
    {
        next[i]=i+1;
    }
    next[n]=1;

    while(l>1)
    {
        while(s[j-1]!=0)//siren
        {
            j=next[j];
        }

        m++;
        if(m==k)
        {
            s[j-1]=1;
            l--;
            m=0;
        }
        j=next[j];
    }

    for(int i=0; i<n; i++)
    {
        if(s[i]==0)
        {
            printf("%d",i+1);
            break;
        }
    }

    return 0;
}