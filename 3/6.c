#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int n,b=0,f=0;//fushu
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        f=0;
        char str[16];
        scanf("%s",str);
        int l=strlen(str);
        for(int j=0; j<l; j++)
        {
            if(! isdigit(str[j]) && str[j]!='-')
            {
                printf("Radix Error\n");
                b=1;break;
            }
        }
        if(b==1)
        {b=0;continue;}
        
        int num;
        sscanf(str,"%d",&num);
        //printf("%d",num);
        if(num<0)
        {f=1;num=-num;}

        int three[22]={0};
        int k=1;
        
        do{
            three[k]=num%3;
            k++;
            num=num/3;
        }while(num>0);
        //min wei k-1
        /*for(int m=k-1;m>0;m--)
        {
            printf("%d",three[m]);
        }printf("\n");*/

        for(int m=1; m<=k; m++)
        {
            if(three[m]==2)
            {three[m]=-1;three[m+1]++;}
            if(three[m]==3)
            {three[m]=0;three[m+1]++;}
        }

        if(three[k]==0)
        k--;
        for(int p=0;k>=0;k--)
        {
            if(k==0&&three[k]==0)
            break;
            if(f==0)
            {
                switch (three[k])
                {
                case 0:printf("0");break;
                case 1:printf("1");break;
                default:printf("Z");break;
                }
            }
            else
            {
                switch (three[k])
                {
                case 0:printf("0");break;
                case 1:printf("Z");break;
                default:printf("1");break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}