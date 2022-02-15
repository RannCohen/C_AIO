#include <stdio.h>

int main(void)
{
    char c;
    short i;
    int y;
    long x;
    float f;
    double d;
    short temp[8];

    puts("Variavle sizes:");
    printf("size of char   variable c = %ld\n", sizeof(c));
    printf("Memory location of char variable c = %p\n", &c);
    printf("size of short  variable i = %ld\n", sizeof(i));
    printf("Memory location of short variable i = %p\n", &i);
    printf("size of int    variable y = %ld\n", sizeof(y));
    printf("Memory location of int variable y = %p\n", &y);
    printf("size of float  variable f = %ld\n", sizeof(f));
    printf("Memory location of float variable f = %p\n", &f);
    printf("size of long   variable x = %ld\n", sizeof(x));
    printf("Memory location of long variable x = %p\n", &x);
    printf("size of double variable d = %ld\n", sizeof(d));
    printf("Memory location of double variable d = %p\n", &d);
    printf("size of char   temp array = %ld\n", sizeof(temp));
    for(y = 0; y < 8; y++)
    {
        printf("Memory location of char variable  temp array = %p\n", &temp[y]);
    }
    return(0);
}