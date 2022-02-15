#include <stdio.h>
// #include <string.h>

int main(void)
{
    char yours[25];
    char mine [25];
    int x = 0;

    printf("What is your name? ");
    gets(yours);

    // mine = yours;
    
    /* strcpy mathod */
    // strcpy(mine, yours);

    /* while loop mathod */
    while(mine[x] = yours[x])
    {
        x++;
    }

    printf("My name is %s just like your name is %s!\n", mine, yours);
    return 0;
}