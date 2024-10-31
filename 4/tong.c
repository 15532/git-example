#include<stdio.h>

int b[250000]={0};
int main()
{
    int n,m;
    int a[500][500];
    int i1[500]={0},i2[500]={0},j1[500]={0},j2[500]={0};
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
            if(b[a[i][j]]==0)
            {
                i1[a[i][j]]=i;
                j1[a[i][j]]=j;
                b[a[i][j]]++;
            }
            else
            {
                i2[a[i][j]]=i;
                j2[a[i][j]]=j;
            }
        }
    }

    for(int i=1; i<=m*n/2; i++)
    {
        printf("%d %d %d %d\n",i1[i],j1[i],i2[i],j2[i]);
    }
    return 0;
}