#include <stdio.h>

#define LINE_LENGTH 40

int main(void)
{
    struct oz
    {
        char actor[18];
        int age;
        char role[16];
    };
    struct oz cast[6] =
    {
        "Judy Garland", 17, "Dorothy",
        "Ray Bolger", 35, "Scarecrow",
        "Bert lahr", 44, "Cowerdly Lion",
        "Jack Haley", 40, "Tin Woodsman",
        "Margaret Hamilton", 37, "Wicked Witch",
        "Frank Morgan", 49, "The Wizard"
    };
    struct oz temp;
    int line, x;

    /* swap margaret and frank */
    temp = cast[4];
    cast[4] = cast[5];
    cast[5] = temp;

    /* sorting the ages */
    for(int i = 1; i <= 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(cast[i].age < cast[j].age)
            {
                temp = cast[i];
                cast[i] = cast[j];
                cast[j] = temp;
            }
        }
    }

    puts("Wizard of Oz Database!\n");

    /* draw the table heading */
    printf("%-18s\t%3s\t%-15s\n", "Actor", "Age", "Role");
    for(line = 0; line < LINE_LENGTH; line++)
    {
        putchar('-');
    }
    putchar('\n');
    /* `Display the data */
    for(x = 0; x < 6; x++)
    {
        printf("%-18s\t%3d\t%-15s\n",
            cast[x].actor, \
            cast[x].age,\
            cast[x].role);
    }
    return 0;
}