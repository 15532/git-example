#include<stdio.h>

int main()
{
    int n,k;
    char str[1000];
    scanf("%d",&n);
    getchar();
    
    for(int i=0; i<n; i++)
    {
        str[i]=getchar();
    }

    scanf("%d",&k);

    for(int i=k-1 ; i>=0 ; i--)
    {
        printf("%c",str[i]);
    }

    for(int j=n-1 ; j>=k ;j--)
    {
        printf("%c",str[j]);
    }

    return 0;
}
