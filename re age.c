#include<stdio.h>
int main()
{
    int age;
    printf("enter the value of age:");
    scanf("%d",&age);
    if(age<3){printf("child");
    }else if(age<10){printf("kids");
    }else if(age>=10 && age <=20){printf("teenage");
    }else if(age>=20 && age <= 25){printf("adult");
    }else if(age >=26 &&age <=30){printf("man");
}
else{ printf("old ");

}
return 0 ;
}
