//area of a triangle
#include <stdio.h>
int main()
{
    double a,area;
    printf("enter the side of a triangle:");
    scanf("%.2f",&a);
    area=(sqrt(3)/4)*(a*a);
    printf("area=%f",area);
    return 0 ;
}
