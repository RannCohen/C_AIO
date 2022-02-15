#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int *var[5];

    a = 1;
    b = a * 2;
    c = b * 2;
    d = c * 2;
    e = d * 2;

    var[0] = &a;
    var[1] = &b;
    var[2] = &c;
    var[3] = &d;
    var[4] = &e;

    for(int i = 0; i < 5; i++)
        printf("Var %c = %d\n", 'a' + i, *var[i]);
    return (0);
}