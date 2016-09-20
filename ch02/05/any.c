#include <stdio.h>

int any(char[], char[]);

int main()
{
  char s[] = {'a', 'b', 'c', 'e', 'a', 'd', 'a', 'b', 'b', 'd', 'b', 'e' };

  char c[] = {'b', 'd', 'e'};
  printf("Any: %d\n", any(s, c)); // 1

  char d[] = {'d', 'e'};
  printf("Any: %d\n", any(s, d)); // 5

  char e[] = {'x', 'z'};
  printf("Any: %d\n", any(s, e)); // -1
}

int any(char s[], char c[])
{
  int i, k;
  for(k = 0; c[k] != '\0'; k++) {
    for(i = 0; s[i] != '\0'; i++) {
      if(s[i] == c[k]) {
        return i;
      }
    }
  }
  return -1;
}
