#include <stdio.h>
#include <math.h>

int main()
{
  int givennum, count, counter, check;

  printf("to check given number is prime or not.\n enter a number: ");
  scanf ("%i", &givennum);
  counter =2;
  check =0;
  while ( counter * counter  <= givennum)
  {
    if ( ( givennum % counter)== 0 )
    {
      printf (" %i is not a prime number.\n", givennum);
      check =1;
      break;
    }
    counter = counter + 1;
  }
  if ( check != 1)
  {
    printf ( "%i is a prime number.\n", givennum);
  }

  return 0;
}
