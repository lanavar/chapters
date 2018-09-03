#include <stdio.h>
/* Copies its input to output but changes double space to a single space.*/
main()
{
  int c, blankc;
  blankc = 0;

  while((c = getchar()) != EOF)
    {
      if (blankc == 0)
	{
	  if (c == ' ')
	    ++blankc;
	  putchar(c);
	}
      else {
	if (c != ' ')
	  {
	    blankc = 0;
	    putchar(c);
	  }}}
}
