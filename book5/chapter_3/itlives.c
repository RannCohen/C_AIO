#include <stdio.h>

int main()
{
    FILE *myfile;
    char c;

    myfile = fopen("alive.txt", "r");
    if (myfile == NULL)
    {
        printf("The \"file alive.txt\" not found");
        return (1);
    }
    /* do-while */ 
    do
    {
        c = fgetc(myfile);
        putchar(c);
        fflush(myfile);
    } while (c != EOF);

    /* standard while */
    // while ((c = fgetc(myfile) != EOF))
    // {
        // putchar(c);
    // }
    
    fclose(myfile);
    return (0);
}