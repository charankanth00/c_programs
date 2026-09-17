#include <stdio.h>

int main()
{
  int givennum, lsd, msd, sum;
  printf (" to find the sum of most significant and least significant digit.\n");
  printf ("enter a number: ");
  scanf ("%i", &givennum);
  lsd = givennum % 10;
  printf ("the least significant digit of %i is %i and its most significant digit is ", givennum, lsd);
  while ( givennum > 10 )
  {
    givennum = givennum/10;
  }
  msd = givennum;
  sum = lsd + msd;
  printf ("%i their sum is %i.\n",  msd, sum);
  
  return 0;
}
