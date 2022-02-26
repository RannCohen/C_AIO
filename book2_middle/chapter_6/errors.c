#include <stdio.h>

int main(void)
{
    int code;

    puts("Enter the error code numbers");
    printf("Range 1 through 5: ");
    scanf("%d", &code);

    switch(code)
    {
        case 1:
            puts("San Andreas Fault");
            puts("Solution: Move your house.");
            break;
        case 2:
            puts("Illigal Operation");
            puts("Solution: Find another doctor.");
            break;
        case 3:
            puts("Bad Filename");
            puts("Solution: Spank the filename and put it to bed without any supper.");
            break;
        case 4:
            puts("Missing Socket");
            puts("Solution: Look in the dryer.");
            break;
        case 5:
            puts("Divided By Zero");
            puts("Solution: mess with the numbers until it works.");
            break;
        default:
            puts("Error code value out of range");
            puts("Solution: Read the directions next time.");
    }
    return 0;
}