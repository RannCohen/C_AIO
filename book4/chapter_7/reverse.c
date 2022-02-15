#include <stdio.h>

char *reverse(char *string);

int main(void)
{
    char input[64];
    char *backwords;

    printf("Please input some words: ");
    fgets(input, 64, stdin);
    backwords = reverse(input);
    printf("here's the reversed string:\n%s\n", backwords);
    return (0);
}

char *reverse(char *str)
{
    static char s[64];
    int len = 0;
    int i;
    /* Get the string length */
    while(*str)
    {
        len++;
        str++;
    }
    str--; /* backup fur \n */

    /* Fill the array */
    for(i = 0; i < len; i++)
    {
        s[i] = *str;
        str--;
    }
    s[i] = '\0';
    return(s);
}