#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float value;
    double answer;

    printf("0! Computer, find me the square root of: ");
    scanf("%f", &value);

    if(value < 0.0) abort();

    answer = sqrt((double)value);
    printf("The computer says the answer is %f\n", answer);
}