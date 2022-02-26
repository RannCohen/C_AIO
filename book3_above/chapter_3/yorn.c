#include <stdio.h>
#include <ctype.h>

#define FALSE 0
#define TRUE !FALSE

int main(void)
{
    int done = FALSE;
    char ch;

    printf("Would you like me to send your password to the bad guys?\n");
    while(!done)
    {
        printf("Enter Y or N (Y/N)?");
        ch = tolower(getchar());
        switch(ch)
        {
            case 'n':
                printf("Well, then: your password is safe!\n");
                done = TRUE;
                break;
            case 'y':
                printf("Okay, sending your password!\n");
                done = TRUE;
                break;
            default:
                printf("You must enter Y / N\n");
                while((getchar() != '\n'));
        }
    }
    return 0;
}