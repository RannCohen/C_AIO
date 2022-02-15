#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *dump_me;
    int i, x = 0;

    /* check for file name argment */
    if(argc < 2)
    {
        puts("Foemat: ./dump \"filename\"");
        exit(1);
    }

    /* open the file argv[1] int read-binary mode */
    dump_me = fopen(argv[1], "rb");
    if(dump_me == NULL)
    {
        printf("Error opening \"%s\"\n", argv[1]);
        exit(1);
    }

    /* display file's content in HEX */
    while((i = fgetc(dump_me)) != EOF)
    {
        printf("%.2x ", i);
        x++;
        if(!(x%16)) putchar('\n');
    }
    fclose(dump_me);

    /* file trivia display */
    printf("\n%s: size = %u bytes\n", argv[1], x);
    return(0);
}