#include <stdio.h>

#define RECSIZE 14

int main()
{
    FILE *f;
    char froot[RECSIZE];
    int record, offset;

    if(!(f = fopen("froot.txt", "r")))
    {
        puts("Error opening file");
        return(1);
    }

    /* Get record 12 (13) */
    record = 12;
    offset = record * RECSIZE;
    fseek(f, offset, SEEK_SET);
    fread(froot, RECSIZE, 1, f);
    printf("%2d: %s\n", record + 1, froot);
    fclose(f);
    return (0);
}