//enter two angle of a triangle and find third angle
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter two angle a & b:");
    scanf("%f%f",&a,&b );
    c=180-(a+b);
    printf("third angle:%f",c);

    return 0 ;
}

