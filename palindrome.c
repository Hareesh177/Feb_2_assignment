#include<stdio.h>

void main()
{
    char a[100];
    printf("Enter the string: ");
    scanf("%s",a);
    int i=0,j=0;
    while(a[j]!='\0'){
        j++;
    }
    j=j-1;
    while(i<j){
        if(a[i]!=a[j]){
            break;
        }
        i++;
        j--;
    }
    if(i>=j){
        printf("The string is palindrome\n");
    }
    else{
        printf("The string is not palindrome\n");
    }
}
