#include <stdio.h>

#define LINE_LENGTH 35

int main(void)
{
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

    int line;

    puts("Wizard of Oz Database!\n");

    /* draw the table heading */
    printf("%-15s\t%3s\t%-15s\n", "Actor", "Age", "Role");
    for(line = 0; line < LINE_LENGTH; line++)
    {
        putchar('-');
    }
    putchar('\n');

    /* display the data */
    printf("%-15s\t%3d\t%-15s\n", actor1, age1, role1);
    printf("%-15s\t%3d\t%-15s\n", actor2, age2, role2);
    printf("%-15s\t%3d\t%-15s\n", actor3, age3, role3);
    printf("%-15s\t%3d\t%-15s\n", actor4, age4, role4);

    return 0;
}