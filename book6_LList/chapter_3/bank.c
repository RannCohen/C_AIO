#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void clearInput(void);
void addNewAccount(void);
void listAll(void);
void modifyAcoount(void);
void deleteAccount(void);

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
    FILE *datafile;
    char *fileName = "bank.dat";
    char ch;
    firsta = NULL;

    datafile = fopen(fileName, "r");
    if(datafile)
    {
        firsta = (struct account *)malloc(sizeof(struct account));
        currenta = firsta;
        while(1)
        {
            newa = (struct account *)malloc(sizeof(struct account));
            fread(currenta, sizeof(struct account), 1, datafile);
            if(currenta->next == NULL)
            {
                free(newa);
                break;
            }
            currenta->next = newa;
            currenta = newa;
        }
        fclose(datafile);
        anum = currenta->number;
    }

    do
    {
        puts("\nA - Add new account");
        puts("L - List all");
        puts("M - Modify account");
        puts("D - Delete account");
        puts("Q - Quit this program");
        printf("\tYour choise: ");
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
         case 'M':
            puts("Modify account\n");
            clearInput();
            modifyAcoount();
            break;
        case 'D':
            puts("Delete account\n");
            deleteAccount();
            break;
        case 'Q':
            puts("Quit\n");
        default:
            break;
        }
        clearInput();
    } while (ch != 'Q');
    
    /* Save the records to disk */
    currenta = firsta;
    if(currenta == NULL) /* No data to write */
        return(0);       /* END OF PROGRAM */

    datafile = fopen(fileName, "w");
    if(datafile == NULL)
    {
        printf("Error writing to %s\n", fileName);
        return(1);
    }

    /* write each record to disk */
    while(currenta != NULL)
    {
        fwrite(currenta, sizeof(struct account), 1, datafile);
        currenta = currenta->next;
    }
    fclose(datafile);

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

void deleteAccount(void)
{
    int record;
    struct account *previusa;

    if(firsta == NULL)
    {
        puts("There are no records to delete!");
        return;
    }

    listAll();
    printf("Enter account number to delete: ");
    scanf("%d", &record);

    currenta = firsta;
    while(currenta != NULL)
    {
        if(currenta->number == record)
        {
            if(currenta == firsta)
                firsta = currenta->next;
            else
                previusa->next = currenta->next;
            free(currenta);
            printf("Account %d deleted!\n", record);
            return;
        }
        else
        {
            previusa = currenta;
            currenta = currenta->next;
        }
    }
    printf("Account %d was not found!\n", record);
    puts("Nothing deleted.");
}

void modifyAcoount(void)
{
    int record;

    if(firsta == NULL)
    {
        puts("There are no records to modify!");
        return;
    }

    listAll();
    printf("Enter account number to modify: ");
    scanf("%d", &record);
    clearInput();

    currenta = firsta;
    while(currenta != NULL)
    {
        if(currenta->number == record)
        {
            printf("%27s: ", "Enter costumer's last name");
            fgets(currenta->lastName, 15, stdin);

            printf("%27s: ", "Enter costumer's first name");
            fgets(currenta->firstName, 15, stdin);

            printf("%27s: $", "Enter account balance");
            scanf("%f", &currenta->balance);
            return;
        }
        else
            currenta = currenta->next;
    }

    printf("Account %d was not found!\n", record);
    puts("Nothing modifyed.");
}