#include <stdio.h>
/* Copies its input to output but changes tab to \t.*/
main()
{
  int c;
  

  while((c = getchar()) != EOF)
    {
      if (c == '\t'){
	 putchar('\\');
	 putchar('t');}
	
      else if (c=='\b'){
	putchar('\\');
	putchar('\b');
      }
      else if (c == '\\'){
	putchar('\\');
	putchar('\\');
      }
      else
 
	    putchar(c);
}
}
