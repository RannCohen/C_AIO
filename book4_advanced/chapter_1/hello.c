#include <stdio.h>

int main(void)
{
    char array[] = "Hello!\n";
    char *a, *e;

    printf("%s", array);
    a = array;
    e = &array[1];
    printf("Array 'Array' is %ld bytes and lives at %p address.\n", sizeof(array), a);
    printf("The second element of 'Array' is %ld bytes and lives at %p address.\n", sizeof(array[1]), e);
    return (0);
}