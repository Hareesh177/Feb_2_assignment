#include<stdio.h>
#include<string.h>

void main()
{
    char str[100]="hareesh",str1[100]="ediga";
    strcat(str,str1);
    printf("The concatenated string is %s\n",str);
    int n=strlen(str);
    printf("length of the string is %d",n);
}
