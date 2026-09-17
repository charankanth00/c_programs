#include <stdio.h>

int main()
{
  int count, counter;
  printf ("how many natural numbers you want me to print? ");
  scanf ("%i", &count);
  printf ("the first %i natural numbers are ?", count);
  counter = 1;
  while ( counter < count )
  {
    printf ("%i, ", counter);
    counter = counter + 1;
  }
  printf ("%i.\n", counter);

  return 0;
}
