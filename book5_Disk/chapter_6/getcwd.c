#include <stdio.h>
#include <unistd.h>

#define BUFFERSIZE 128

int main()
{
    char buffer[BUFFERSIZE];

    getcwd(buffer, BUFFERSIZE);
    printf("The current working directory is:\n\t%s\n", buffer);
    return(0);
}