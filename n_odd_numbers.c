#include <stdio.h>

int main()
{
  int count, oddnumber, finaloddnumber;

  printf ("how many odd numbers you want me to print? ");
  scanf ("%i", &count);
  oddnumber = 1;
  printf ("the %i odd number are %i", count, oddnumber);
  finaloddnumber = count *2 -1;
  while (oddnumber < finaloddnumber )
  {
    oddnumber = oddnumber + 2;
    printf (", %i", oddnumber);
  }
  printf (".\n");

  return 0;
}
