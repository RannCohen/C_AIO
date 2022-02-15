#include <stdio.h>

int main(void)
{
    int v;
    float r;

    printf("Enter an integer value: ");
    scanf("%d", &v);
    r = (float)(v >> 2);
    printf("%d cut in quarter is %.2f\n", v, r);
    return (0);
}