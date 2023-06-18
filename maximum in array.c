#include<stdio.h>
int main()
{
    int a[7];
    int max =a[0],i;
    printf("enter value:\n");
    for(i=1;i<7;i++){
        scanf("%d",&a[i]);
    }

    for(i= 1;i < 7;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("maximum = %d",max);
return 0 ;
}
