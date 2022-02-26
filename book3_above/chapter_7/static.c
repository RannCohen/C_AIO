#include <stdio.h>
#include <ctype.h>

void request(void);

int main(void)
{
    char ch;

    do
    {
        puts("\nmain manu\n==========");
        printf("Press 1 enter new request, Q to quit: ");
        ch = toupper(getchar());
        while((getchar() != '\n'));
        switch(ch)
        {
            case '1':
                request();
                break;
            case 'Q':
                puts("Quitting now");
                return(0);
            default:
                puts("\n Naugty input");
        }
    }
    while(ch != 'q');
}

void request(void)
{
    static int input = 0;

    puts("\nNew request!");
    printf("\tPrevius request was \"%d\"\n", input);
    printf("\tEnter new request: ");
    scanf("%d", &input);
    while((getchar() != '\n'));
    puts("\nThank you!");
}