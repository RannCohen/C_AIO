#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE !FALSE
#define OMEGA ('Z'-'A')

int main(void)
{
    int done;
    long int r;
    char alpha;

    srandom(time(NULL));

    done = FALSE;
    while(!done)
    {
        r = random() % OMEGA;
        alpha = 'a' + (char)r;
        if(alpha == 'q') done = TRUE;
        putchar(alpha);
    }
    putchar('\n');
    return 0;
}