#include <stdio.h>

int main(void)
{
    int a, b, u, s;

    a = 150;
    b = 300;
    u = a - b;
    s = a - b;
    printf("Unsigned variable u - %u\n", u);  // %u makes the in to be as unsinged int (long)
    printf("Singed variable s = %d\n", s);
    return 0;
}