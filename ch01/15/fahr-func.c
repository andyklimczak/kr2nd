#include <stdio.h>

int conversion(int f);

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Farenheit-Celcius Table\n");
  while (fahr <= upper) {
    celsius = conversion(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

int conversion(int f)
{
  return (5.0/9.0) * (f-32.0);
}
