#include<stdio.h>
int main()
{
    char c;
    printf("enter a chacrecter:");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u'){
        printf("it's vowel"); }
        else{
            printf("it is consonent");
        }
    return 0 ;
}
