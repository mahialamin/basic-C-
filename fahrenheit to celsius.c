//fahrenheit to celcius
#include<stdio.h>
int main()
{
    float f,c;
    printf("tempharature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("tempherature in celsius:%.2f",c);
    return 0 ;
}
