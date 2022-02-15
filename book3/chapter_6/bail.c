#include <stdio.h>
#include <stdlib.h>

void finish(void);
void spiffy(void);
void animation(void);

int main(void)
{
    atexit(animation);
    atexit(spiffy);
    atexit(finish);

    puts("Press to begin shutting down this program");
    getchar();
    return(0);
}

void finish(void)
{
    puts("This is the function that looks under");
    puts("the hard drive for any missing bits...\n");
}

void spiffy(void)
{
    puts("This function cleans up the keyboard.\n");
}

void animation(void)
{
    puts("As a final trick. the Taco Bell dog will dance");
    puts("across your monitor with this function.\n");
}