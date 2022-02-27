// sum of all natural numbers from 1 to n:

#include <stdio.h>

int fun(int n)
{
    if(n==1)
    return 1;
    else
    return n + fun(n-1);
}

int main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    printf("Sum of all natural numbers from 1 to %d is %d",n,fun(n));

    return 0;
}

