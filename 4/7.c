#include<stdio.h>

int a[1000][1000]={0};
int b[1000][1000]={0};
int main()
{
    int n,m=2;
    scanf("%d",&n);

    a[0][n/2]=1;
    b[0][n/2]=1;
    for(int i=0,j=n/2;m<=n*n;m++)
    {
        int oi=i;
        int oj=j;
        if(i==0)
        i=n-1;
        else
        i--;

        if(j==n-1)
        j=0;
        else
        j++;

        if(b[i][j]==1)
        {
            a[oi+1][oj]=m;
            i=oi+1;
            j=oj;
            b[i][j]++;
        }
        else
        {
            a[i][j]=m;
            b[i][j]++;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}