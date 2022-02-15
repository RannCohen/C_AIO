#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    puts("Press Enter to see a list of files:");
    getchar();
    int exit_status = system("ls -l");
    puts("Done");
    printf("exit status is %d\n", exit_status);
    return(0);
}