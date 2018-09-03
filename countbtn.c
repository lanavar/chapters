#include <stdio.h>

/* Program that counts blanks, tabs, and newlines */
main(){
  int blanks, tabs, newlines, total,c;
  blanks=tabs=newlines=total=0;

  while((c = getchar()) != EOF)
    {
      if (c == '\t')
	++tabs;
      else if (c == '\n')
	++newlines;
      else if (c == ' ')
	++ blanks;
    }
  printf("The blanks count is %d \n", blanks);
  printf("The tabs count is %d \n", tabs);
  printf("The newlines total is %d \n", newlines);
  total = blanks + tabs +newlines;
  printf("The total sum is %d\n", total);
  return 0;
}
