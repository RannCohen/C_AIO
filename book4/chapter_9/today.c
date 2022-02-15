#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now;

    // time(&now);
    now = time(NULL);
    printf("It is now %s", ctime(&now));
    return(0);
}