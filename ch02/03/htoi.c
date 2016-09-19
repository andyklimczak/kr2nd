#include <stdio.h>
#include <math.h>

#define MAXLINE 20

int getline1(char[], int);
void initArray(char[], int);
int getHex(char);

int main()
{
  char line[MAXLINE];
  int len, i;
  initArray(line, MAXLINE);

  while ((len = getline1(line, MAXLINE)) != 0) {
    int t;
    t = 0;
    int count = len - 2;
    printf("len: %d, count %d\n", len, count);
    for(i = 0; i < len - 1; ++i, --count) {
      if(line[i] == '0' && (line[i+1] == 'x' || line[i + 1] == 'X')) {
        ++i;
        count -= 1;
      } else {
        t += getHex(line[i]) * pow(16, count);
      }

    }
    printf("%d\n", t);
  }

  return 0;
}

int getHex(char c)
{
  switch(c) {
    case '0':
      return 0;
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
    case '6':
      return 6;
    case '7':
      return 7;
    case '8':
      return 8;
    case '9':
      return 9;
    case 'A':
    case 'a':
      return 10;
    case 'B':
    case 'b':
      return 11;
    case 'C':
    case 'c':
      return 12;
    case 'D':
    case 'd':
      return 13;
    case 'E':
    case 'e':
      return 14;
    case 'F':
    case 'f':
      return 15;
  }
}

int getline1(char s[], int max)
{
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

void initArray(char s[], int max)
{
  int i;
  for(i = 0; i < MAXLINE; ++i)
    s[i] = '\0';
}
