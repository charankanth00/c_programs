#include <stdio.h>

int main()
{
  int num1, num2, num3, product;
  printf ("to multipley three numbers.\n");
  printf ("enter the first number: ");
  scanf ("%i", &num1);
  printf ("enter the second number: ");
  scanf ("%i", &num2);
  printf ("enter the third number: ");
  scanf ("%i", &num3);
  product = num1 * num2 * num3;
  printf ("the product of %i, %i and %i is %i.\n", num1, num2, num3, product);

 return 0;
}

