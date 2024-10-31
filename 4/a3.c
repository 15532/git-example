#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char s[2000];
    char t[2000];
    scanf("%d",&n);
    scanf("%s",s);
    int len=strlen(s);
    for(int i=len-1; i>=0; i--)
    {
        s[i+3]=s[i];
    }
    s[0]='0';s[1]='0';s[2]='0';

for(int k=1; k<=n; k++)
{   memset(t,'.',sizeof(t));
    for(int i=3; i<=len+2; i++)
    {
        int a=0,b=0;
        for(int j=-3; j<=3; j++)
        {
            if(j==0)
            continue;

            if(s[i+j]=='A')
            a++;
            if(s[i+j]=='B')
            b++;
        }

        if(s[i]=='.')
        {
            if(a==0 && b>=2 && b<=4)
            t[i]='B';
            if(b==0 && a>=2 && a<=4)
            t[i]='A';
        }
        if(s[i]=='A')
        {
            if(b!=0 || a<=1 || a>=5)
            t[i]='.';
            else
            t[i]='A';
        }
        if(s[i]=='B')
        {
            if(a!=0 || b<=1 || b>=5)
            t[i]='.';
            else
            t[i]='B';
        }
    }
    strncpy(s,t,len+6);
}
    for(int i=3; i<=len+3; i++)
    {
        s[i-3]=s[i];
    }
    for(int i=0; i<len; i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}