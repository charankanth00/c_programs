#include <stdio.h>

int main()
{
  int count, counter;
  printf (" up to which number you want to print odd numbers? ");
  scanf ("%i", &count);
  counter = 1;
  printf ("the odd number up to %i are ", count);
  while ( counter <= count )
  {
    printf (", %i", counter);
    counter = counter + 2;
  }
  printf (".\n");

  return 0;
}
