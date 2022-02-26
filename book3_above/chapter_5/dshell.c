#include <stdio.h>
#include <string.h>

void showPrompt(void);     /* prototype*/

int main(void)
{
    char input[64];

    do
    {
        showPrompt();    /*call the function */
        gets(input);
        puts("Someday I must implement that function.");
    }
    while(strcasecmp("quit", input));
    puts("Oh apperntly I did!");

    return 0;
}

void showPrompt(void)
{
    printf("What is the bidding? ");
}