#include <stdio.h>

int main()
{
  int givendigit;
  
  printf ("to find most significant value enter a digit: ");
  scanf ("%d", &givendigit);
  while ( givendigit >= 10 )
  {
    givendigit = givendigit /10;
  }
  printf ("the most significant digit is %i.\n", givendigit);

  
  return 0;
}
