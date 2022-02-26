#include <stdio.h>
#include <string.h>

int main(void)
{
    char dwarf[7][2][8] = {
        "bashful", "?",
        "doc", "?",
        "dopey", "?",
        "grumpy" "?",
        "happy", "?",
        "sneezy", "?",
        "sleepy", "?"
    };
    char input[64];
    int named = 0, x;

    puts("See if you can name all seven dwarfs:");
    while(named < 7)
    {
        if(named == 1)
        {
            printf("\nSo far you've named %d dwarf.\n", named);
        }
        else
        {
            printf("\nSo far you've named %d dwarfs\n", named);
        }
        printf("Enter a name:");
        gets(input);

/* check for no input */
        if(strcmp(input, "") == 0) // check for no input
            break;
        for(x = 0; x < 7; x++)
        {
            if(strcasecmp(input, dwarf[x][0]) == 0)
            {
                if(dwarf[x][1][0] == '!')
                {
                    printf("you already named that dwarf!\n");
                }
                else
                {
                    printf("Yes! %s is right.\n", input);
                    named++;
                    dwarf[x][1][0] = '!';
                }
            }
        }
        if(named == 7)
            puts("You got 'em all! Snow would be proud!");
        else
            puts("try again");
    }
    return 0;
}