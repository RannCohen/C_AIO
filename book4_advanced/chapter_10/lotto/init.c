/* Init Module */
#include "lotto.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seedrandomizer(void);

void init(void)
{
    /*seed the randomizer */
    seedrandomizer();

    /* display startup text */
    puts("L O T T O     P I C K E R\n");
    puts("Press Enter to pick this week's numbers:");
    while((getchar()) != '\n');
}
void seedrandomizer(void)
{
    srand((unsigned)time(NULL));
}
