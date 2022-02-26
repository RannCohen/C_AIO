#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_LENGTH 40

int main(void)
{
    typedef struct cast {
        char actor[18];
        int age;
        char role[16];
    } tCast;

    tCast *star;        // create struct pointer

    star = (tCast *)malloc(sizeof(tCast));
    if(star == NULL)
    {
        puts("Cannot allocate memory!");
        return(0);
    }
    strcpy(star->actor, "Judy Garland");
    star->age = 17;
    strcpy(star->role, "Dorothy");

    puts("Wizard of Oz database:");

    /* create the table */
    printf("%-18s %3s   %-15s\n", "Actor", "Age", "Role");
    for(int line = 0; line < LINE_LENGTH; line++) putchar('-');
    putchar('\n');

    /* display the data */
    printf("%-18s %3d   %-15s\n",
        star->actor,
        star->age,
        star->role);
    return(0);
}