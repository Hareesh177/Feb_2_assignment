// set nth bit of a number

#include <stdio.h>

int setbit(int val,int pos);

void main(){
    int value=0x20000000,pos;
    printf("enter the nth bit:");
    scanf("%d",&pos);
    printf("The value after setbit is %x",setbit(value,pos));
}

int setbit(int val,int pos){
    val=val|(1<<pos);
    return val;
}
