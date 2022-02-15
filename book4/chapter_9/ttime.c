#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void)
{
    struct tm *t;
    time_t now;
    int hour;
    char suffix[5];

    time(&now);                 // Get the current time
    t = localtime(&now);        // Get the tm structure

    t->tm_hour > 12 ? hour = (t->tm_hour - 12) : t->tm_hour;
    t->tm_hour > 12 ? strcpy(suffix, "p.m.\0") : strcpy(suffix, "a.m.\0");

    printf("It is now %d:%02d:%02d %s\n",
        hour,
        t->tm_min,
        t->tm_sec,
        suffix);
    return(0);
}