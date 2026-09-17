#include <stdio.h>

int main()
{
  int givennum1, givennum2, sum, msv1, msv2, findmsv;

  printf (" enter the first number : ");
  scanf ("%i", &givennum1);
  printf ("enter the second number: ");
  scanf ("%i", &givennum2);
  sum = 0;
  findmsv = givennum1;
  while ( findmsv > 10 )
  {
    findmsv = findmsv /10;
    if ( sum == 0 )
    {
      if (findmsv <= 9 )
      {
        sum = findmsv;
        findmsv = givennum2;
      }
    }
  }
  msv1 = sum;
  msv2 = findmsv;
  sum = msv1 + msv2;
  printf ("the sum of most significant digits are %i and %i is %i.\n", msv1, msv2, sum);

  
  return 0;
}
