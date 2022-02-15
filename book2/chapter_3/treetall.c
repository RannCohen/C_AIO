#include <stdio.h>
#include <math.h>

#define RAD 57.2957795

int main(void)
{
    double opposite, angle;
    float degrees, adjacent;

    puts("*** How tall is that tree program **\n");
    printf("How far is the tree in feet? ");
    scanf("%f", &adjacent);
    printf("What angle is it to the tree top? ");
    scanf("%f", &degrees);

    /* Convert degrees to rads */

    angle = (double)degrees / RAD;

    /* Get the tree hight */

    opposite = tan(angle) * (double)adjacent;

    printf("That tree is %.2f feet tall.\n", opposite);
    return 0;
}