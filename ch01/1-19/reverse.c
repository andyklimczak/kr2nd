#include <stdio.h>

#define MAXLINE 1000

/* delete trailing blanks, tabs, and blank lines */

int getline1(char s[], int max);

int main(void)
{
  int len, i;
  char line[MAXLINE], longest[MAXLINE];

  while ((len = getline1(line, MAXLINE)) != 0) {
    for(i = len; i >= 0; i--) {
      putchar(line[i]);
    }
  }

  return 0;
}

int getline1(char s[], int max) {
  int i, c;
  for (i=0; i<max-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
