/* this program read and write struct to the hard disk */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FALSE 0
#define TRUE !FALSE
#define NAMESIZE 30

struct stock_data
{
    char name[NAMESIZE];
    float buy_price;
    float current_price;
};

void write_info(void);
void read_info(void);
void replace_info(void);

int main()
{
    char c;
    int done = FALSE;

    while(!done)
    {
        puts("\nStock Portofilo Thing\n");
        puts("A - Add new stock\n");
        puts("L - List stokes\n");
        puts("R - replace stock\n");
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
            case 'R':
                puts("Replace stock");
                replace_info();
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
    fgets(stock.name, NAMESIZE - 1, stdin);
    printf("How much did you pay for it? $");
    scanf("%f", &stock.buy_price);
    stock.current_price = stock.buy_price / 11;

    stocks = fopen("../chapter_4/stock.dat", "a");
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

    stocks = fopen("../chapter_4/stock.dat", "r");
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

void replace_info(void)
{
    FILE *stocks;
    struct stock_data stock;
    int record, x;
    long offset;

    printf("Which record number do you want to find and replace? ");
    scanf("%d", &record);

    stocks = fopen("../chapter_4/stock.dat", "r");
    if(stocks == NULL)
    {
        puts("Error opening file");
        return;
    }

    offset = (long)(record - 1) * sizeof(stock);
    x = fseek(stocks, offset, SEEK_SET);
    if(x != 0)
    {
        puts("Error reading from file");
        return;
    }

    x = fread(&stock, sizeof(stock), 1, stocks);
    if( x == 0)
    {
        puts("Error reading record");
        return;
    }

    printf("\nRecord: %d\n", record);
    printf("Stock name: %s", stock.name);
    printf("Purchased for: $%.2f\n", stock.buy_price);
    printf("Current price: $%.2f\n", stock.current_price);

    fclose(stocks);
    while((getchar() != '\n'));

    /* read the new stock info */
    printf("what is the new stock name? ");
    fgets(stock.name, NAMESIZE - 1, stdin);
    printf("How much did that new stock cost? $");
    scanf("%f", &stock.buy_price);
    stock.current_price = stock.buy_price / 11;

    /* write the new info to disk */
    stocks = fopen("../chapter_4/stock.dat", "r+");
    if(!stocks)
    {
        puts("Error opening file for writing!");
        return;
    }

    x = fseek(stocks, offset, SEEK_SET);
    if(x != 0)
    {
        puts("Error reading from file");
        return;
    }

    x = fwrite(&stock, sizeof(stock), 1, stocks);
    if(x == 0)
    {
        puts("Error writing to disk!");
        return;
    }
    fclose(stocks);
    puts("Stock REPLACED!");
    while((getchar() != '\n'));
}
