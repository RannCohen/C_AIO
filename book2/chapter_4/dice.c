#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMOFROLLS 1000

int main(void)
{
    int d1, d2, total;
    unsigned int tempAvg = 0;
    float avg;

    srandom(time(NULL));
    for(int i = 0; i < NUMOFROLLS; i++)
    {
        d1 = random() % 6 + 1;
        d2 = random() % 6 + 1;
        total = d1 + d2;
        tempAvg += total;
        printf("%d) You rolled %d and %d: total %d\n",i +1, d1, d2, total);
    }
    avg = (float)tempAvg / NUMOFROLLS;
    printf("The avarege roll is %.2f\n", avg);

    return 0;
}