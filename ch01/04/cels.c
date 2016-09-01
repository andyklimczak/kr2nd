#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Celsius-Fahrenheit Table\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32;
    printf("%6.1f %3.2f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
