#include <stdio.h>

int main()
{
    FILE *myfile;

    myfile = fopen("alive.txt", "w");
    if(!myfile)
    {
        puts("Some kind of file error!\n");
        return(1);
    }

    fprintf(myfile, "I created a file!, it's alive!\n");
    fclose(myfile);
    return(0);
}