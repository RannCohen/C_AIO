#include <stdio.h>
#include <math.h>

int main(void)
{
    double two;
    int exponent;

    puts("Power of 2's Table:");
    for(exponent = 0; exponent <= 10; exponent++)
        {
            two = pow(2.0, (double)exponent);
            printf("2 to the %2d power is %.0f\n", exponent, two);
        }
    return 0;
}
