#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("Char max: %d\n", CHAR_MAX);
  printf("Char min: %d\n", CHAR_MIN);
  printf("Signed Char max: %d\n", SCHAR_MAX);
  printf("Signed Char min: %d\n", SCHAR_MIN);
  printf("Int max: %d\n", INT_MAX);
  printf("Int min: %d\n", INT_MIN);
  printf("Long max: %ld\n", LONG_MAX);
  printf("Long min: %ld\n", LONG_MIN);
  printf("Short max: %d\n", SHRT_MAX);
  printf("Short min: %d\n", SHRT_MIN);
  printf("Unsigned Char max: %d\n", UCHAR_MAX);
  printf("Unsigned Int max: %u\n", UINT_MAX);
  printf("Unsigned Long max: %lu\n", ULONG_MAX);
  printf("Unsigned Short max: %u\n", USHRT_MAX);
  printf("Float max: %f\n", FLT_MAX);
  printf("Float min: %f\n", FLT_MIN);
  printf("Double max: %f\n", DBL_MAX);
  printf("Double min: %f\n", DBL_MIN);
}
