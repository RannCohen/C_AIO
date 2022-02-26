#include <stdio.h>
#include <math.h>

int main(void)
{
    int five = 5;
    int thePow = 399;
    double result = pow((double)five, (double)thePow);

    printf("5 to the power of 399 is %G\n", result);
    return 0;
}