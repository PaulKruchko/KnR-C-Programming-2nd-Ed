#include <stdio.h>

/**
 * @brief Print Celsius to Fahrenheit table for celsius = 0, 20, ..., 300 
 *  
 * This temperature conversion uses a linear slope-intercept form,
 * y = mx + b, where: 
 * y = Tempearture in degrees fahrenheit
 * m = slope or scaling factor
 * x = Temperatuer in degrees celsius
 * b = offset between the two measurement scales
 * 
 * @param [out] result Indicates if the program executed successfully or not 
*/

#define SUCCESS 0U
#define FAILURE 1U
#define ASCII_SPACE 32U

int main(void)
{
    float fahr, celsius, offset, scale;
    int lower, upper, step, result;

    lower  = 0;      /* lower limit of temperature table */
    celsius = lower; /* init celsius scale with the lowerst range */
    upper  = 300;    /* upper limit*/
    step   = 20;     /* step size */
    offset = 32.0;   /* offset for conversion formula */
    scale  = 9.0/5.0;/* scale for the conversion formula */ 
    result = SUCCESS;

    fahr = lower; /* init fahrenheit scale with the lowerst range */
    
    printf("/********************************************/\n");
	printf("*********** Celsius to Fahrenheit ************\n");
	printf("/********************************************/\n");
	
	printf("Degrees[C]    Degrees[F]\n");

    while (celsius <= upper)
    {
        fahr = scale * celsius + offset;   /* convert degrees celsius into degrees fahrenheit */
        printf("%c%c%3.0f\t\t%6.1f\n", ASCII_SPACE, ASCII_SPACE, celsius, fahr); 
        celsius = celsius + step;                  /* increment degrees celsius by step size */
    }

    return result;
}
