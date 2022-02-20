// clear nth bit of a number

#include <stdio.h>

int clearbit(int val,int pos);

void main(){
    int value=0xffffffff,pos;
    printf("enter the nth bit:");
    scanf("%d",&pos);
    printf("The value after clearbit is %x",clearbit(value,pos));
}

int clearbit(int val,int pos){
    val=val&~(1<<pos);
    return val;
}
