#include<stdio.h>

int main()
{
    int n;
    char s[2001];

    scanf("%d",&n);
    scanf("%s",s);

    for(int i=0,j=n-1; i<n; i++,j--)
    {
        if(s[i]=='?')
        {
            printf("%c",s[j]);
        }
        else
        printf("%c",s[i]);
    }

    return 0;
}