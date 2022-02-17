/* getting file struct info from file using stat() */
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>


int main(int argc, char *argv[])
{
    struct stat fbuf;
    int x;

    // if(argc != 2)
    if(argc < 2 || argc > 3)
    {
        puts("Wrong filename");
        return(1);
    }

    x = stat(argv[1], &fbuf);
    if(x != 0)
    {
        puts("Error reading file!");
        return(1);
    }
    
    printf("Some file stats on %s\n", argv[1]);
    printf("File size: %ld bytes\n", fbuf.st_size);
    printf("File last modified %s\n", ctime(&fbuf.st_mtime));
    return(0);
}
