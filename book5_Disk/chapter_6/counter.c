#include <stdio.h>

int string_counter(char *s)
{
    int count = 1;

    if(*s++)
        count +=string_counter(s);
    else
        count--;
    
    return(count);
}

int main()
{
    char *string = "Count me! count me, you fool!";
    int length;

    length = string_counter(string);
    printf("The string:\n\t%s\nis %d charecters long\n", string, length);
    return(0);
}