#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void error_exit(char *message);

int main(int argc, char *argv[])
{
    char originalFile[256];
    char duplicateFile[256];
    char newName[256];
    FILE *org, *dup;
    char ch;
    int len;

    /* gather information */
    puts("MoveFile - a moving file utility");
    printf("Enter the name of the original file: ");
    scanf("%255s", originalFile);
    if(strlen(originalFile) == 0)
        error_exit("Missing filename");
    
    printf("Move file '%s' to directory: ", originalFile);
    scanf("%255s", duplicateFile);
    if(strlen(duplicateFile) == 0)
        error_exit(" Missing destination directory");
    len = strlen(duplicateFile);
    if(duplicateFile[len - 1] != '/')
        strcat(duplicateFile, "/");

    printf("Give the file new name? (Y/N): ");
    while((getchar() != '\n'));
    ch = getchar();
    ch = toupper(ch);
    if (ch == 'Y')
    {
        printf("Enter new name: ");
        scanf("%255s", newName);
        if(strlen(newName) == 0)
            error_exit("No new name specified");
        strcat(duplicateFile, newName);
    }
    else
        strcat(duplicateFile, originalFile);
    
    printf("\nMoving file '%s' to '%s'\n\n", originalFile, duplicateFile);

    /* First - copy the file */
    org = fopen(originalFile, "r");
    dup = fopen(duplicateFile, "w");
    if(org == NULL || dup == NULL)
        error_exit("error opening or creating file");

    while((ch = fgetc(org)) != EOF)
        fputc(ch, dup);
    fclose(org);
    fclose(dup);

    /* now - delete the original */
    unlink(originalFile);

    /* and we're done */
    puts("File moved");
    return(0);
}


/* display error message and exit the program */

void error_exit(char *message)
{
    printf("ERROR: %s\n", message);
    exit(1);
}