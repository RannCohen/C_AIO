/* using ftell() */

#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 400

int main(int argc, char *argv[])
{
    FILE *viewfile;
    char buffer[BUFFSIZE + 1];      /* storage */

    /* check for proper no. of arguments */
    if(argc < 2)
    {
        puts("Missing filename");
        puts("Here is the format:");
        puts("./view \"filename\"");
        exit(1);
    }

    /* does the file exist? */
    viewfile = fopen(argv[1], "r");
    if(!viewfile)
    {
        printf("Error opening \"%s\"\n", argv[1]);
        exit(1);
    }

    /*display the file's guts */
    while(fgets(buffer, BUFFSIZE, viewfile))
    {
        printf("%ld: %s", ftell(viewfile), buffer);
        // printf("%s", buffer);
    }
    fclose(viewfile);
    return(0);
}