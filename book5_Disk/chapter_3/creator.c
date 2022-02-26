#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{   
    FILE *myfile;
    char c;

    myfile = fopen("alive.txt", "r");
    if(myfile)      /* if file exists!! */
    {
        puts("The file \"alive.txt\" already exists!");
        printf("Overwrite it? [Y/N]");
        c = toupper(getchar());
        if (c != 'Y')
        {
            puts("Okay. good-bye");
            fclose(myfile);
            exit(1);
        }
    }
    myfile = fopen("alive.txt", "w");
    if (myfile == NULL)
    {
        puts("Can't find your file");
        exit(0);
    }

    fprintf(myfile, "I (Ran) created a file! it's alive!\n");

    fclose(myfile);
    return(0);
}