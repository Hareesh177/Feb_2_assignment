#include<stdio.h>
int main()
{
    int i,sum =0,n;
    for(i=0;i<5;i++)
    {
        printf("add to sum: ");
        scanf("%d",&n);
        if(n<0){
            continue;
        }
        sum = sum+n;
    }
    printf("Sum = %d\n",sum);
    return 0;
}
