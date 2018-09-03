#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = , 20, ..... 300 */

float conv(float fah);

main()
{
  

  float fahr, celsius;
  int lower, upper, step;

  lower = 0;     /*lower limit of temperature table */
  upper = 300;   /* upper limit */
  step = 20;     /* step size */



  printf("Fahr\tCelsius\n");
  fahr=lower;
  while (fahr <= upper){
    celsius = conv(fahr);
    printf("%7.0f\t%9.1f\n", fahr, celsius);
    fahr = fahr + step;
  
  }}

  float conv(float fah){
    float temp;
    temp = (5.0/9.0)*(fah-32.0);
    return temp;
}
