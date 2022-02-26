#include <stdio.h>
#include <math.h>
// #include <stdlib.h>

int main(void)
{
    float value;
    double root;

    printf("Enter a value: ");
    scanf("%f", &value);
    value = fabs(value);
    root = sqrt((double)value);
    printf("The square root of %f id %f.\n", value, root);
    
    return 0;
}