#include <stdio.h>

void binString(int);

int main(void)
{
    unsigned short int value;

    printf("Enter an integer value, 0 to 65535: ");
    scanf("%hd", &value);

    printf("The binary value is\t");
    binString(value);
    putchar('\n');

    value = ~value;

    printf("One's complement is\t");
    binString(value);
    putchar('\n');

    return (0);
}

void binString(int n)
{
    char bin[17];
    int i;

    for(i = 0; i < 16; i++)
    {
        bin[i] = n & 0x8000 ? '1' : '0';
        n <<=1;
    }
    bin[16] = '\0';
    printf("%s", bin);
}