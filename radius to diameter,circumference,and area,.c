//diameter,circuference,area of a radius
#include<stdio.h>
int main()
{
    double r,d,c,a;
    printf("enter radius:");
    scanf("%lf",&r);
    d=2*r;
    c=2*3.1416*r;
    a=3.1416*r*r;
    printf("diameter:%.2lf \n",d);
    printf("circuference:%.2lf \n",c);
    printf("area:%.2lf",a);
    return 0;
}
