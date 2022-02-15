#include <stdio.h>

#define LINE_LENGTH 40

int main(void)
{
    char actor[6][18] = {
        "Judy Garland",
        "Ray Bolger",
        "Bert lahr",
        "Jack Haley",
        "Margaret Hamilton",
        "Frank Morgan"
    };

    int age[6] = {17, 35, 44, 40, 37, 49};

    char role [6][16] = {
        "Dorothy",
        "Scarecrow",
        "Cowerdly Lion",
        "Tin Woodsman",
        "Wicked Witch",
        "The Wizard"
    };

    /*
    char actor1[] = "Judy Garland";
    int age1 = 17;
    char role1[] = "Dorothy";

    char actor2[] = "Ray Bolger";
    int age2 = 35;
    char role2[] = "Scarecrow";

    char actor3[] = "Bert lahr";
    int age3 = 44;
    char role3[] = "Cowerdly Lion";

    char actor4[] = "Jack Haley";
    int age4 = 40;
    char role4[] = "Tin Woodsman";
    */

    int line, x;

    puts("Wizard of Oz Database!\n");

    /* draw the table heading */
    printf("%-18s\t%3s\t%-15s\n", "Actor", "Age", "Role");
    for(line = 0; line < LINE_LENGTH; line++)
    {
        putchar('-');
    }
    putchar('\n');

    /* display the data */
    /*
    printf("%-15s\t%3d\t%-15s\n", actor1, age1, role1);
    printf("%-15s\t%3d\t%-15s\n", actor2, age2, role2);
    printf("%-15s\t%3d\t%-15s\n", actor3, age3, role3);
    printf("%-15s\t%3d\t%-15s\n", actor4, age4, role4);
    */
    for(x = 0; x < 6; x++)
    {
        printf("%-18s\t%3d\t%-15s\n", actor[x], age[x], role[x]);
    }
    return 0;
}