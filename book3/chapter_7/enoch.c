#include <stdio.h>

int main(void)
{
    enum days {monday = 100, tuesday, wensday, thursday, friday, asturday, sunday};
    int x;

    for(x = monday; x <= sunday; x++)
        printf("x = %d\n", x);
    return(0);
}