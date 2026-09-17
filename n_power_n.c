#include <stdio.h>

int main()
{
  int count, counter, squareterm;
  
  printf ("how many square series terms you want to print? ");
  scanf ("%i", &count);
  counter = 1;
  printf ("the first %i terms in the square series are %i", count, counter);
  while ( counter < count )
  {
    counter = counter + 1;
    squareterm = counter * counter;
    printf (", %i", squareterm);
  }
  printf (".\n");

  return 0;
}

