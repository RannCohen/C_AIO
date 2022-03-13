#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <stdlib.h>

#define RANGE 52
#define BALLS 6

int getBall(void);

struct lotto
{
    int ball[BALLS];
    struct lotto *previous;
    struct lotto *next;
};
struct lotto *f, *c, *n, *p, *l;

int main()
{
    int x, y;
    srandom((unsigned)time(NULL));

    /* fill first record */
    f = (struct lotto *)malloc(sizeof(struct lotto));
    for(x = 0; x < BALLS; x++)
        f->ball[x] = getBall();
    f->previous = NULL;
    f->next = NULL;
    c = f;

    /* fill middle record */
    for(y = 0; y < 9; y++)
    {
        p = c;
        n = (struct lotto *)malloc(sizeof(struct lotto));
        c->next = n;
        c = n;
        for(x = 0; x <BALLS; x++)
            c->ball[x] = getBall();
        c->previous = p;
    }

    /* fix the last record */
    c->next = NULL;
    l = c;

    /* Display all records */
    y = 1;
    for(c = f; c != NULL; c = c->next)
    {
        printf("Lotto pix %d: ",y++);
        for(x = 0; x <BALLS; x++)
            printf(" %d", c->ball[x]);
        putchar('\n');
    }

    /* delete a record */
    printf("Enter a record to delete: ");
    scanf("%d", &y);
    for(x = 1, c = f; x < y; x++) // find the record
        c = c->next;              // c is the record
    p = c->previous;
    n = c->next;
    if(p != NULL)
        p->next = n;
    else
        f = n;                  // new first
    if(n != NULL)
        n->previous = p;
    else
        l = p;                  // new last
    free(c);                    // remove record

    /* Display all records */
    y = 1;
    for(c = f; c != NULL; c = c->next)
    {
        printf("Lotto pix %d: ",y++);
        for(x = 0; x <BALLS; x++)
            printf(" %d", c->ball[x]);
        putchar('\n');
    }

    /* Display all records  - reversed*/
    y = 10;
    for(c = l; c != NULL; c = c->previous)
    {
        printf("Lotto pix reversed %d: ",y--);
        for(x = 0; x <BALLS; x++)
            printf(" %d", c->ball[x]);
        putchar('\n');
    }

    return(0);
}

int getBall(void)
{
    return(random() % RANGE + 1);
}