#include <stdio.h>

#define MAXLINE 1000
#define N 20

/* remove comments from input */

int getline1(char s[], int max);

int main(void)
{
  int len, i, c, inComment;
  char line[MAXLINE];

  while ((len = getline1(line, MAXLINE)) != 0) {
    inComment = 0;
    for(c = 0; c < len; ++c) {
      if(line[c] == '/' && line[c + 1] == '*') {
        inComment = 1;
      }
      if(inComment < 1) {
        printf("%c", line[c]);
      }
      if(line[c] == '/' && line[c - 1] == '*') {
        inComment = 0;
      }
    }
  }
  return 0;
}

int getline1(char s[], int max) {
  int i, c, count;
  count = 0;
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
