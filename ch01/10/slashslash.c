#include <stdio.h>

main()
{
  int c;
  while((c = getchar()) != EOF)
  {
    if(c == ' ') {
      putchar('\\');
      putchar('b');
      while((c = getchar()) == ' ')
      {
        putchar('\\');
        putchar('b');
      }
    }
    if(c == '\t') {
      putchar('\\');
      putchar('t');
      while((c = getchar()) == '\t')
      {
        putchar('\\');
        putchar('t');
      }
    }
    if(c == '\\') {
      putchar('\\');
      putchar('\\');
      while((c = getchar()) == '\\')
      {
        putchar('\\');
        putchar('\\');
      }
    }
    putchar(c);
  }
}
