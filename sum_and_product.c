#include <stdio.h>

int main()
{
  int sum, product, num1, num2, checkingval;
  printf ("take any two positive numbers then tell me sum and product of two numbers. I will find the actuval two numbers.\n");
  printf ("eneter the sum of two numbers: ");
  scanf ("%d", &sum);
  printf ("enter the product of two numbers: ");
  scanf ("%d", &product);
  num1=0;
  num2=sum;
  checkingval=0;
  while ( checkingval != product )
  {
    num1 = num1 + 1;
    num2 = num2 - 1;
    checkingval = num1 * num2 ;
  }
  printf ("the actuval two numbers are %i and %i these numbers sum is %i and the product is %i.\n", num1, num2, sum, product);

 return 0;
}
