#include <stdio.h>

typedef char byte;
typedef int word;

int main(void)
{
    byte a;

    for(a = 65; a <= 90; a++)
        putchar(a);
    putchar('\n');
    return(0);
}