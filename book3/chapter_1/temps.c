#include <stdio.h>

#define DAYS 5

int main(void)
{
    float temp[DAYS];
    float avg = 0;

    for(int i = 0; i < DAYS; i++)
    {
        printf("What's the temp on day %d? ", i + 1);
        scanf("%f", &temp[i]);
        avg += temp[i];
    }
    avg /= DAYS;
    for(int j = 0; j < DAYS; j++)
    {
        printf("Day #%d, Temp: %.2f\n", j +1, temp[j]);
    }
    printf("The avarage Temperature was %.2f deg\n", avg);
    return 0;
}