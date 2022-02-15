#include <stdio.h>

int main(void)
{
    int v, r;

    printf("Enter an integer value: ");
    scanf("%d", &v);
    r = v >> 1; /*Shifts bits one notch right*/
                /* can also be written as: */
                /*         v >>= 1;        */
    printf("%d cut in half is %d\n", v, r);
    return (0);
}