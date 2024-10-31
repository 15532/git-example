#include<stdio.h>

int main()
{
    int n;
    char s[200][200]={0};
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%s",s[i]);
        for(int j=n-1; j>=0; j--)
        {
            s[i][j+1]=s[i][j];
        }
        s[i][0]=0;
    }
    
    int v[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(s[i][j]=='*')
            printf("*");
            else{
            int count=0;
            for(int k=0; k<8; k++)
            {
                int ni=i+v[k][0];
                int nj=j+v[k][1];
                if(s[ni][nj]=='*')
                count++;
            }
            printf("%d",count);
            }
        }
        printf("\n");
    }
    return 0;
}