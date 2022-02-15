#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void)
{
    int r[SIZE];
    int c, a, b, temp;

    srandom(time(NULL));

    puts("Here is the array unsorted:");
    for(c = 0; c < SIZE; c++)
    {
        r[c] = random() % 100 + 1;
        printf("%3d ", r[c]);
    }
    putchar('\n');

    /* sort the array: */
    for(a = 0; a < SIZE - 1; a++)
    {
        for(b = a + 1; b < SIZE; b++)
        {
            if (r[a] > r[b])
            {
                temp = r[b];
                r[b] = r[a];
                r[a] = temp;
            }
        }
    }

    /* display the resolt */
    puts("Here is the sorted array:");
    for(c = 0; c < SIZE; c++)
    {
        printf("%3d ", r[c]);
    }
    putchar('\n');
    return 0;
}