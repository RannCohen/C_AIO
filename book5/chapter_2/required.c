#include <stdio.h>

int main(int argc, char *argv[])
{
    /* chaeck for proper number of arguments */
    if(argc == 1)
    {
        puts("This program requires you to type");
        puts("Some text after the program name.");
        return (1);
    }

    /* program continues here */
    printf("I shall now work on the \"%s\" option.\n", argv[1]); 
    return (0);
}