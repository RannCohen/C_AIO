#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 100

int main(void)
{
    int r[COUNT];
    int c;

    srandom(time(NULL));

    for(c = 0; c < COUNT; c++)  /* initialize the array */
    {
        r[c] = random() % 100 +1;
    }
    
    puts("100 random numbers:");
    for(c = 0; c< COUNT; c++)  /* print the array */
    {
        printf("%d\t", r[c]);
    }
    putchar('\n');

    for(c = 0; c < COUNT; c++)
    {
        r[c] = random() % 100 + 1;  /* reinitialize the array */
    }

    puts("100 NEW random numbers:");

    for(c = 0; c < COUNT; c++)
    {
        printf("%d\t", r[c]);
    }
    
    putchar('\n');
    return 0;
}