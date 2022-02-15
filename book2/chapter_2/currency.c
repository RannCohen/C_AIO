#include <stdio.h>

#define POUNDS 0x9C
#define YEN 0x9E

int main(void)
{
    float amount, bp, jy;
    float d2p = 0.5407; /* dollars per yen*/
    float d2y = 106.79; /* dollars per yen*/

    printf("Enter the amount in dollars: $");
    scanf("%f", &amount);
    bp = amount * d2p;
    jy = amount * d2y;
    puts("Corrency Conversion:");
    printf("%c%5.2f\n", POUNDS, bp);
    printf("%c%5.2f\n", YEN, jy);
    return 0;
}