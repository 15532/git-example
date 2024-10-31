#include<stdio.h>

int main()
{
    int n,z;
    char s[1001];
    int m[100]={0};
    scanf("%d",&n);
    scanf("%s",s);


    for(int i=0,a=0; i<n; i++)
    {
        if(s[i]<='Z')
        {
            a=s[i]-'A';
            m[a]++;
        }
        else
        {
            a=s[i]-'a'+26;
            m[a]++;
        }
            //printf("%d",a);
            //printf("%c ",s[i]);
    }

    int max=1;
    for(int i=0; i<52; i++)
    {
        if(m[i]>max)
        max=m[i];
    }

    for(int j=max; j>0; j--)
    {
        z=0;
        for(int p=26; p<52; p++)
        {
            if(m[p]>0)
            {
                if(m[p]>=j)
                {printf("=");z++;}
                else
                {printf(" ");z++;}
            }
            if(m[p-26]>0)
            {
                if(m[p-26]>=j)
                {printf("=");z++;}
                else
                {printf(" ");z++;}
            }

            if(m[p]>0 || m[p-26]>0)
            {printf(" ");z++;}
        }
        printf("\n");
    }//dayin =

    for(int x=1; x<z; x++)
    {
        printf("-");
    }

    printf("\n");

    for(int p=26; p<52; p++)
    {
        if(m[p]>0)
        printf("%c",'a'+p-26);
        if(m[p-26]>0)
        printf("%c",'A'+p-26);
        
        if(m[p]>0 || m[p-26]>0)
        printf(" ");
    }

    return 0;
}