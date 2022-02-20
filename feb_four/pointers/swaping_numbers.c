#include <stdio.h>

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int num1, num2;
  printf("Enter the values of number1 and number2: ");
  scanf("%d %d", &num1,&num2);
  printf("Before Swapping the numbers:\n number1 = %d,\n number2 = %d\n",num1, num2);
  swap(&num1, &num2);
  printf("After Swapping the numbers we have:\n number1 = %d,\n number2 = %d\n",num1, num2);
  return 0;
}
