#include <stdio.h>

#define BIG 2468000000000.0
#define TEENSY 0.00000000097531

int main(void)
{
    puts("Using %f:");
    printf("Big %f\tTeensy %f\n", BIG, TEENSY);
    puts("Using %E:");
    printf("Big %E\tTeensy %E\n", BIG, TEENSY);
    puts("Using %G:");
    printf("Big %G\tTeensy %G\n", BIG, TEENSY);
    return 0;
}