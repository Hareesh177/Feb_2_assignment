
//least significant bit

#include<stdio.h>

int main()
{
	int x=29;
	if(x & 1)
		printf("LSB bit is set\n");
	else
		printf("LSB bit is not set\n");
	return 0;
}
