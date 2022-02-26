#include <stdio.h>

#define SIZE 8

int main(void)
{
    char *names[] = {
        "Mickey",
        "Minnie",
        "Donald",
        "Daisy",
        "Goofy",
        "Chip",
        "Dale",
        "Pluto"
    };
    char *temp;
    int x, a, b;

    for(a = 0; a < SIZE - 1; a++)
        for(b = a + 1; b < SIZE; b++)
        {
            x = 0;
            while((*(*names + a)+x))
            {
                if(*(*(names + a)+x) > *(*(names+b)+x)) 
                {   
                    temp = *(names + a);    /* points to memory address */
                    *(names + a) = *(names + b);
                    *(names + b) = temp;
                    break;
                }
                else if(*(*(names+a)+x) < *(*(names+b)+x))
                    break;
                else
                    x++;
            }
        }

        for(x = 0; x < SIZE; x++)
            printf("%s\n", *(names + x));
    return (0);
}