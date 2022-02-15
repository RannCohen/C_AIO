#include <stdio.h>

#define PODS 50
#define LOCATION 0xBA3C

int main(void)
{
    puts("base 10");
    printf("I must deliver %d pods to %d location.\n", PODS, LOCATION);
    puts("base 16");
    printf("I must deliver 0x%X pods to 0x%X location.\n", PODS, LOCATION);
    puts("base 8");
    printf("I must deliver %o pods to %o location.\n", PODS, LOCATION);
    puts("Scientific notation");
    printf("I must deliver %E pods to %E location.\n", (float)PODS, (float)LOCATION);
    return 0;
}