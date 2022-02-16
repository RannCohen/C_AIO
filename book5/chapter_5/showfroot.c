#include <stdio.h>

int main()
{
    FILE *f;
    char fruit[14];

    f = fopen("froot.txt", "r");
    if(!f)
    {
        puts("Error opening file!");
        return(1);
    }

    for(int i = 0; i < 25; i++)
    {
        fread(fruit, 14, 1, f);
        printf("%d: %s\n",i + 1, fruit);
    }

    fclose(f);
    return(0);
}