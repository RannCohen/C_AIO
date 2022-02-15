#include <stdio.h>
#include <math.h>

#define five 5

int main(void)
{
    double square = sqrt((double)five);
    double halfPow = pow((double)five, 0.5);
    
    if(square == halfPow)
    {
        puts("They are equal!!!");
        printf("The square of 5 is %f, and power of 0.5 to 5 is %f\n", square, halfPow);
    }
    else
    {
        printf("the square is %f and ths power is %f\n", square, halfPow);
    }
    return 0;
}