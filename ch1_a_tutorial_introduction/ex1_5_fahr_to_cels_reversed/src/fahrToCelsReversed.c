#include <stdio.h>

/**
 * @brief print Fehrenheit-Celsius table for fahr = 0, 20, ..., 300 
 *  
 * This temperature conversion uses a linear slope-intercept form,
 * y = mx + b, where: 
 * y = Tempearture in degrees celsius
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

    lower  = 0;       /* lower limit of temperature table */
    upper  = 300;     /* upper limit*/
    step   = 20;      /* step size */
    offset = 32.0;      /* offset for conversion formula */
    scale  = 5.0/9.0; /* scale for the conversion formula */ 
    result = SUCCESS;

    fahr = lower; /* init fahrenheit scale with the lowerst range */
    
    printf("/********************************************/\n");
	printf(" ********** Fahrenheit to Celcius *********** \n");
	printf("/********************************************/\n");
	
	printf("Degrees[F]    Degrees[C]\n");

    for (fahr = upper; fahr >= lower; fahr -= step)
    {
        celsius = scale * (fahr - offset);   /* convert degrees fahrenheit into degrees celsius */
        printf("%c%c%3.0f\t\t%6.1f\n", ASCII_SPACE, ASCII_SPACE, fahr, celsius); 
    }

    return result;
}
