#include <stdio.h>

int main(void)
{
    const char *seven[] = {
        "bashful",
        "doc",
        "dopey",
        "grumpy",
        "happy",
        "sneezy",
        "sleepy"
    };
    int x, c;

    for (x = 0; x < 7; x++)
    {
        // for(c = 0; c < 3; c++)        
            // printf("%c", *(*(seven + x) +c));
        c = 0;
        while(*(*(seven + x) + c))
        {
            putchar(*(*(seven + x) + c));
            c++;
        }
        putchar('\n');
    }
    return (0);
}