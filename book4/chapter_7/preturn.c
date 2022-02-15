#include <stdio.h>

int *greatest(int a, int b, int c);

int main(void)
{
    int *p;

    p = greatest(5, 25, 16);
    printf("The greatest value is %d\n", *p);
    return (0);
}

int *greatest(int a, int b, int c)
{
    int *g;

    if(a > b && a >c)
        g = &a;
    else if(b > a && b > c)
        g = &b;
    else
        g = &c;
    return(g);
}