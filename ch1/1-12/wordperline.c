#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while((c = getchar()) != EOF) {
    putchar(c);
    if(c == ' ')
      putchar('\n');
  }
}
