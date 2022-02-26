#include <stdio.h>

int main()
{
    char original_file[] = "copyfile.c";
    char duplicate_file[] = "copyfile.dup";
    FILE *org, *dup;
    char ch;

    org = fopen(original_file, "r");
    dup = fopen(duplicate_file, "w");
    if(org == NULL || dup == NULL)
    {
        puts("Error copying file!");
        return(1);
    }

    while ((ch = fgetc(org) != EOF))
    {
        fputc(ch, dup);
    }

    fclose(org);
    fclose(dup);
    puts("file copied");
    return(0);
}