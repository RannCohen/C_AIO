#include <stdio.h>

int main()
{
    FILE *scores;
    int s[10];
    int x;

    scores = fopen("scores.dat", "r");
    if(!scores)
    {
        puts("Error opening file!");
        return(1);
    }

    for(x = 0; x < 10; x++)
    {
        fscanf(scores, "%d", &s[x]);
    }
    fclose(scores);

    puts("High scores:");
    for(x = 0; x < 10; x++)
    {
        printf("%d\n", s[x]);
    }
    return(0);
}