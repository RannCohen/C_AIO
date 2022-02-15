/* this program read and write struct to the hard disk */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FALSE 0
#define TRUE !FALSE

struct stock_data
{
    char name[30];
    float buy_price;
    float current_price;
};

void write_info(void);
void read_info(void);

int main()
{
    char c;
    int done = FALSE;

    while(!done)
    {
        puts("\nStock Portofilo Thing\n");
        puts("A - Add new stock\n");
        puts("L - List stokes\n");
        puts("Q - Quit\n");
        printf("Your choise: ");

        c = getchar();
        while((getchar() != '\n'));
        // fflush(stdin);  
        c = toupper(c);
        switch (c)
        {
            case 'A':
                puts("Add new stock\n");
                write_info();
                break;
            case 'L':
                puts(" List stocks\n");
                read_info();
                break;
            case 'Q':
                puts("Quit\n");
                done = TRUE;
                break;
            default:
                puts("?");
                break;
        }
    }
    return(0);
}

void write_info(void)
{

}

void read_info()
{

}