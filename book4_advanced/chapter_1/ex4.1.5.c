#include <stdio.h>

int main(void)
{
    char array[] = "Suppp??\n";
    char *p;
    int i;

    for(i = 0; i < sizeof(array); i++)
    {
        p = &array[i];
        printf("array[%d] address is %p = %c\n", i, p,/**p*/array[i]);
    }

    return (0);
}