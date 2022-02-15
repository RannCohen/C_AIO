#include <stdio.h>
#include <time.h>

#define DELAY 0.1

void pause(void)
{
    // time_t then;
    // time(&then);
    time_t then = time(NULL);
    while(difftime(time(NULL), then) < DELAY);
}

int main(void)
{
    for(int x = 10; x > 0; x--)
    {
        printf("%d\n", x);
        pause();
    }
    puts("BLASTOFF!");
    pause();
    return(0);
}