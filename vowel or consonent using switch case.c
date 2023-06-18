#include<stdio.h>
int main ()
{
    char ch;
    printf("enter any alphabet:");
    scanf("%c",ch);
    switch(ch){
/*case 'a':
    printf("vowel");
    break;
case 'e':
    printf("vowel");
    break;
case 'i':
    printf("vowel");
    break;
case 'o':
    printf("vowel");
    break;
case 'u':
    printf("vowel");
    break;
default:
    printf("consonent");
    } */
    // or
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("vowel");
default:
    printf("consonent");
}
    return 0 ;
}
