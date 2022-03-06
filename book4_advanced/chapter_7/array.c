#include <stdio.h>

void showArray(int *array, int size);
void modArray(int *array, int size);

int main(void)
{
    int primes[] = {2, 3, 5, 7, 11, 13};
    int primesSize = (sizeof(primes) / sizeof(int));
    puts("Original array:");
    showArray(primes, primesSize);
    modArray(primes, primesSize);
    puts("Modified array:");
    showArray(primes, primesSize);
    return (0);
}

void showArray(int *array, int size)
{
    for(int x = 0; x < size; x++)
        printf("Element %d: %d\n", x, *(array+x));
}

void modArray(int *array, int size)
{
  for(int x = 0; x < size; x++)
    *(array + x) *= 2;
}