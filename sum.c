#include <stdio.h>

int main()
{
  int num1, num2, sum;
  printf ("to add two numbers.\n");
  printf ("enter the first number: ");
  scanf ("%i", &num1);
  printf ("enter the second number: ");
  scanf ("%i", &num2);
  sum = num1 +num2;
  printf ("the sum of %i and %i is %i.\n", num1, num2, sum);
  
  return 0;
}
