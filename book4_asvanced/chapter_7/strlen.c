#include <stdio.h>

int strlength(char *string);

int main(void)
{
    char *text = "Ran";
    int length = strlength(text);
    printf("The length of the string is %d letters!\n", length);
    return (0);
}

int strlength(char *string)
{
    int cnt = 0;
    while(*string)
    {
        cnt++;
        string++;
    }
    return(cnt);
}