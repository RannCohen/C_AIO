#include <stdio.h>
#include <strings.h>

#define SIZE 8

int main(void)
{
    int input[SIZE];
    int *isort[SIZE];
    int *temp = NULL;
    

    /* Get the size number of strings */
    printf("Enter %d numbers:\n", SIZE);
    for(int x = 0; x < SIZE; x++)
    {
        printf("#%d: ", x + 1);
        scanf("%d", &input[x]);
        *(isort + x) = &input[x];
    }

    /* Sort the results via pointers */
    for(int a = 0; a < SIZE-1; a++)
        for(int b = a + 1; b < SIZE; b++)
            if(**(isort + a) > **(isort + b))
            {
                temp = *(isort + a);
                *(isort + a) = *(isort + b);
                *(isort + b) = temp;
            }

    /* Print the results */
    printf("Sorted list:\tOrginal list:\n");
    for(int x = 0; x < SIZE; x++)
        printf("%12d\t%12d\n", *(isort[x]), input[x]); 
    return (0);
}