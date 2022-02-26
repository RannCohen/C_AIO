#include <stdio.h>

int main(void)
{
    int number;
    float iq;
    char first;

    puts("IQ calculator");
    printf("Enter your house or apartment number: ");
    scanf("%d", &number);
    while((getchar()) != '\n');
    printf("Enter the first letter of your last name: ");
    scanf("%c", &first);
    puts("Calculating your IQ...");
    iq = (float)number / first;
    if(iq < 50)
    {
        iq += 100;
    }
    if(iq > 50 && iq <= 80)
    {
        iq *= 2;
    }
    printf("This computer guesses your IQ tu be %f\n", iq);
    return 0;
}