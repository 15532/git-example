#include<stdio.h>

char a[2002][2002];
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    scanf("%s",a[0]);

    for(int i=n-1; i>=0; i--)
    {
        a[0][i+1]=a[0][i];
    }
    for(int i=0; i<m; i++)
    {
        a[i][0]='0';
        a[i][n+1]='0';
    }

    for(int i=1; i<m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((a[i-1][j-1]=='1' && a[i-1][j]=='1' && a[i-1][j+1]=='1')
            ||(a[i-1][j-1]=='1' && a[i-1][j]=='0'&& a[i-1][j+1]=='0')
            ||(a[i-1][j-1]=='0' && a[i-1][j]=='0' && a[i-1][j+1]=='0'))
            a[i][j]='0';
            else
            a[i][j]='1';
        }
    }
    for(int i=1; i<m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}