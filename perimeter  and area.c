//enter two number of rectangle and find the perimeter and area
#include<stdio.h>
int main ()
{
    float l,w,p,a;
    printf("enter length and width:");
    scanf("%f %f",&l,&w);
    p=2*(l+w);
    a=l*w;
    printf("perimeter=%.2f \n",p);
    printf("area=%.2f",a);
    return 0;
}

