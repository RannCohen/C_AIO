#include <stdio.h>

int main(void)
{
    float iq[] = {5.1, 4.5, 3.3, 8.9, 1.2};
    int worker;

    for(worker = 0; worker < 5; worker++)
        {
            printf("Worker %d IQ: %10.2f\n", worker + 1, iq[worker]);
        }
    return 0;
}