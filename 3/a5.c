#include<stdio.h>
#include<math.h>

int main(void)
{
    int len,n,p=0,m=0;
    char s[31];
    scanf("%d %d",&len,&n);
    scanf("%s",s);
    //printf("%d %d",len,n);
    //printf("%c",s[0]);

    for(int i=len-1; i>=0 ;i--)
    {
        int a;

        if (s[i]<='9')
        {
            if(s[i]-'0'>n-1)
            {printf("Error");
            return 0;}
            else 
            a=s[i]-'0';
        }
        else
        {
            if(s[i]-'A'>n-11)
            {printf("Error");
            return 0;}
            else
            a=s[i]-'A'+10;
        }


        p=p+a*pow(n,m);
        m++;
    }
    printf("%d",p);


    return 0;
}