#include <stdio.h>
#include <math.h>

int main(void)
{
    int value;
    double root;

    printf("Enter a value: ");
    scanf("%d", &value);
    if (value < 0)
    {
        printf("You enterd a negtive number, run program again with positive numbers\n");
    }
    else if (value > 0)
    {
        root = sqrt((double)value);
        printf("The square root of %d id %f.\n", value, root);
    }
    return 0;
}