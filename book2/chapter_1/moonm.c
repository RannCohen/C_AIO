#include <stdio.h>

#define DISTANCE 378921.46
#define PI 3.141
#define MILES 0.621371192

int main(void)
{
    float orbit;
    float mileOrbit;
    orbit = DISTANCE * 2 * PI;
    mileOrbit = orbit * MILES;
    printf("The moon travels %.2f km in one orbit.\n", orbit);
    printf("The moon travels %.3f miles in one orbit.\n", mileOrbit);
    return 0;
}