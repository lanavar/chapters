# include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/*Print the input one word at a time.  */
main()
{
  int c, state, spacec;

  state = IN;
  spacec = 0;
  while((c = getchar())!=EOF)
    {
      if(c == ' ' || c == '\n' || c== '\t'){
	state = OUT;
	++spacec;
      }
      if ((state == OUT) && (spacec==1)){
	state = IN;
	printf("\n");
      }
      else if (state == OUT)
	state = IN;
      else {
	putchar(c);
	spacec = 0;
      }
    }
  
}
