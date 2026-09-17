#include <stdio.h>

int main()
{
  int multipletable1, multipletable2, counter, multiple1, multiple2;
  printf ("             Table Book \n");
  multipletable1 =1;
  multipletable2 = 2;
  while ( multipletable2 <= 20 )
  {
    counter = 1;
    printf ("the multiplication table of %i and %i\n", multipletable1, multipletable2);
    while (counter <= 20 )
    {
      multiple1 = multipletable1 * counter;
      multiple2 = multipletable2 * counter;
      printf ( "%2i * %2i = %3i \t  %2i * %2i = %3i\n", multipletable1, counter, multiple1, multipletable2, counter, multiple2);
      counter = counter + 1;
    }
    multipletable1 = multipletable1 + 2;
    multipletable2 = multipletable2 + 2;
  }

  return 0;
}

