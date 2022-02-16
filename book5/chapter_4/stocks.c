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
    FILE *stocks;
    struct stock_data stock;

    printf("Enter stock name:");
    fgets(stock.name, 16, stdin);
    printf("How much did you pay for it? $");
    scanf("%f", &stock.buy_price);
    stock.current_price = stock.buy_price / 11;

    stocks = fopen("stock.dat", "a");
    if(!stocks)
    {
        puts("Error opening file");
        exit(1);
    }

    fwrite(&stock, sizeof(stock), 1, stocks);
    fclose(stocks);
    puts("Stock added!");
    while((getchar() != '\n'));
}

void read_info()
{
    FILE *stocks;
    struct stock_data stock;
    int x;

    stocks = fopen("stock.dat", "r");
    if(stocks == NULL)
    {
        puts("No data in file!");
        return;
    }

    while(TRUE)
    {
        x = fread(&stock, sizeof(stock), 1, stocks);

        if(x == 0) break;

        printf("\nStok name: %s", stock.name);
        printf("Purchased for: $%.2f\n", stock.buy_price);
        printf("Current price: $%.2f\n", stock.current_price);
    }
    fclose(stocks);
}