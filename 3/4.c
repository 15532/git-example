#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1,m; i<=n; i++)
    {
        int max=1;
        int a[50000]={0};
        scanf("%d",&m);

        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[j]);
            if(a[j]>=max)
            max=a[j];
        }
        if(max==a[m-1])
        printf("Yes");
        else
        printf("No");

        printf("\n");
    }

    return 0;
}