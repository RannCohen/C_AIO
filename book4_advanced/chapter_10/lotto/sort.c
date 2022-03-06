/* Sort Module */
#include "lotto.h"

extern int ball[BALLS];

void sort(void)
{
    int a, b, temp;

    for(a = 0; a < BALLS -1; a++)
        for(b = a +1; b < BALLS; b++)
            if(ball[a] > ball[b])
            {
                temp = ball[b];
                ball[b] = ball[a];
                ball[a] = temp;
            }
}