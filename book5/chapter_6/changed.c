#include <stdio.h>
#include <unistd.h>

#define BUFFERSIZE 128

int main()
{
    char orgdir[BUFFERSIZE];
    char newdir[BUFFERSIZE];
    char lastdir[BUFFERSIZE];
    int x;

    getcwd(orgdir, BUFFERSIZE);
    printf("The current working directory is:\n\t%s\n", orgdir);

    puts("Changing to the root directory...");
    x = chdir("/");
    if(x != 0)
    {
        puts("Error changing directories");
        return(1);
    }

    getcwd(newdir, BUFFERSIZE);
    printf("The current working directory is:\n\t%s\n", newdir);

    puts("And now we getting back to the old directory:");
    x = chdir(orgdir);
    if(x != 0)
    {
        puts("Error changing back directories");
        return(1);
    }
    getcwd(lastdir, BUFFERSIZE);
    printf("The current working directory is:\n\t%s\n", lastdir);

    return(0);
}