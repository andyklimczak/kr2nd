#include <stdio.h>

#define MAXLINE 1000
#define N 20

/* remove comments from input */

int getline1(char s[], int max);
void initArray(int a[]);
int syntaxGood(int a[]);

int main(void)
{
  int len, i, c, result;
  char line[MAXLINE];
  int checker[3]; /* only track parenthesis, brackets, braces */


  while ((len = getline1(line, MAXLINE)) != 0) {
    initArray(checker);
    for(c = 0; c < len; ++c) {
      switch(line[c]) {
      case '(':
        ++checker[0];
        break;
      case ')':
        --checker[0];
        break;
      case '[':
        ++checker[1];
        break;
      case ']':
        --checker[1];
        break;
      case '{':
        ++checker[2];
        break;
      case '}':
        --checker[2];
        break;
      }
    }
    result = syntaxGood(checker);
    if(result < 0) {
      printf("Syntax was good");
    } else {
      switch(result) {
        case 0:
          printf("Unbalanced parenthesis");
          break;
        case 1:
          printf("Unbalanced brackets");
          break;
        case 2:
          printf("Unbalanced braces");
          break;
      }
    }
    printf("%c", '\n');
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

void initArray(int a[]) {
  int i;
  for(i = 0; i < 3; ++i)
    a[i] = 0;
}

/* return -1 if syntax is good, else return index of unbalanced character */
int syntaxGood(int a[]) {
  int i;
  for(i = 0; i < 3; ++i) {
    if(a[i] != 0)
      return i;
  }
  return -1;
}
