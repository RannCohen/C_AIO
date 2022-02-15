#include <stdio.h>

int main(void)
{
    char phrase[] = "sushi is mooshi!";
    char ch;
    int x = 0;

    puts(phrase);

    while(ch = phrase[x])
    {
        if(ch == ' ')
        {
            phrase[x] = '-';
        }
        x++;
    }
    puts(phrase);

    // while(ch = phrase[x])
    // {
        // putchar(ch);
        // x++;
    // }

    putchar('\n');
    return 0;
}