#include <stdio.h>

int main(void)
{
    int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int i;
    int *p;

    p = primes;
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", *p++);
        // p++;
    }
    return (0);
}