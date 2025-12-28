#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/**
 * @brief Count lines, words, and characters in input.
 * 
 * I would test this program by providing different combinations of inputs
 * for example: No inputs; no words - just spaces, tabs, and newlines; a single word;
 * a single character word; word starting after some blank space; 
 * multiple words separated by various whitespace characters; very long words; etc.
 * 
 * One thing that will be noticed immediately is that the program counts numerals as 
 * words. ex. "This has 4 words." would be counted as 4 words.
 * 
 * @param [out] result Indicates if the program executed successfully or not 
*/
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}
