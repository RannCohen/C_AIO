/* Select Module */
#include "lotto.h"
#include <stdio.h>
#include <stdlib.h>

extern int ball[BALLS];

void Select(void)
{
    int numbers[RANGE];
    int c, b;

    /* initialize the tracking array */
    for(c = 0; c < RANGE; c++)
        numbers[c] = 0;

    /* draw the nubers */
    puts("Here they come:");
    for(c = 0; c < BALLS; c++)
    {
        do
        {
            b = random() % RANGE;
        }
        while(numbers[b]); /* number drawen */
        numbers[b] = 1;    /* number drawen lock */
        ball[c] = b + 1;   /* save number drawen */
    }
}