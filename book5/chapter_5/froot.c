/* write chunk of info to HD, using ftell() & fseek() to move inside the info */
#include <stdio.h>

int main()
{
    char froot[25][14] = {
        "apple", "avocado", "banana", "blackberry", "boysenberry",
        "cantaloupe", "cherry", "coconut", "cranberry", "cumquat",
        "grape", "guava", "mango", "marioberry", "melon", "orange",
        "papaya", "peach", "pear", "persimmon", "pinapple", "plum",
        "raspberry", "strawberry", "whatermelon"
    };
    FILE *f;
    int x;

    if(!(f = fopen("froot.txt","w")))
    {
        puts("Error opening file");
        return(1);
    }
    printf("After file opened, file pointer = %ld\n", ftell(f));

    for (x = 0; x < 25; x++)
    {
        fwrite(froot[x], 14,1,f);
        printf("Wrote record %d, file pointer = %ld\n", x + 1, ftell(f));
    }
    fclose(f);
    return(0);
}