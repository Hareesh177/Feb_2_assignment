#include <stdio.h>

void main()
{
    double a=360,b=120;
    char choice;
    printf("enter the character:\n");
    scanf("%c",&choice);
    switch(choice){
        case 'a':
        printf("sum is .. %lf",a+b);
        break;
        case 's':
        printf("diff is .. %lf",a-b);
        break;
        default:
        printf("default case- noaction");
    }
}
