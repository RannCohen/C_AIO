#include <stdio.h>

int main(void)
{
    char const *hello = "Greetings from your computer!";
    char byebye[] = "So long now!";
    char *b;

    b = byebye;

    puts(hello);
    puts(b);
    return (0);
}