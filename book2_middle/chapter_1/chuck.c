#include <stdio.h>
#define START 65
#define END 90
int main(void)
{
    long int humongous;
    char chuck;

    for(humongous = START; humongous <= END; humongous++)
        {
            chuck = (char)humongous;
            putchar(chuck);
        }
    putchar('\n');
    return 0;
}