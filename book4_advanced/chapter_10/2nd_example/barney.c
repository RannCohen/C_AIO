#include <stdio.h>

extern int age;

void show(void)
{
    printf("Your %d years old!\n", age);
}