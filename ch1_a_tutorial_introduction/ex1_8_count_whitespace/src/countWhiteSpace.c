#include <stdio.h>

/**
 * @brief Counts the number of blanks, tabs, and newlines in the input
 * 
 * @param [out] result Indicates if the program executed successfully or not
*/
int main()
{
    int c, nb, nt, nl;
    nb = nt = nl = 0;

    while((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++nb;
        }
        else if (c == '\t')
        {
            ++nt;
        }
        else if (c == '\n')
        {
            ++nl;
        }
        else
        {
            /* Do nothing for other characters */ 
        }
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", nb, nt, nl);
    return 0;

}