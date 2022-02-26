#include <stdio.h>

int main(void)
{
    char ch;

    while((ch = fgetc(stdin)) != EOF)
    {
        if(ch == ' ')
            ch = '_';
        fputc(ch,stdout);
    }
    return (0);
}