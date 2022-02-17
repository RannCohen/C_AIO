#include <stdio.h>

int doubler(int v)
{
    if (v < 1000)
    
        return(doubler(v * 2));
    else
    
        return(v);
}
    
int main()
{
    int x;

    x = doubler(1);
    printf("The final value of x  is %d\n", x);
    
    return(0);
}
