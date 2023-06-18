#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age < 3){
        printf(" \n");
     }else if(age>=4 && age<10){
       printf("child \n");
    }else if(age >=10 && age<=20){
       printf("teenage \n");
    }else if(age >20 && age< 30){
       printf("adult \n");
    }
    else{
        printf("old");
    }
    return 0;
}
