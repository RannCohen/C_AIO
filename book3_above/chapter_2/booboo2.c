#include <stdio.h>

int main(void)
{
    char yours[25];
    char mine[] = "Henry";

    printf("Whats your name? ");
    gets(yours);
    if(mine == yours)
    {
        printf("We both have the same name!\n");
    }
    return 0;
}