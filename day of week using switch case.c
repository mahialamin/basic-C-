#include<stdio.h>
int main ()
{
    int week;
    printf("enter number of week(1-7):");
    scanf("%d",&week);
    switch(week)

    {
    case 1:
        printf("saturday");
        break;
    case 2:
        printf("sunday");
        break;
    case 3:
        printf("monday");
        break;
    case 4:
        printf("tuesday");
        break;
    case 5:
        printf("wednesday");
        break;
    case 6:
        printf("thusday");
        break;
    case 7:
        printf("friday");
        break ;
    default:
        printf("invalid input .please input a number of day of a week");
    }
    return 0 ;
}
