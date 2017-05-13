#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF) {
    c > 64 && c < 90 ? putchar(c + 32) : putchar(c);
  }
  return 0;
}
