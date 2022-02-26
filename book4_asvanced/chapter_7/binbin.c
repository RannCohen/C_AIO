#include <stdio.h>

char *binString(int n);

int main(void)
{
    unsigned short int val;

    printf("Enter an integer value, 0 to 65,535: ");
    scanf("%hd", &val);

    printf("Decimal value is %d\n", val);
    printf("Hexadecimal value is 0X%x\n", val);
    printf("Binary value is %s\n",binString(val));
    return (0);
}

char *binString(int n)
{
    static char bin[17];        /* must be static */
    for(int x = 0; x < 16; x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[16] = '\0';
    return(bin);
}