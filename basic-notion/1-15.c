#include <stdio.h>

float transform_fahrenheit_to_celsius(int fahr) {
    return (5.0/9.0) * (fahr - 32.0);
}

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; // lower limit of temperature table
  upper = 300; // upper limit
  step = 20; // step size

  fahr = lower;
  printf("Fahrenheit Celsius\n");
  
  while (fahr <= upper)
  {
    /* code */
    celsius = transform_fahrenheit_to_celsius(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}