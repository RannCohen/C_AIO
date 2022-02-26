#include <stdio.h>

int main(void)
{
    char dwarf[7][8] = {
        "bashful",
        "doc",
        "dopey",
        "grumpy",
        "happy",
        "sneezy",
        "sleepy"
    };

    const char *seven[] = {
        "bashful",
        "doc",
        "dopey",
        "grumpy",
        "happy",
        "sneezy",
        "sleepy"
    };
    int x;

    for (x = 0; x < 7; x++)
    {
        printf("%10s - %-10s\n", dwarf[x], seven[x]);
    }
    
    return (0);
}