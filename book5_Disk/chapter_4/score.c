#include <stdio.h>

int main()
{
    FILE *scores;
    int s;

    scores = fopen("scores.dat", "r");
    if(!scores)
    {
        puts("Error opening file!");
        return(1);
    }

    fscanf(scores, "%d", &s);
    fclose(scores);
    printf("The high score is %d\n", s);
    return(0);
}