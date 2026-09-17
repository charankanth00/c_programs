#include <stdio.h>

int main()
{
  int tablenumber, counter, multiple;

  printf ("which multiplication table you want me to print? ");
  scanf ("%i", &tablenumber);
  printf ("the multiplication table of %i is \n", tablenumber);
  counter = 0;
  multiple =0;
  while (1)
  {
    counter = counter + 1;
    multiple = tablenumber * counter;
    if ( counter > 20)
    {
      break;
    }
    printf("%2i * %2i = %3i\n", tablenumber, counter, multiple);
  }
  
  return 0;
}
