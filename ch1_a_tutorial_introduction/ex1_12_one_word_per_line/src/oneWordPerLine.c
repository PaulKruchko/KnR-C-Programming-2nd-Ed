#include <stdio.h>

/**
 * @brief Prints input one word per line.
 * 
 * @return [out] result Indicates if the program executed successfully or not.
 */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
