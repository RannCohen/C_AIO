#include<stdio.h>

#define MAX_NAME 64

int main()
{
    char yourname[MAX_NAME];
    /* getting the name from user */
    printf("Please enter yout name:\n");
    fgets(yourname, MAX_NAME, stdin);
    /* creating and opening a text file to save the name */
    FILE *namefile;
    namefile = fopen("yourName.txt", "w");
    if(namefile == NULL)
        return(1);
    /* saving the name to file and close the file */
    fprintf(namefile,"%s\n", yourname);
    fclose(namefile);
    return(0);
}