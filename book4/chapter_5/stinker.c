#include <stdio.h>

int main(void)
{
    char string[] = "Is it supposed to smell that way?";
    char *s;

    /* initialize variables */
    s = string;

    while(putchar(*s++));   /* NULL charcter ends string */
    return (0);
}