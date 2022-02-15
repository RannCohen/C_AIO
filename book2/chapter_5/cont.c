#include <stdio.h>

int main(void)
{
    int count = 0;

    while(count < 100)
    {
        count++;
        if(count % 5 == 0);
        else printf("%3d\t", count);
    }
    return 0;
}