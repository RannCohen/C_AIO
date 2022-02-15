#include <stdio.h>

int main(void)
{
    struct month
    {
        char name[16];
        int age;
        char likes[64];
        char dislikes[64];
        float iq;
    };
    struct month march = {
        "kelly",
        23,
        "books, scented candles, macrame, handguns",
        "Bureaucrats, locked doors, guys named Milton",
        139.8
    };

    puts("Mansa Playmate of the month data:");
    printf("%9s %s\n", "name:", march.name);
    printf("%9s %d\n", "age", march.age);
    printf("%9s %s\n", "likes", march.likes);
    printf("%9s %s\n", "dislikes", march.dislikes);
    printf("%9s %5.1f\n", "iq", march.iq);
    return 0;
}