// toggle nth bit of a number

#include <stdio.h>

int togglebit(int val,int pos);

void main(){
    int value=0xffff0000,pos;
    printf("enter the nth bit:");
    scanf("%d",&pos);
    printf("The value after togglebit is %x",togglebit(value,pos));
}

int togglebit(int val,int pos){
    val=val^(1<<pos);
    return val;
}
