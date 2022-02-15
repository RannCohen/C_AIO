#include <stdio.h>

int main(void)
{
    char input[10];

    struct stuff
    {
        char letter;
        int number;
    }my, his, her;

    /* His info */
    his.letter = 'Y';
    his.number = 199;

    /* Hes info */
    her.letter = 'N';
    her.number = 14;

    puts("Your Own stuff");

    printf("Enter your favorite letter: ");
    my.letter = getchar();

    printf("Enter your favorite number: ");
    scanf("%d", &my.number);

    printf("\nYour favorite letter is %c\n", my.letter);
    printf("and your favorite number is %d\n", my.number);
    printf("His favorite lettet is %c\n", his.letter);
    printf("and his favorite number is %d\n", his.number);
     printf("Her favorite lettet is %c\n", her.letter);
    printf("and her favorite number is %d\n", her.number);
    return 0;
}