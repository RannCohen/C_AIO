#include <stdio.h>

#define SIZE 6

int main(void)
{
    int lotto[] ={10, 48, 1, 37, 6, 24};
    int c, a, b, temp;

    puts("Here is the array unsorted:");
    for(c = 0; c < SIZE; c++)
    {
        printf("%2d ", lotto[c]);
    }
    putchar('\n');

    /* sort the array: */
    for(a = 0; a < SIZE; a++)
    {
        for(b = a + 1; b < SIZE; b++)
        {
            if (lotto[a] < lotto[b])
            {
                temp = lotto[b];
                lotto[b] = lotto[a];
                lotto[a] = temp;
            }
        }
    }

    /* display the resolt */
    puts(" Here is the sorted array:");
    for(c = 0; c < SIZE; c++)
    {
        printf("%2d ", lotto[c]);
    }
    putchar('\n');
    return 0;
}