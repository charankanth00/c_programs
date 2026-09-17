#include <stdio.h>

int main()
{
  int num1, num2, num3, maxnum;
  printf ("to find the maximum of three numbers.\n");
  printf ("enter the first number: ");
  scanf ("%i", &num1);
  printf ("enter the second number: ");
  scanf ("%i", &num2);
  printf ("enter the third number: ");
  scanf ("%i", &num3);
  maxnum=num1;
  if ( num2 > maxnum)
  {
    maxnum = num2;
  }
  if( num3 > maxnum )
  {
    maxnum = num3;
  }
  printf("the maximum of %i, %i and %i is %i.\n", num1, num2, num3, maxnum);
 
  
  return 0;
}
