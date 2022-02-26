#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[128];
    int digits, x;
    
    x = digits = 0;

    printf("please enter your street address:");
    gets(input);

    while(input[x])
    {
        if(isdigit(input[x]))
            digits++;
        x++;
    }
    printf("Your address had %d numbers in it!\n", digits);
    return 0;
}