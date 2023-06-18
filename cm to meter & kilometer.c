//cm to meter ,kilometer.
#include<stdio.h>
int main()
{
    float cm,m,k;
    printf("enter length in centimeter:");
    scanf("%f",&cm);
    m=cm/100;
    k=cm/100000;
    printf("lenth in meter:%.2f \n",m);
    printf("length in kilometer:%f",k);
   return 0;
}

