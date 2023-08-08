#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; // lower limit of temperature table
  upper = 300; // upper limit
  step = 20; // step size

  fahr = lower;
  printf("Celsius Fahrenheit \n");
  
  while (fahr <= upper)
  {
    /* code */
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%6.1f %3.0f\n", celsius, fahr);
    fahr = fahr + step;
  }
  return 0;
}