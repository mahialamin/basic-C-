//day to year,month,week
#include<stdio.h>
int main()
{
    float d,y,m,w;
    printf("enter days:");
    scanf("%f",&d);
    y=d/365;
    m=d/30;
    w=d/7;
    printf("year=%.1f \n",y);
    printf("month=%.2f \n",m);
    printf("week=%.2f \n",w);

    return 0;
}
