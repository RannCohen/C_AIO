#include <stdio.h>

#define SIZE 5

int *odd(void);

int main(void)
{
    int *n;
    int x;

    n = odd();

    for(x = 0; x < SIZE; x++)
        printf("Element #%d = %d\n", x, *(n + x));
    return (0);
}

int *odd(void)
{
    static int o[SIZE];
    int x;

    /* Fill the array */
    for(x = 0; x < SIZE; x++)
        o[x] = 2 * x + 1;
    return(o);
}