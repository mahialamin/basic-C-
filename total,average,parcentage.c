//enter mark of five subjects and find out total,average, and percentage
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,t;
    printf("enter marks of five subject:");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    t=(n1+n2+n3+n4+n5);
    printf("total=%d \n",t);
    float a,p;
    a=(t)/5;
    p=(t)/100;

    printf("average=%.2f \n",a);
    printf("percentage=%.2f %",p);
    return 0 ;
}

