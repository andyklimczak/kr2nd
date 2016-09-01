#include <stdio.h>

/* printable ascii (32-126) only */
main()
{
  int c, i = 0, count = 0;
  int freq[127-32];

  for(i = 0; i < 127-32; ++i)
    freq[i] = 0;

  while((c = getchar()) != EOF) {
    if(c != '\n' && c != '\t')
      freq[c-32]++;
  }

  for (int i = 0; i < 127-32; ++i) {
    printf("%2d:", i + 1);
    for (int j = 0; j < freq[i]; ++j)
      putchar('|');
    putchar('\n');
  }
}
