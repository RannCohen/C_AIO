#include <stdio.h>

int main()
{
    FILE *scores;
    int s[10] = { 1000, 990 , 985, 960, 955, 950, 945, 945, 945, 930 };
    int x;

    scores = fopen("scores.dat", "w");
    if(scores == NULL)
    {
        puts("Error creating file");
        return(1);
    }

    for(x = 0; x < 10; x++)
    {
        fprintf(scores, "%d\n", s[x]);
    }
    fclose(scores);
    puts("High score saved to disk!");
    return(0);
}