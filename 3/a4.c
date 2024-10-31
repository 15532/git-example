#include<stdio.h>
#include<math.h>

int main(void)
{
    int i=0;
    int a[10000]={0};
    int b[10000]={0};
    char s[20000];
    while(scanf("%d %c%c%d",&a[i],&s[2*i],&s[2*i+1],&b[i])!=EOF)
    {
        i++;
    }

    for (int j=0; j<i; j++)
    {
        if(s[2*j]=='+')
        printf("%d",a[j]+b[j]);

        else if(s[2*j]=='-')
        printf("%d",a[j]-b[j]);

        else if(s[2*j]=='*')
        {
            if(s[2*j+1]=='*')
            {
                int d=pow(a[j],b[j]);
                printf("%d",d);
            }
            else
            printf("%d",a[j]*b[j]);

        }

        else if (s[2*j]=='/')
        {
            if(s[2*j+1]=='*')
            {
                double a1=a[j],b1=b[j];
                double f=a1/b1;
                printf("%.3lf",f);
            }
            else
            printf("%d",a[j]/b[j]);
        }

        else if(s[2*j]=='%')
        printf("%d",a[j]%b[j]);

        printf("\n");
    }
    
    return 0;
}