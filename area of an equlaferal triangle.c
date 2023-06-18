//area of an equlaferal triangle
#include<stdio.h>
int main()
{
    float a,area;
    printf("enter the side of triangle:");
    scanf("%f",&a);
    area=(sqrt(3)/4)*(a*a);
    printf("area=%f",area);
    return 0 ;
}

