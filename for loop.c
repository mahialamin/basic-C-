// for(initialization;condition;increment/decrement)
// {code to execute }
#include<stdio.h>
int main()
{
/*
int i;
for(i=1;i<=5;i++){
    printf("hi \n");
}

int a;
for(a=1;a<=5;a++){
    printf("%d \n",a);
}
*/
//even
/*
int n;
//for(n=2;n<= 100;n=n+2){
  //  printf("%d \n",n); }

  for(n=10;n<=100;n=n+10){
    printf("%d \n",n);
  }
  // Decriment
  for(n=5;n>=1;n--){
    printf("%d \n",n);
  } *
  for(n=10;n>= -2;n=n-3){
    printf("%d \n",n);
  } *

  for(n=100;n>=0;n=n-10){
    printf("%d  \n",n);

  }  */
int n , sum=0 ;
  for(n=30;n<=120;n++){
  if(n % 3 ==0 && n%5==0){
    sum=sum+n ;
  } }
  printf("summation=%d \n",sum);

return 0;
}
