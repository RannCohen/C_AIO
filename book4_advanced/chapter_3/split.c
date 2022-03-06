#include <stdio.h>

int main(void)
{
    unsigned int hex, upper, lower, midlow, midhigh;

    printf("Enter a four-digit hex value: ");
    scanf("%x", &hex);
    lower   = hex & 0x000000ff;
    midlow  = hex & 0x0000ff00;
    midlow >>= 8;
    midhigh = hex & 0x00ff0000;
    midhigh >>= 16;
    upper   = hex & 0xff000000;
    upper >>= 24;

    printf("0x%08X is composed of %02X and %02X and %02X and %02X\n", hex, upper, midhigh, midlow, lower);
    return (0);
}