#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char string[] = "You don't have to shout!";
    char c;
    int x = 0;

    puts(string);

    do
    {
        c = string[x];
        c = toupper(c);
        string[x] = c;
        x++;
    }
    while(c);

    puts(string);
    return 0;
}