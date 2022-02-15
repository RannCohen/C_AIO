/* convert radians to degrees*/

#include <stdio.h>

#define RAD 57.2957795

int main(void)
{
    float radians, degrees;

    puts("Convert radians to degrees");
    printf("Enter a value in radians: ");
    scanf("%f", &radians);

    degrees = radians * RAD;

    printf("%.5f radians is %.3f degrees.\n", radians, degrees);
    return 0;
}