#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[16];
    char password[] = "Please";
    // int result;

    printf("Enter your secret password:");
    gets(string);
    
    // result = strcmp(string, password);

    if(!strcasecmp(string, password))
    {
        puts("Entery granted!");
    }
    else
    {
        puts("Sorry. Wrong password.");
    }
    return 0;
}