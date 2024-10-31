#include<stdio.h>
#include<math.h>

int main()
{
    int n,k;
    double xi[110],ki[30];
    double y[30][110];
    scanf("%d %d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%lf",&xi[i]);
    }
    for(int i=1; i<=n; i++)
    {
        scanf("%lf",&ki[i]);
    }
    for(int i=1; i<=k; i++)
    {
        double p=0,ey=0,vy=0;
        for(int j=1; j<=n; j++)
        {
            p=p+exp(xi[j]/ki[i]);
        }
        for(int j=1; j<=n; j++)
        {
            y[i][j]=exp(xi[j]/ki[i])/p;
            printf("%.3lf ",y[i][j]);
        }
        for(int j=1; j<=n; j++)
        {
            ey+=y[i][j]/n;
        }
        for(int j=1; j<=n; j++)
        {
            vy+=pow((y[i][j]-ey),2)/n;
        }
        printf("%.3lf\n",vy);
    }

    return 0;
}