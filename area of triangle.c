//enter base and height of a triangle and find out it's area
#include<stdio.h>
int main()
{
    float b,h,a;
    printf("enter base and height:");
    scanf("%f%f",&b,&h);
    a=(b*h)/2;
    printf("area:%.2f",a);
   return 0;
}
