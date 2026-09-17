#include <stdio.h>

int main()
{
  int bignum, givennum, counter;
  
  printf ("to find the maximum of ten numbers.\n");
  printf ("enter the first value: ");
  scanf ("%i", &bignum);
  counter = 1;
  while ( counter <= 10 )
  {
    printf ( "enter the next number: ");
    scanf ("%d", &givennum);
    if ( givennum > bignum )
    {
      bignum = givennum;
    }
    counter = counter + 1;
  }
  printf (" the maximum of 10 values is %i.\n", bignum);

  
  return 0;
}
