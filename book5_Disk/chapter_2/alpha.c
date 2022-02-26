#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char user_name[64];
    char command[64] = "./beta ";
    puts("Hello there, please Enter your name:");
    fgets(user_name, 64, stdin);
    strcat(command, user_name);
    system(command);
    return (0);
}