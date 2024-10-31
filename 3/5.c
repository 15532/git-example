#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,b=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int num=0;
        char s[15];
        scanf("%s",s);
        int l=strlen(s);
        int t=l;

        for(int a;l-1>=0;l--)
        {
            if(s[l-1]=='1')
            a=1;
            else if(s[l-1]=='0')
            a=0;
            else if(s[l-1]=='Z')
            a=-1;
            else
            {printf("Radix Error\n");b=1;l--;break;}

            num=num+a*pow(3,t-l);
            //printf("%d\n",num);
        }
        if(b==1)
        b=0;
        else
        {printf("%d\n",num);num=0;}
    }

    return 0;
}