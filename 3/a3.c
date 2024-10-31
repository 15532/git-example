#include<stdio.h>

int main(void)
{
    int m,n,d,a=1,b=1;
    scanf("%d %d",&m,&n);

    if(n==1)
    d=7;
    else
    d=n-1;

    while (a<=m)
    {
        for(int j=1; j<=7; j++)
        {
        if(b==1)
        {
            if(j<d)
            printf("  ");
            else
            {printf("%2d",a);
            a++;}

            if(j!=7)
            printf("  ");
        }
        else
        {
            printf("%2d",a);

            if(a==m)
            return 0;

            if(j!=7)
            printf("  ");
            a++;
        }
        
        }
        printf("\n");
        b++;
    }


    return 0;
}

/*    1   2   3   4   5   6
 7   8   9  10  11  12  13
14  15  16  17  18  19  20
21  22  23  24  25  26  27
28  29  30  31*/