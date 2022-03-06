#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[64];
    int len, x;

    printf("Enter tonight's pass phrase: ");
    fgets(input, 64, stdin);
    len = strlen(input);

    for(x = 0; x < len; x++)
        input[x] = 0X7F ^ input[x];

    puts("Press Enter to see encrypted text:");
    getchar();
    for(x = 0; x < len; x++)
        putchar(input[x]);
    putchar('\n');
    for(x = 0; x < len; x++)
        input[x] = 0x7F ^ input[x];

    puts("Press enter to see the text recoverd:");
    getchar();
    for(x = 0; x < len; putchar(input[x++]));

    return (0);
}