#include <stdio.h>

int main(void)
{
    float duration;
    float distance = 378921.46;
    float speed = 140;
    float *d;

    duration = distance / speed;

    d = &distance;
    printf("The moon is %.2f km away.\n", *d);
    d = &speed;
    printf("Treaveling at %.0f kph, ", *d);
    d = &duration;
    printf("it would take %.2f houres to drive to the moon\n", *d);
    return (0);
}