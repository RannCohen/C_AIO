#include <stdio.h>
#include <ctype.h>

char ask(void);

int main(void)
{
    char key;

    printf("Do you want to quit before you see the manu?");
    key = ask();
    while((getchar()) != '\n');
    if(key == 'Y') return(0);

    printf("Would you like to see the manu?");
    key = ask();
    if(key == 'Y')
    {
        puts("Someday the manu will appear here");
        /* finish this later */
    }
    return(0);
}

char ask(void)
{
    char c;

    printf(" (Y/N)? ");
    c = toupper(getchar());
    if(c == 'Y')
        return(c);
    else
        return('N');
}