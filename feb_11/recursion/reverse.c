//Reverse of the  number using recursion

#include<stdio.h>

int sum,rem;
int rev_fun(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      rev_fun(num/10);
   }
   else
      return sum;
   return sum;
}

int main(){
   int num,rev,rev_num;
   printf("\nEnter any number:");
   scanf("%d",&num);
   rev=rev_fun(num);
   printf("\nReverse of the  number is :%d",rev);
   return 0;
}

