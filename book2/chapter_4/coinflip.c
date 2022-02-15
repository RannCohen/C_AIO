#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLIPS 1000

int main(void)
{
    int coin, totalHeads = 0;
    float hprecent, tprecent;

    srandom(time(NULL));

    for(int i = 0; i <= FLIPS; i++)
    {
            coin = random() % 2; /* 1 = heads || 0 = tails*/
            totalHeads += coin;
            if(coin)
                printf("Heads\t");
            else
                printf("Tails\t");
    }
    hprecent = (float)totalHeads / FLIPS * 100;
    tprecent = 100.0 - hprecent;
    printf("\nTotal flips: %d\nHeads: %.2f\nTails: %.2f\n", FLIPS, hprecent, tprecent);
    return 0;
}