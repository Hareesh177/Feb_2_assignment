// get nth bit of a number

#include <stdio.h>

int getbit(int val,int pos);

void main(){
    int value=0xffff0000,pos;
    printf("enter the nth bit:");
    scanf("%d",&pos);
    printf("The value after getbit is %x",getbit(value,pos));
}

int getbit(int val,int pos){
    val=(val>>pos)&1;
    return val;
}
