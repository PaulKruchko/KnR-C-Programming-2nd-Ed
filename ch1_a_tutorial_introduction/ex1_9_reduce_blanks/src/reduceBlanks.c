#include <stdio.h>

/**
 * @brief Replaces extra spaces with a single space
 * 
 * @param [out] result Indicates if the program executed successfully or not 
*/

int main()
{
    int c, prev;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
           if (prev != ' ')
                putchar(c);
        prev = c;
    }
    return 0;
}