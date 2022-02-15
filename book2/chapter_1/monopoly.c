#include <stdio.h>

#define ROLL 32000
#define SPACES 2

int main(void)
{
    int dice;
    int money = 0;

    puts("Monopoly Money Calculator");
    for(dice = 0; dice < ROLL; dice += SPACES)
        {
            money += 200;
            printf("Roll %d\r", dice);
        }
    putchar('\n');
    printf("You made a total of $%d!\n", money);
    return 0;
}