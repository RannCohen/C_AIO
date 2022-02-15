#include <stdio.h>
#include <string.h>
#include <ctype.h>

void showline(void);
void dashes(void);
void shout(void);

char line[81];
int linelen;

int main(void)
{
    puts("Enter a line of text:");
    gets(line);
    linelen = strlen(line);

    puts("Here is the line you entered in upper case:");
    showline();
    return 0;
}

void showline(void)
{
    dashes();
    shout();
    dashes();
}

void dashes(void)
{
    int x;

    for(x = 0; x < linelen; x++)
        putchar('-');
    putchar('\n');
}

void shout(void)
{
    char x;
    int i = 0;
    while(x)
    {
        x = toupper(line[i]);
        line[i] = x;
        i++;
    }
    puts(line);
}