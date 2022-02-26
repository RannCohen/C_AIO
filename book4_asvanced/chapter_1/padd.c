#include <stdio.h>

int main(void)
{
    short int array[] = {2, 3, 5, 7, 9};
    short int *pa;
    short int i;

    for (i = 0; i < 5; i++)
    {
        pa = &array[i];
        printf("array[%d] at %p = %d\n", i, pa, array[i]);
    }
    pa = array;
    for(i = 0; i < 5; i++)
    {
        printf("array[%d] at %p\n", i, pa);
        pa++;
    }
    
    return(0);
}