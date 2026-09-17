#include <stdio.h>

int main()
{
  int count, evennumber, evencounter;

  printf ("how many even numbers you want me to print? ");
  scanf ("%i", &count);
  evennumber = 0;
  printf ("the %i even number are %i", count, evennumber);
  evencounter = 0;
  while (evencounter < count )
  {
    evennumber = evennumber + 2;
    printf (", %i", evennumber);
    evencounter = evencounter + 1;
  }
  printf (".\n");

  return 0;
}


