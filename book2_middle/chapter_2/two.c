#include <stdio.h>

int main(void)
{
    int a, b;

    puts("Here is your Two's table:\n");
    for(a = 1, b = 2; b <= 20; a++, b += 2)
        printf("2 * %d = %d\n", a, b);
    return 0;
}