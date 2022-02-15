#include <stdio.h>

int main(void)
{
    char ch;
    
    puts("Press ~ and Enter to stop");
    while(getchar() != '~');
    return 0;
}