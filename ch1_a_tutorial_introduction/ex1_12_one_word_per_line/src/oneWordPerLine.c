#include <stdio.h>

/**
 * @brief Prints input one word per line.
 * 
 * @return int Exit status of the program.
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