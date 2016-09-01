#include <stdio.h>

#define MAXLINE 1000
#define N 20

/* remove comments from input */

int getline1(char s[], int max);

int main(void)
{
  int len, i, c, result;
  char line[MAXLINE];

  while ((len = getline1(line, MAXLINE)) != 0) {
    printf("%s", line);
  }
  return 0;
}

int getline1(char s[], int max) {
  int i, c;
  for (i=0; i<max-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    s[i] = c;
    if(i != 0 && i % N == 0) {
      ++i;
      s[i] = '\n';
    }
  }
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
