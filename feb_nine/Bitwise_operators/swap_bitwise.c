// swaping two numbers using bitwise operators.

#include <stdio.h>

void main(){
    int a,b;
    printf("enter the a and b values:");
    scanf("%d %d",&a,&b);
    printf("Before sapping a = %d and b = %d\n",a,b);
    a^=b^=a^=b;
    printf("After sapping  a = %d and b = %d\n",a,b);
}
