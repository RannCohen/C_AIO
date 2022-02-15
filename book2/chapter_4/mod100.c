#include <stdio.h>

int main(void)
{
    int m;

    for (int i = 0; i < 100; i++)
    {
        m = i % 10;
        printf("%d\t", m);
    }
    
    return 0;
}