#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while((ch  = fgetc(stdin)) != EOF)
    {
        if(isalpha(ch))
        {
            if(toupper(ch) >= 'A' && toupper(ch) <= 'M')
                ch += 13;
            else
                ch -= 13;
        }
        fputc(ch, stdout);
    }
    return(0);
}