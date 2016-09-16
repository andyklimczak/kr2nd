#include <stdio.h>
#define N 100

int main()
{
  int z, i, lim = N;
  char s[N], c;

  for(z = 0; z < N; ++z) {
    s[z] = 0;
  }

  while(i < lim - 1) {
    c = getchar();
    if(c == '\n')
      lim = 0;
    else if(c == EOF)
      lim = 0;
    else
      s[i++] = c;
  }

  for(z = 0; z < N; ++z) {
    printf("%c", s[z]);
  }
}
