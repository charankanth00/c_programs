#include <stdio.h>

int main()
{
  int num1, num2, smallnum, bignum;
  
  printf ("to find big number out of 2 values.\n");
  printf ("enter the first number:");
  scanf ("%i", &num1);
  printf ("enter the second number: ");
  scanf ("%i", &num2);
  bignum=num2;
  smallnum= num1;
  if ( num1 > num2 )
  {
    bignum = num1;
    smallnum = num2;
  }
  printf ("%i is greater than %i.\n", bignum, smallnum);

  
  return 0;
}
