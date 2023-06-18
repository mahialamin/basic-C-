//leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("enter year:");
    scanf("%d",&year);
    if(year %400==0 || year %4 ==0){
        printf("leap year");}
    else if(year % 100==0){
    printf("not leap year");}
    else
        printf("common year");
    return 0;
}
