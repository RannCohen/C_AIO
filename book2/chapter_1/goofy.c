#include <stdio.h>

int main(void)

{
    char c;

    for(c = 0; (unsigned)c < 128; c++)
    {
        printf("%d\t", c);
    }
    return 0;
}