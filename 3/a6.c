#include<stdio.h>

int main()
{
    int n,m=0;
    char s[100001];
    scanf("%d",&n);
    scanf("%s",s);
    //printf("%c",s[0]);
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        if(s[i]=='?')
        {
            if(s[j]=='?')
            {
                printf("%.2d",m);
                m++;
            }
            else
            printf("%c",s[j]);
        }
        else
        printf("%c",s[i]);
    }

    m=m-1;

    int i,j;
    if(n%2==0)
    {
        i=n/2;
        j=n/2-1;}
    else
    {
        i=n/2+1;
        j=n/2-1;
        printf("%c",s[n/2]);
    }

    for(; i<=n; i++,j--)
    {
        if(s[i]=='?')
        {
            if(s[j]=='?')
            {
                int b=(m%10)*10+m/10;
                printf("%.2d",b);
                m--;
            }
            else
            printf("%c",s[j]);
        }
        else
        printf("%c",s[i]);
    }    

    return 0;
}




