#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define RANGE 100
#define GUESSES 6
int main(void)
{
    int guess, number, guessNum = 0;

    srandom(time(NULL));

    puts("Guessing Game!");

    number = random() % RANGE + 1;

    printf("I'm thinking of a number from 1 to %d.\n", RANGE);
    puts("Can you guess what it is?");

    while(guessNum < 6)
    {
        printf("Enter guess: ");
        scanf("%d", &guess);
        if(guess == number)
        {
            puts("You got it!");
            break;
        }
        else if(guess < number)
        {
            puts("Too low");
        }
        else
        {
            puts("Too high!");
        }
        guessNum++;
    }
    if(guessNum == GUESSES)
    {
        puts("Too much tryes.... better up next time!");
        printf("BTW the number was %d\n", number);
    }
    else
        printf("The number was %d\n", number);
    return 0;
}