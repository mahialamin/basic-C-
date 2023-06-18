//enter three number and find their average
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the value of a b & c:");
    scanf("%d%d%d ",&a,&b,&c);
    printf("value of A:%d \n",a);
    printf("value of B:%d \n",b);
    printf("value of C:%d \n",c);
    float average;
    average=(a+b+c)/3;
    printf("average=%f",average);
    return 0;
}
