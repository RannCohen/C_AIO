#include <stdio.h>

int main(void)
{
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int *p;

    p = primes;
    // p += 4;
    printf("The fifth prime number is %d\n", *(p + 4));
    // p += 2;
    printf("and the seventh is %d\n", *(p + 2));

    return (0);
}