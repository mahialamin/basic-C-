//minimum & maximum between three number.
#include<stdio.h>
int main()
{
    float n1,n2,n3;
    printf("enter three number:\n");
    scanf("%f%f%f",&n1,&n2,n3);

    if(n1>n2 && n3){
            printf("maximum=%f\n",n1);
    }else if(n2>n1 && n3){
            printf("maximum=%f \n",n2);
    }else{
    printf("maximun=%f",n3);
    }

}

