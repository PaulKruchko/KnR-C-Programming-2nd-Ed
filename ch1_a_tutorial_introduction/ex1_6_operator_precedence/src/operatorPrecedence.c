#include <stdio.h>

/**
 * @brief Verifies the precednece of the operators, "!=" and "="
 *  
 * Ctrl-D will produce an EOF character, which is -1
 * 
 * @param [out] result Indicates if the program executed successfully or not
*/

int main()
{
    int c;

    while(c = getchar() != EOF)
        printf("%d\n", c);
    
    printf("%d - at EOF\n", c);
    return 0;
}