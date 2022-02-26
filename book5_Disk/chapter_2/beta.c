#include <stdio.h>

int main(int argc, char *argv[])
{
    puts("This is beta!");
    if(argc < 2)
    {
        puts("you didn't gave a name mannn");
        return(1);
    }
    printf("your name is %s\n", argv[1]);
    return (0);
}