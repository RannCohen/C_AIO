#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while((ch = fgetc(stdin)) != EOF)
    {
        if( ch >= 'a' && ch <= 'z')     // also: if(isalphe(ch))
            ch = toupper(ch);
        fputc(ch, stdout);
    }
    return(0);
}