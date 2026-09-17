#include <stdio.h>

int main()
{
  int count, counter;
  printf ("up to which number you want to print even numbers? ");
  scanf ("%i", &count);
  counter =0;
  printf ("the even number up to %i are ", count);
  while ( counter <= count )
  {
    printf (", %i", counter);
    counter = counter + 2;
  }
  printf (".\n");

  return 0;
}
