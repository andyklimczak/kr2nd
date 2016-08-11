#include <stdio.h>

main()
{
  int lengthCountArray[20];
  int count = 0;
  int c;

  for (int i = 0; i < 20; ++i)
    lengthCountArray[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      lengthCountArray[count - 1]++;
      count = 0;
    } else {
      ++count;
    }
  }

  for (int i = 0; i < 20; ++i) {
    printf("%2d:", i + 1);
    for (int j = 0; j < lengthCountArray[i]; ++j)
      putchar('|');
    putchar('\n');
  }
}
