#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RECORDS 6

int main()
{
    struct jb {
        char actor[25];
        struct jb *next;
    };

    char *bonds[RECORDS] = {
        "Sean Connery",
        "David Niven",
        "George Lazenby",
        "Roger Moore",
        "Timothy Dalton",
        "Pierce Brosnan"
    };

    struct jb *first_item;
    struct jb *current_item;
    struct jb *new_item;
    int index = 0;

    /* create the first structure in the list */
    first_item = (struct jb *)malloc(sizeof(struct jb));
    current_item = first_item;

    /* fill the structure */
    while(1)
    {
        strcpy(current_item->actor, bonds[index]);

        index++;
        if(index < RECORDS)
        {
            new_item = (struct jb*)malloc(sizeof(struct jb));
            current_item->next = new_item;
            current_item = new_item;
        }
        else
        {
            current_item->next = NULL;
            break;
        }
    }

    /* display the results */
    
    current_item = first_item; /* start over*/
    index = 1;
    while (current_item)
    {
        printf("structure %d: ", index++);
        printf("%s\n", current_item->actor);
        current_item = current_item->next;
    }
    return(0);
}