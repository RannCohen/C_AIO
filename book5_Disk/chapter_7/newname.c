#include <stdio.h>
#include <errno.h>


int main()
{
    int x = rename("yourname.txt", "zoomba.txt");
    if(x != 0)
    {
        printf("Error: ");
        switch (errno)
        {
        case 1:
            printf("Operation not premitted");
            break;
        case 2:
            printf("No such file");
            break;
        case 13:
            printf("Premission denied");
            break;
        case 30:
            printf("Filename too long");
            break;
        case 63:
            printf("Read onlt file");
            break;
        default:
            printf("Other strange error");
            break;
        }
        puts("");
        return(1);
    }

    puts("File renamed!");
    return(0);
}