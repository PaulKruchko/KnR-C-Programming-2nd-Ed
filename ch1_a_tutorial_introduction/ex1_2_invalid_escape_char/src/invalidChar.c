#include <stdio.h>

int main()
{
    /* Invalid escape character example - will not compile! */
    printf("This is an invalid escape character: \q\n");
    return 0;
}