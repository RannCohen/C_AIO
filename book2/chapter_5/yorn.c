#include <stdio.h>

int main(void)
{
    int val;

    do
    {
        printf("Enter a value greater then 20: ");
        scanf("%d", &val);
    } while(val <= 20);

    printf("Thank you. You entered  %d\n", val);
    return 0;
}