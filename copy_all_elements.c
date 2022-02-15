#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5,6};
    int i,n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);// coping all elements from array a[] to array b[]
    }
}
