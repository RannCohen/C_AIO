#include <stdio.h>

int main(void)
{
    int v, r, x;
    printf("Enter an integer value: ");
    scanf("%d", &v);
    for(x = 1; x < 8; x++)
    {
        r = v << x;
        printf("%d << %d = %d\n", v, x, r);
    }
    return (0);
}