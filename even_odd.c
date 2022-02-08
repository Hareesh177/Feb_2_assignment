#include <stdio.h>

int main()
{
    int i;
    printf("even numbers are : ");
    for(i=1;i<=100;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    printf("\n\n");
    printf("odd numbers are : ");
    for(i=1;i<=100;i++){
        if(i%2==1){
            printf("%d ",i);
        }
    }

    return 0;
}
