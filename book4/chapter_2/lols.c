#include <stdio.h>

int main(void)
{
    int start, finish;
    int *examine;

    examine = &start;
    *examine = 100;
    printf("%d little old ladies started the race.\n", *examine);
    examine = &finish;
    *examine = 9;
    printf("But only %d little old ladies finished\n", *examine);
    return (0);
}