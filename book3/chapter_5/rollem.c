#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void line(int lengh);
int throw(void);

int main(void)
{
    int dice, roll, total = 0;
    srandom((unsigned int)time(NULL));

    printf("How many dice would you like to roll (1 to 12)?");
    scanf("%d", &dice);
    if(dice < 1 || dice > 12)
    {
        puts("please stick to the instructions!!!");
        return 1;
    }
    printf("Rolling %d...\n", dice);
    puts("Here they come!");

    /* first line */
    for(int i = 0; i < dice; i++)
        printf(" %2d ", i + 1);
    putchar('\n');
    
    /* second line */
    line(dice);

    /* third line */
    for(int i = 0; i < dice; i++)
    {
        roll = throw();
        total += roll;
        printf("| %d ", roll);
    }
    printf("|\n");
    
    /* fourth line */
    line(dice);

    printf("total = %d\n", total);
    return (0);
}

int throw(void)
{
    int dice = random() % 6 + 1;
    return(dice);
}

void line(int lengh)
{
    int x;
    for(x = 0; x < lengh; x++)
        printf("+---");
    printf("+\n");
}