#include <stdio.h>
#define MAXLINE 10

int getlineFunc(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((len = getlineFunc(line, MAXLINE)) > 0)
    if(len > max) {
      max = len;
      copy(longest, line);
    }
  if(max > 0)
    printf("%i: %s", max, longest);
  return 0;
}

int getlineFunc(char s[], int lim)
{
  int c, i;
  for(i = 0; (c=getchar()) != EOF && c != '\n'; ++i)
    if(i < lim)
      s[i] = c;
  if(c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
