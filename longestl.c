#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int gline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char orig[], char rev[]);

/*print longest input line */
int main()
{
  int len;                /* current line length */
  int max;                /* maximum length so seen so far */
  char line[MAXLINE];     /* current input line */
  char longest[MAXLINE];  /* longest line saved here */
  int extra;
  int longw; 
  char backwards[MAXLINE];

  max = extra = longw = 0;
  while((len = gline(line, MAXLINE))>0){
    // printf("Value recieved was %d\n", len);
      if (len==999){
	printf("Longer than max\n");
	extra = len;
	longw =1;}
      if(longw==1){
	if (len == 999)
	  extra += len;
	else
	  {extra += len;
	    longw =0;}}
      if ((longw == 0)&&(extra > 0))
	printf("The size of the line is higher than max, it is %d\n", extra);
    if(len > max){
      max = len;
      printf("len is %d\n", len);
      copy(longest, line);
      //printf("copied new max %d \n", max);
    }
    if (len > 80){
      printf("%s", line);
      reverse(line, backwards);
      printf("%s \n", backwards);}
}
  //printf("%d is max %s ",max, longest);
  if (max > 0) /* there was a line */
    printf("%s", longest);
  return 0;
}

/*getline: read a line into s, return length */
int gline(char s[], int lim)
{
  int c, i;
  int nl;  // determines if we are in a new line
  int line;  // number of characters to a new line
  int count;   // counts nmumber of spaces

  line = 128;
  nl = 0;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++){
    if((i==0)&&((c==' ')||(c == '\t')))
      i--;
    if(nl > 0)
      if (c == ' ')
	count++;
      else
	nl = count = 0;

    if(i%line==0)
      if(c == ' ')
	nl = count = 1;
    if (count==128){
      i-=128;
      count = 0;
    }

    s[i] = c;
  }

  if (c == '\n'){
    s[i]=c;
    ++i;
  }
  s[i] = '\0';
  printf("The Line was %d\n", i);
  return i;
}

/* copy: copy 'from' int 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i =0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
void reverse(char orig[], char rev[])
{
  int i, len;
  i = len = 0;
  while(orig[len] != '\0')
    ++len;
  --len;
  while(i<=len){
    printf("%d = i %d = len -1 %c \n", i, len-i, orig[len-i]);
    rev[i]=orig[len-i];
    ++i;
  }
  printf("done reversing \n");
}
