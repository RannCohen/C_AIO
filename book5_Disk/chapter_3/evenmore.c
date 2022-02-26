#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// append "Alive, I tell you! Alive!" to alive.txt
int main()
{
    FILE *myfile;
    char c;

    myfile = fopen("alive.txt", "r");
    if (myfile)
    {
        puts("file allready exist, do you want to append?");
        c = toupper(getchar());
        if (c != 'Y')
        {
            puts("Okay! No appending today!");
            fclose(myfile);
            exit(1);
        }
    }
    fclose(myfile);

    myfile = fopen("alive.txt", "a");
    fprintf(myfile, "Alive, I tell you! Alive!\n");
    fclose(myfile);

    return(0);
}