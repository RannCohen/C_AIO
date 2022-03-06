#include <stdio.h>

int main(void)
{
    char name[25];
    char *s;
    s = name;

    printf("Please enter your name: ");
    fgets(name, 25, stdin);

    printf("that's your name: ");
    while(putchar(*s++));
    putchar('\n');
    return (0);
}