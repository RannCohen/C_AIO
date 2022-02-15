#include <stdio.h>

int main(void)
{
    char prompt[] = "Please enter your first name:";
    char gratis[] = "Thanks";
    char prompt2[] = "Please enter your last name:";
    char first[25];
    char last[25];

    printf(prompt);
    gets(first);
    printf(prompt2);
    scanf("%s", &last);
    puts(gratis);
    printf("Please to meet you, %s %s!\n", first, last);

    return 0;
}