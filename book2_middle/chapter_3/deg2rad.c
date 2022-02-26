/* convert degrees to radians*/

#include <stdio.h>

#define DEG 0.0174532925

int main(void)
{
    float radians, degrees;

    puts("Convert degrees to radians");
    printf("Enter a value in degrees: ");
    scanf("%f", &degrees);

    radians = degrees * DEG;

    printf("%.3f degrees is %.5f radians.\n", degrees, radians);
    return 0;
}