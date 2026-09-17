#include <stdio.h>

int main()
{
  int givennum, count, powerterm, counter;
  
  printf ("up to which number you want to print n power n series? ");
  scanf ("%i", &givennum);
  count = 1;
  printf ("the n power n series up to %i is %i", givennum, count);
  while (count < givennum )
  {
     counter =1;
     powerterm = count;
     while ( counter <= count )
     {
       counter = counter + 1;
       powerterm = powerterm * count;
     }
     printf (", %i", powerterm );
     count = count + 1;
  }
  printf (".\n");

  return 0;
}
