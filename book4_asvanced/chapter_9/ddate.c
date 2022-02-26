#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now;
    struct tm *t;

    time(&now);                         // get the time to "now" var
    t = localtime(&now);                // parse the "now" to the tm struct
    printf("%02d/%02d/%d\n", (
        t->tm_mon + 1),             // january starts at 0
        t->tm_mday,
        (t->tm_year % 100));        // year relevant to 1900
    return(0);
}