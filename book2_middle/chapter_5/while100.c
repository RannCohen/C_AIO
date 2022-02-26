#include <stdio.h>

#define REPEATS 100

int main(void)
{
    int num = 1;
    while(num <= REPEATS)
        printf("%3d\n", num++);
    return 0;
}