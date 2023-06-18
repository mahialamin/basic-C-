#include<stdio.h>
int main()
/*{
    int a[10],i,sum= 0;
    printf("enter the value:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i= 0;i<10;i++){
        sum=sum+a[i];
    }
    printf("total sum of all value:%d",&sum);
return 0 ;
}
*/
{
    int a[5],b[5],ab[5],i;

    printf("enter the value of A: \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value of B: \n");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        ab[i]=a[i]+b[i];
    }
    printf("vale of ab array:%d",&ab[i]);
return 0 ;
}
