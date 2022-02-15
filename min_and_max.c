#include<stdio.h>

void main()
{
    int a[]={11,7,9,12,16};
    int i,j,k,temp;
    int n=sizeof(a)/sizeof(a[0]);
    k=n-1;
    for(i=0;i<n-1;i++){
        for(j=0;j<k;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        k--;
    }
    printf("minimum element in the array is %d\n",a[0]);
    printf("maximum element in the array is %d\n",a[n-1]);
}
