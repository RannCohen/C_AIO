#include <stdio.h>

int main(void)
{
    char ch;

    while((ch = fgetc(stdin)) != EOF)
        fputc(ch,stdout);
    return (0);
}