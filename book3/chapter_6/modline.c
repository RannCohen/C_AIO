#include <stdio.h>
#include <string.h>

void showline(void);
void dashes(char c);

char line[81];
int linelen;

int main(void)
{
    puts("Enter a line of text:");
    fgets(line, 81, stdin);
    linelen = strlen(line);

    puts("Here is the line you entered:");
    showline();
    return 0;
}

void showline(void)
{
    dashes(' ');
    printf("%s", line);
    dashes('$');
}

void dashes(char c)
{
    int x;

    if(c == ' ')
    {
        putchar('\n');
        return;
    }
    for(x = 0; x < linelen; x++)
        putchar(c);
    putchar('\n');
}