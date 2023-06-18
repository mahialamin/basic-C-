//celcius to fahrenheit
#include<stdio.h>
int main()
{
    float c,b,f;
    printf("entere tempreture in celsius:");
    scanf("%f",&c);
    b=c*1.8;
    f=b+32;
    printf("tempherature in fahrenheit:%.2f",f);
     return 0 ;
}
