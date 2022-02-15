#include <stdio.h>

int main()
{
    FILE *scores;
    int s = 1000;

    scores = fopen("scores.dat", "w");
    if(scores == NULL)
    {
        puts("Error creating file");
        return(1);
    }

    fprintf(scores, "%d", s);
    fclose(scores);
    puts("High score saved to disk!");
    return(0);
}