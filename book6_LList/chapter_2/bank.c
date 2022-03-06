#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void clearInput(void);
void addNewAccount(void);
void listAll(void);

struct account
{
    int number;
    char lastName[15];
    char firstName[15];
    float balance;
    struct account *next;
};
struct account *firsta, *currenta, *newa;
int anum = 0;

int main()
{
    char ch;
    firsta = NULL;

    do
    {
        clearInput();
        puts("\nA - Add new account");
        puts("L - List all");
        puts("Q - Quit this program");
        printf("\tYour choise:");
        ch = getchar();
        ch = toupper(ch);
        switch (ch)
        {
        case 'A':
            puts("Add new account\n");
            clearInput();
            addNewAccount();
            break;
        case 'L':
            puts("List all\n");
            listAll();
            break;
        case 'Q':
            puts("Quit\n");
        default:
            break;
        }
    } while (ch != 'Q');
    
    return 0;
}

/* This func clears any text from input stream */
void clearInput(void)
{
    while ((getchar() != '\n'));
}

/***********************************************/
void addNewAccount(void)
{
    newa = (struct account *)malloc(sizeof(struct account));

    /* check to see if this is the first record (node)
    if so, then initialize all pointers to this
    first struct (node) in the database */
    if (firsta == NULL)
    {
        firsta = currenta = newa;
    }
    /* otherwise, you musr find the last struct (node)
    and add on the new struct you just allocated memory for*/
    else
    {
        currenta = firsta;  /* make first record current */
                            /* loop through all records: */
        while (currenta->next != NULL)
        {
            currenta = currenta->next;
        }
        /* the last record is found */
        currenta->next = newa;  /* save the address of new */
        currenta = newa;        /* make record new */
    }
    /* now fill in the new struct (node) */
    anum++;
    printf("%27s: %5i\n", "Account number", anum);
    currenta->number = anum;
    printf("%27s: ", "Enter costumer's last name");
    fgets(currenta->lastName, 15, stdin);

    printf("%27s: ", "Enter costumer's first name");
    fgets(currenta->firstName, 15, stdin);

    printf("%27s: $", "Enter account balance");
    scanf("%f", &currenta->balance);

    /* finally, cap the record with a NULL
    pointer so that you know it's the last record */

    currenta->next = NULL;
}

void listAll(void)
{
    if (firsta->next == NULL)
    {
        puts("there's nothing in the records");
    }
    else
    {
        printf("%6s %-15s %-15s %11s\n", "Acct#", "Last", "First", "Balance");
        currenta = firsta;
        do
        {
            printf("%5d: %-15s %-15s $%8.2f\n", currenta->number,
            currenta->lastName, currenta->firstName, currenta->balance);
        } while ((currenta = currenta->next) != NULL);
    }
}