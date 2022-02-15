#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seperator(int repeat, char c);

int main(void)
{
    srandom((unsigned)time(NULL));

    puts("Here are today's secret number values:");
    seperator(10, '*');
    seperator(15, '-');
    seperator(20, '#');
    return 0;
}

void seperator(int repeat, char c)
{
    long int r;
    
    for(int i = 0; i < repeat; i++)
        putchar(c);
    putchar('\n');
    r = random();
    printf("%ld\n", r);
}