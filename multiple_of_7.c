#include <stdio.h>

int main()
{
  int count, counter, multiple;
  
  printf ("how many 9 multiples you want ? ");
  scanf ("%i", &count);
  counter =1;
  printf ("the first %i multiples of 7 are 7 ", count);
  multiple =0;
  while( counter < count )
  {
    counter = counter + 1;
    multiple = counter * 7;
    printf (", %i", multiple);
  }
  printf (".\n");
  
  return 0;
}
