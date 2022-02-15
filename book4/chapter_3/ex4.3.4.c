#include <stdio.h>

int main(void)
{
    int num, num1, num2, r;
    printf("Enter integer number: ");
    scanf("%d", &num);
    num1 = num << 1;
    num2 = num << 3;
    r = num1 + num2;
    printf("The number %d multiplied by 10 is %d\n", num, r);
    return (0);
}