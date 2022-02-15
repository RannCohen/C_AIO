#include <stdio.h>

int main()
{
    char c;
    FILE *mysource;

    mysource = fopen("consume.c", "r");
    if(mysource == NULL)
    {
        printf("error reading source file!\n");
        return(1);
    }

    while((c = fgetc(mysource)) != EOF)
    {
        // printf("%c", c);
        putchar(c);
    }

    fclose(mysource);
    return (0);
}