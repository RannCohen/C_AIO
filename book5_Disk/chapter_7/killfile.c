#include <stdio.h>
#include <unistd.h>


int main()
{
    int x = unlink("zoomba.txt");
    if(x != 0)
    {
        puts("Some kind of file error");
        return(1);
    }
    puts("File killed!");
    return(0);
}