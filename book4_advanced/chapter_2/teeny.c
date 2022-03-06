#include <stdio.h>

int main(void)
{
    int teeny;
    int *t;

    /*initialize variables*/
    teeny = 1;
    t = &teeny;

    printf("Variable teeny = %d\n", teeny);
    printf("Variable t = %p\n", t);
    printf("Variable *t = %d\n", *t);

    *t = 64;
    printf("Variable teeny = %d\n", teeny);
    printf("Variable t = %p\n", t);
    printf("Variable *t = %d\n", *t);
    return(0);
}