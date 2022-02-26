#include <stdio.h>

int main(void)
{
    int combination[] = {36, 24, 12};
    printf("The combination for the safe:\n");
    printf("Turn left to %d\n", combination[0]);
    printf("Turn right to %d\n", combination[1]);
    printf("turn left to %d, open.\n", combination[2]);
    return 0;
}