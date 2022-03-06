#include <stdio.h>

int main(void)
{
    int cent[8];
    int x;
    int *c;

    c = cent;
    for(x = 0; x < 8; x++/*, c++*/)
    {
        *(c + x) = (x + 1) * 100;
        printf("cent[%d] = %d\n", x, *(c + x));
    }
    return (0);
}