#include <stdio.h>

void binString(int n);

int main(void)
{
    // int twos[] = {1,    2,    4,     8,
    //               16,   32,   64,    128,
    //               256,  512,  1024,  2048,
    //               4096, 8192, 16384, 32768 };
    int r, twos = 1;
    unsigned short int v = 0;

    for(int i = 0; i < 16; i++)
    {
        r = v | twos;
        printf("0x%04x | %5d = 0x%04x or ", v, twos, r);
        binString(r);
        putchar('\n');
        twos <<= 1;
    }
  
    return (0);
}

void binString(int n)
{
    char bin[17];

    for(int i = 0; i <16; i++)
    {
        bin[i] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[16] = '\0';
    printf("%s", bin);
}