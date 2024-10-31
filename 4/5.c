#include<stdio.h>

int main()
{
    int a[9][9];
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<9; i++)
    {
        int n[10]={0};
        for(int j=0; j<9; j++)
        {
            n[a[i][j]]++;
        }
        for(int j=1; j<=9; j++)
        {
            if(n[j]==0)
            {
                printf("NO");
                return 0;
            }
        }
    }

    for(int i=0; i<9; i++)
    {
        int n[10]={0};
        for(int j=0; j<9; j++)
        {
            n[a[j][i]]++;
        }
        for(int j=1; j<=9; j++)
        {
            if(n[j]==0)
            {
                printf("NO");
                return 0;
            }
        }
    }

    for(int i=0; i<=6; i+=3)
    {
        for(int j=0; j<=6; j+=3)
        {
            int n[10]={0};
            for(int k=i; k<i+3; k++)
            {
                for(int p=j; p<j+3; p++)
                {
                    n[a[k][p]]++;
                }
            }
            for(int o=1; o<=9; o++)
            {
                if(n[o]==0)
                {
                    printf("NO");
                    return 0;
                }
            }
        }
    }

    printf("YES");
    return 0;
}