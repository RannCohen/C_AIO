#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    long int num;
    srandom(time(NULL));

    for(int i = 0; i < 100; i++)
        {
            num = random();
            num %= 10;
            printf("%d) random number = %ld\n", i + 1, num + 1);
        }
    return 0;
}