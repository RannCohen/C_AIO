/* all about directories */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>

void dir(char *path);

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        dir(".");                   // default: current dir
    }
    else
    {
        dir(argv[1]);   
    }
}

void dir(char *path)
{ 
    DIR *dhandle;                   // handle for opening directory
    struct dirent *drecord;         // struct to save opened directory data inside
    struct stat fbuf;               // struct to save files data that dosent show up un dirent struct
    int x;

    dhandle = opendir(path);
    if(dhandle == NULL)
    {
        puts("Error opening directory");
        exit(1);
    }

    x = chdir(path);
    if (x != 0)
    {
        printf("Error changing to '%s'\n", path);
        exit(1);
    }
    
    printf("Directory of '%s':\n", path);
    while ((drecord = readdir(dhandle)) != NULL)    // extracting data from dhrectory ".""
    {
        stat(drecord->d_name, &fbuf);           // pulling each file's data to "fbuf"
        if(S_ISDIR(fbuf.st_mode))               // if file is directory print <DIR>
        {
            if (strcmp(drecord->d_name, ".") == 0 ||
                strcmp(drecord->d_name, "..") == 0)
                    continue;
                putchar('\n');
                dir(drecord->d_name);
        }
        else                                    // if file is file print his size in bytes
            printf("%-16s", drecord->d_name);
        putchar('\n');
    }
    chdir("..");
    closedir(dhandle);
}