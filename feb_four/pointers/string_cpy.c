#include <stdio.h>
#include <string.h>

void string_cpy(char *ptr1,char *ptr2)
{
    while(*ptr1!='\0')
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
    return ;
}

int main()
{
    char arr1[15]="Hareesh Ediga",*ptr1,arr2[15],*ptr2;
    ptr1 = arr1;
    ptr2 = arr2;
    string_cpy(ptr1,ptr2);
    printf("The Copied String is :%s\n",ptr2);
    int length=strlen(ptr2);
    printf("Length of the new string is: %d",length);
    return 0;
}
