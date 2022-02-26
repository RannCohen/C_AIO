#include <stdio.h>

int main(void)
{
    short unsigned int a, b, u;
    short int s;

    a = 150;
    b = 300;
    u = a - b;
    s = a - b;
    printf("Unsigned variable u - %d\n", u);
    printf("Singed variable s = %d\n", s);
    return 0;
}