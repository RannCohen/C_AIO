#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *input;
    int size;

    input = (char *)malloc(4069);       // Allocating 4k for buffer

    printf("Enter some text: ");
    fgets(input, 4069, stdin);

    size = strlen(input) + 1;       // + 1 for the NULL or \0
    if(!realloc(input, size))       // Reallocatinf and making sure that the realloc function works
    {
        puts("Unable to reallocate memory");
        return(0);
    }
    puts("Memory reallocation sucsessful");
    printf("String is:\n%s\n", input);
    printf("The string size is: %ld\n", sizeof(size));
    free(input);
    puts("Memory ha been released!");
    printf("String is:\n%s\n", input);
    return(0);
}
