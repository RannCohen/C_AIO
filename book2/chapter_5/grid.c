#include <stdio.h>

int main(void)
{
    int x = 1;
    char a;

    while(x < 10)
    {
        a = 'A';
        while(a < 'J')
        {
            printf("%d%c\t", x, a);
            a++;
        }
        putchar('\n');
        x++;
    }
    return 0;
}