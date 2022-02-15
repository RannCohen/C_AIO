#include <stdio.h>

int main(int argc, char *argv[])
{
    /* chaeck for proper number of arguments */
    if(argc <= 2)
    {
        puts("This program requires you to type");
        puts("Some text after the program name.");
        return (1);
    }
    else if(argc >= 4)
    {
        puts("too much arguments!!");
        return (1);
    }

    /* program continues here */
    printf("I shall now work on the \"%s\" and \"%s\" options.\n", argv[1], argv[2]); 
    return (0);
}