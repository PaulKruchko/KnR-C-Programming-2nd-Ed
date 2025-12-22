#include <stdio.h>

/**
 * @brief Replaces instances of whitespace with their corresponding escape sequences.
 * 
 * @param [out] result Indicates if the program executed successfully or not 
*/

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        if (c != '\b')
            if (c != '\t')
                if (c != '\\')
                    putchar(c);
    }
    return 0;
}