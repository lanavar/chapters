#include <stdio.h>
/* Method for testing the limits of signed and unsigned float, char, int and long. */

int main()
{

  char ch;
  short sh;
  unsigned int in;
  long lo;

  ch = 128;
  sh = 32767;

  /*
  while(ch >0){
    printf("%c \n", ch);
    ch++;
  }
  */
  /*
  while(sh > 0){
    sh++;
    printf("%d \n", sh);
  }
  */

  in = 2147450880;
  /* 
 while(in > 0){
    in *=2;
    printf("%d \n", in);
  }
  printf("%d \n", ch);
  */
 lo = 2147450880;
 while(lo > 0){
  lo++;
  printf("%d \n", lo);
}
return 0;
}
