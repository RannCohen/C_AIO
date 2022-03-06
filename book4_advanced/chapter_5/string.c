#include <stdio.h>

int main(void)
{
    char text[] = "Going! Going! gone!";
    char *t;

    t = text;

    while(*t)
    {
        puts(t);
        t++;
    }
    return (0);
}