#include <stdio.h>

#define DISTANCE 378921.46
#define PI 3.14159265358979

int main(void)
{
    double orbit;
    orbit = DISTANCE * 2 * PI;
    printf("The moon travels %f km in one orbit.\n", orbit);
    return 0;
}