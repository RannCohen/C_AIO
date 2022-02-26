#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[128];
    int x = 0;
    
    puts("Enter some text");
    gets(input);

    while(input[x])
    {   
        if(isalnum(input[x]))
        {
            input[x] = tolower(input[x]);
        }
        else
        {
            input[x] = '*';
        }
        x++;
    }
    puts(input);
    return 0;
}