#include <stdio.h>

void squeeze(char[], char[]);

int main()
{
  char s[] = {'a', 'b', 'c', 'e', 'a', 'd', 'a', 'b', 'b', 'd', 'b', 'e' };
  char c[] = {'d', 'e'};
  int i;

  squeeze(s, c);

  for(i = 0; s[i] != '\0'; ++i)
    printf("%c", s[i]);
}

void squeeze(char s[], char c[])
{
  int i, j, k;
  for(k = 0; c[k] != '\0'; k++) {
    for(i = j = 0; s[i] != '\0'; i++) {
      if(s[i] != c[k]) {
        s[j++] = s[i];
      }
    }
    s[j] = '\0';
  }
}
