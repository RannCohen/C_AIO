#include <stdio.h>

int main(void)
{
    char names[4][3][10] = {
        "bob",    "bill",  "bret",
        "dan",    "dave",  "don",
        "george", "harry", "john",
        "mike",   "steve", "vern"

    };
    int a, b;

    for(a = 0; a < 3; a++)
        for(b = 0; b < 4; b++)
            printf("%s\n", names[b][a]);
    return 0;
}