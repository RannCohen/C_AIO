#include <stdio.h>

void underline(char *string);

int main(void)
{
    underline("This year's Starting line-up");
    return (0);
}

void underline(char *string)
{
    puts(string);
    while(*string)
    {
        putchar('=');
        string++;
    }
    putchar('\n');
}