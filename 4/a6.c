#include<stdio.h>

int main()
{
    int b[60][60]={0};
    int x[2600],y[2600];
    char s[60][60];
    int n,m,x0,y0,l=0;

    scanf("%d %d %d %d",&n,&m,&x0,&y0);
    getchar();
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%c",&s[i][j]);
            if(s[i][j]=='#')
            l++;
        }
        getchar();
    }

    /*for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            printf("%c",s[i][j]);
        }
        printf("\n");
    }*/
    for(int i=1; i<=l; i++)
    {
        int xt=x0,yt=y0;
        x[i]=x0;
        y[i]=y0;
        b[x0][y0]=1;
        if(s[x0-1][y0]=='#' && b[x0-1][y0]==0)
        xt=x0-1;
        if(s[x0+1][y0]=='#' && b[x0+1][y0]==0)
        xt=x0+1;
        if(s[x0][y0-1]=='#' && b[x0][y0-1]==0)
        yt=y0-1;
        if(s[x0][y0+1]=='#' && b[x0][y0+1]==0)
        yt=y0+1;
        x0=xt;
        y0=yt;
    }
    printf("%d\n",l);
    for(int i=1; i<=l; i++)
    {
        printf("%d %d\n",x[i],y[i]);
    }

    return 0;
}