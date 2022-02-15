#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[64];
    int size, c;

    printf("Enter a common Erth phrase:");
    gets(input);

    puts("Here is how we say that on Backward Planet:");
    size = strlen(input);
    
    for(c = size - 1; c >= 0; c--)
    {
        putchar(input[c]);
    }

    putchar('\n');
    return 0;
}