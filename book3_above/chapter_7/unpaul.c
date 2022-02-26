#include <stdio.h>

#define CENT_PER_INCH 2.54

int main(void)
{
    union measure
    {
        float centimeters;
        int inches;
    };
    union measure you;
    union measure paul;

    paul.inches = 70;

    printf("Paul is %d inches tall.\n", paul.inches);
    printf("How tall are you in inches?");
    scanf("%d", &you.inches);

    you.centimeters = CENT_PER_INCH * (float)you.inches;
    paul.centimeters = CENT_PER_INCH * (float) paul.inches;
    printf("you are %.1f cent tall\n", you.centimeters);
    printf("you are %d inch tall\n", you.inches);
    printf("paul is %.1f cant tall\n", paul.centimeters);
    printf("paul is %d cant tall\n", paul.inches);
    return(0);
}