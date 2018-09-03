#include <stdio.h>
#define LOWER 0    /*Lower limit of table */
#define UPPER 300  /*Upper limit */
#define STEP 20    /*step size */

/* print Fahrenheit-Celsius table for fahr = , 20, ..... 300 using a for statement  */

main()
{ 
  int fahr;

  printf("Fahr\tCelsius\n");

  for (fahr=LOWER;fahr<=UPPER;fahr=fahr + STEP)
    printf("%3d \t %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
  
}
