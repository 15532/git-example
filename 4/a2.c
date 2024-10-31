#include<stdio.h>

double x(double a1,double a2,double a3,double b1,double b2,double b3,double c1,double c2,double c3)
{
    double s=a1*(b2*c3-b3*c2)-b1*(a2*c3-a3*c2)+c1*(a2*b3-a3*b2);
    return s;
}

int main ()
{
    double a[3],b[3],c[3],d[3];
    for(int i=0; i<3; i++)
    {
        scanf("%lf %lf %lf %lf",&a[i],&b[i],&c[i],&d[i]);
    }
    double y,y1,y2,y3;
    y=x(a[0],a[1],a[2],b[0],b[1],b[2],c[0],c[1],c[2]);
    y1=x(d[0],d[1],d[2],b[0],b[1],b[2],c[0],c[1],c[2]);
    y2=x(a[0],a[1],a[2],d[0],d[1],d[2],c[0],c[1],c[2]);
    y3=x(a[0],a[1],a[2],b[0],b[1],b[2],d[0],d[1],d[2]);
    printf("%.2lf %.2lf %.2lf",y1/y,y2/y,y3/y);

    return 0;
}