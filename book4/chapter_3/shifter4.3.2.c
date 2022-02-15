#include <stdio.h>

int main(void)
{
    int v, r;

    printf("Enter an integer value: ");
    scanf("%d", &v);
    r = v >> 2;
    printf("%d cut in quarter is %d\n", v, r);
    return (0);
}