#include <stdio.h>

#define RECSIZE 14

int main()
{
    FILE *f;
    char newfroot[RECSIZE] = "snozverry";
    int record, offset;

    if(!(f = fopen("froot.txt", "r+")))
    {
        puts("Error opening file!");
        return(1);
    }

    /* replace record 12, record size = RECSIZE */
    record = 12;
    offset = record * RECSIZE;
    fseek(f, offset, SEEK_SET);
    fwrite(newfroot, RECSIZE, 1, f);
    fclose(f);
    return(0);
}