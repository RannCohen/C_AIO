#include <stdio.h>
#include <string.h>

int main(void)
{
    char command[64];
    char response[] = "You think I know how to ";
    char new[128];

    while(strcasecmp(command, "quit")) // runs as long as i dont write quit ( that is returning 0 to the whilr loop)
    {
        printf("C:\\>");
        gets(command);

        strcpy(new, response); // copy response to new
        strcat(new, command); // adds my response to the end of new
        strcat(new, "?"); // adds ? to the end of new
        puts(new);
    }
    puts("Well, maybe I do...");
    return 0;
}