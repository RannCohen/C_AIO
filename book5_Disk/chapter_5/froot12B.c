#include <stdio.h>

#define RECSIZE 14

int main()
{
    FILE *f;
    char froot[RECSIZE];
    int record, offset, done;

    if(!(f = fopen("froot.txt", "r")))
    {
        puts("Error opening file");
        return(1);
    }

    /* option 2 for printing every other record */
    record = 0;
    done = 1;
    while (done)
    {
        offset = record * RECSIZE;
        fseek(f, offset, SEEK_SET);
        fread(froot, RECSIZE, 1, f);
        printf("%2d: %s\n", record + 1, froot);
        record += 2;
        done = record % 13;
    }
    
    fclose(f);
    return (0);
}