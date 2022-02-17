/* all about directories */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

int main()
{
    DIR *dhandle;                   // handle for opening directory
    struct dirent *drecord;         // struct to save opened directory data inside
    struct stat fbuf;               // struct to save files data that dosent show up un dirent struct
    int files = 0, totalsize = 0;

    dhandle = opendir(".");
    if(dhandle == NULL)
    {
        puts("Error opening directory");
        return(1);
    }
    puts("Directory successfuly opened!");

    while ((drecord = readdir(dhandle)) != NULL)    // extracting data from dhrectory ".""
    {
        stat(drecord->d_name, &fbuf);           // pulling each file's data to "fbuf"
        if(S_ISDIR(fbuf.st_mode))               // if file is directory print <DIR>
            printf("%-16s %9s\n", drecord->d_name, "<DIR>");
        else                                    // if file is file print his size in bytes
        {
            printf("%-16s %9ld bytes\n", drecord->d_name, fbuf.st_size);
            files++;
            totalsize += fbuf.st_size;
        }
    }
    closedir(dhandle);
    printf("%d file(s) for a total %d bytes\n", files, totalsize);
    return(0);
}