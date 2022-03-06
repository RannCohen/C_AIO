#include <stdio.h>

void binString(int);

int main(void)
{
    unsigned short int value;

    printf("Enter an integer value, 0 to 65,535: ");
    scanf("%hd", &value);

    printf("Decimal value is %d\n", value);
    printf("Hexadecimal value is 0x%x\n", value);
    printf("Binary value is ");
    binString(value);
    putchar('\n');
    return (0);
}

void binString(int n)
{
    char bin[17];

    for(int i = 0; i <16; i++)
    {
        //bin[i] = n & 0x8000 ? '1' : '0';
        if(n & 0x8000)
            bin[i] = '1';
        else
            bin[i] = '0';
        n <<= 1;
    }
    bin[16] = '\0';
    printf("%s", bin);
}