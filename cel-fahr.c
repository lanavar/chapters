#include <stdio.h>
/* print Celsius-Fahrenheit table for Celsius -20 .... 150 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 10;

  printf("Celsius\tFahr\n");

  celsius=lower;
  while(celsius <= upper){
    fahr = (celsius*(9.0/5.0))+32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
