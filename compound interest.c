#include<stdio.h>
int main()
{
    float principal,time,rate,si,ci;
    printf("enter principal(amount):");
    scanf("%f",&principal);
    printf("enter time:");
    scanf("%f",&time);
    printf("enter rate:");
    scanf("%f",&rate);
    si=(principal*time*rate)/100;
    ci=principal*(1+rate/100)*time;
    printf("simple interest:%.2f \n",si);
    printf("compound intarest:%.2f",ci);
    return 0 ;
}
