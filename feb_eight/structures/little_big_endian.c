//little endian or big endian

#include <stdio.h>

void main(){
    int a=0x12345678;
    char b=(char)a;
    if(b==0x78)
    printf("The machine is little endian\n");
    else
    printf("The machine is big endian\n");
}
