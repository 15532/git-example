#include<stdio.h>

int main()
{
    int n,m;
    int a[500][500];
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1; i<=n*m/2; i++)
    {
        int oi[2],oj[2];
        int p=0;
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
                if(a[j][k]==i)
                {
                    oi[p]=j;oj[p]=k;p++;
                }
            }
        }
        //zuoyou
        int z0=1,z1=1,y0=1,y1=1;
        if(oj[0]>0)
        {
            for(int j=oj[0]-1; j>=0; j--)
            {
                if(a[oi[0]][j]!=0)
                {z0=0;break;}
            }
        }
        if(oj[1]>0)
        {
            for(int j=oj[1]-1; j>=0; j--)
            {
                if(a[oi[1]][j]!=0)
                {z1=0;break;}
            }
        }
        if(z0==1 && z1==1)
        {
            printf("%d ",i);
            a[oi[0]][oj[0]]=0;
            a[oi[1]][oj[1]]=0;
            continue;
        }

        if(oj[0]<m-1)
        {
            for(int j=oj[0]+1; j<=m-1; j++)
            {
                if(a[oi[0]][j]!=0)
                {y0=0;break;}
            }
        }
        if(oj[1]<m-1)
        {
            for(int j=oj[1]+1; j<=m-1; j++)
            {
                if(a[oi[1]][j]!=0)
                {y1=0;break;}
            }
        }
        if(y0==1 && y1==1)
        {
            printf("%d ",i);
            a[oi[0]][oj[0]]=0;
            a[oi[1]][oj[1]]=0;
            continue;
        }

        //shangxia
        int s0=1,s1=1,x0=1,x1=1;
        if(oi[0]>0)
        {
            for(int k=oi[0]-1; k>=0; k--)
            {
                if(a[k][oj[0]]!=0)
                {s0=0;break;}
            }
        }
        if(oi[1]>0)
        {
            for(int k=oi[1]-1; k>=0; k--)
            {
                if(a[k][oj[1]]!=0)
                {s1=0;break;}
            }
        }
        if(s0==1 && s1==1)
        {
            printf("%d ",i);
            a[oi[0]][oj[0]]=0;
            a[oi[1]][oj[1]]=0;
            continue;
        }

        if(oi[0]<n-1)
        {
            for(int k=oi[0]+1; k<=n-1; k++)
            {
                if(a[k][oj[0]]!=0)
                {x0=0;break;}
            }
        }
        if(oi[1]<n-1)
        {
            for(int k=oi[1]+1; k<=n-1; k++)
            {
                if(a[k][oj[1]]!=0)
                {x1=0;break;}
            }
        }
        if(x0==1 && x1==1)
        {
            printf("%d ",i);
            a[oi[0]][oj[0]]=0;
            a[oi[1]][oj[1]]=0;
            continue;
        }
    }

    return 0;
}