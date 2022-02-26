#include <stdio.h>
#include <math.h>

int main(void)
{
    double ln, x;

    for(x = 0.1; x < 6.0; x += 0.1)
        {
            ln = log(x);
            printf("ln(%3.1f) = %f\n", x, ln);
        }
    return 0;
}