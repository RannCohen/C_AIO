#include <stdio.h>

void peasoup(int *green);

int main(void)
{
    int turn = 13;
    peasoup(&turn);
    return (0);
}

void peasoup(int *green)
{
    while((*green)--)
        printf("Blech! %d\n", *green);
        // puts("Blah!");
}