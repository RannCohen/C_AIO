#include <stdio.h>
#include <time.h>

int main(void)
{
    char *wdays[] = {
        "Sun",
        "Mon",
        "Tue",
        "Wed",
        "Thu",
        "Fri",
        "Sat"
    };
    struct tm *t;
    time_t now;

    time(&now);             // Get the current time
    t = localtime(&now);    // Get the tm structure
    printf("Today is %s.\n", wdays[t->tm_wday]);
    return(0);
}