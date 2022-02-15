#include <stdio.h>
#include <string.h>  // For srtlen(). strcpy()
#include <stdlib.h>  // For malloc()

int main(void)
{
    char *string;
    char input[64];
    int size;

    puts("Enter string:");
    fgets(input, 64 ,stdin);
    size = strlen(input) + 1;       // for the NULL charecter

    string = (char*)malloc(size);
    if(string == NULL)
    {
        puts("No memory allocated!");
        return (0);
    }

    strcpy(string, input);

    puts("The original is:");
    printf("%s\n", input);
    puts("The duplicated is:");
    printf("%s\n", string);
    printf("The char array size is %ld bytes\n", sizeof(input));
    printf("The char pointer size is %ld bytes\n", sizeof(size));
    free(string);
    return (0);
}