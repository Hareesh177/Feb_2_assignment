//most significant bit

#include<stdio.h>

int main()
{
	int x=0xff00aa00;
	if(x & 0x80000000)
		printf("MSB bit is set\n");
	else
		printf("MSB bit is not set\n");
	return 0;
}
