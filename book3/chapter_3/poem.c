#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[128];
    int x, spaces, letters;

    x = spaces = letters = 0;

    printf("Enter the first line of a poem:");
    gets(input);

    /*scan the text*/
    while(input[x])
    {
        if(isspace(input[x]))
            spaces++;
        if(isalpha(input[x]))
            letters++;
        x++;
    }
    printf("That sentence has %d spaces and %d letters.\n", spaces, letters);
    return 0;
}