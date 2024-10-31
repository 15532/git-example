#include<stdio.h>
#include<stdlib.h>

int main()
{
    int xa,ya,xb,yb,xc,yc;
    scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xc,&yc);
    int xl=abs(xa-xb),yl=abs(ya-yb);

    int r,c;
    //1234 duiying timu
    if(xa>xb)
    r=3;
    else if(xa<xb)
    r=4;
    else
    r=0;

    if(ya>yb)
    c=2;
    else if(ya<yb)
    c=1;
    else
    c=0;

    if(r!=0 && c!=0)
    {
        printf("%d\n",xl+yl);//jideigai
        if(ya==yc || xb==xc)
        {//xian su
            for(int i=1; i<=yl; i++)
            {
                if(c==1)
                printf("U");
                else
                printf("D");
            }
            for(int i=1; i<=xl; i++)
            {
                if(r==3)
                printf("L");
                else
                printf("R");
            }
        }
        else
        {
            for(int i=1; i<=xl; i++)
            {
                if(r==3)
                printf("L");
                else
                printf("R");
            }
            for(int i=1; i<=yl; i++)
            {
                if(c==1)
                printf("U");
                else
                printf("D");
            }
        }
    }
    else if(r==0)//tong c
    {
        if(xa==xc && ((ya>yc && yc>yb)||(ya<yc && yc<yb) ))
        {
            printf("%d\n",yl+2);
            printf("R");
            for(int i=1; i<=yl; i++)
            {
                if(c==1)
                printf("U");
                else
                printf("D");
            }
            printf("L");
        }
        else
        {
            printf("%d\n",yl);
            for(int i=1; i<=yl; i++)
            {
                if(c==1)
                printf("U");
                else
                printf("D");
            }
        }

    }
    else //tong r
    {
        if(ya==yc &&((xa>xc && xc>xb)||(xa<xc && xc<xb)))
        {
            printf("%d\n",xl+2);
            printf("U");
            for(int i=1; i<=xl; i++)
            {
                if(r==3)
                printf("L");
                else
                printf("R");
            }
            printf("D");
        }
        else
        {
            printf("%d\n",xl);
            for(int i=1; i<=xl; i++)
            {
                if(r==3)
                printf("L");
                else
                printf("R");
            }
        }
    }

    return 0;
}