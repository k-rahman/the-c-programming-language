#include <stdio.h>

int main()
{
  int celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("========================\n");
  printf("Celsius-Fahrenhite Table\n");
  printf("========================\n");
  printf("Celsius Fahrenhite\n");
  while (celsius <= upper) {
    fahr = (celsius * 9/5) + 32;
    printf("%3d %6d\n", celsius, fahr);
    celsius += step;
  }
}
