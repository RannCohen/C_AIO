#include <stdio.h>

int main(void)
{
    int age;
    puts("Please enter your age:");
    scanf("%d", &age);
    printf("Your age is %d in base 10 and %#X in hex base\n", age, age);
    return 0;   
}