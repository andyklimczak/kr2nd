#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
  int x;
  int v[10];
  int n;
  int i;
  int res;

  n = 10;
  for(i = 0; i < n; i++)
    v[i] = i + 1;

  x = 5;

  res = binsearch(x, v, n);
  printf("%d", res);
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;
  while(low <= high && v[mid] != x) {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  return v[mid] == x ? mid : -1;
}
