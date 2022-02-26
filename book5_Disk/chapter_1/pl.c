/*
Pig Latin Filter
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void iglatinpay(char *english);
void strlower(char *string);

int main(void)
{
    char word[32];
    char *w;
    char ch;
    int count;

    while((ch = fgetc(stdin)) != EOF)
    {
        if(isalpha(ch))             // a word start
        {
            count = 0;
            while(isalpha(ch))      // read the word
            {
                word[count] = ch;   // store word
                count++;
                ch = fgetc(stdin);
            }
            word[count] = '\0';     // cap word with NULL
            iglatinpay(word);       // process the word

            /* this routine displays the word stored in word[] */
            w = word;
            while(*w)
            {
                fputc(*w, stdout);
                w++;
            }

            /* finally original non alphe charecter is displayd */
            fputc(ch, stdout);
        }
        else
            fputc(ch, stdout);      // non alpha char
    }
    return(0);
}


void iglatinpay( char *english)
{
    char piglatin[32];              // temp word sto.
    char *e;
    char append[] = "h";             // first letter sto.
    char ch;

    e = english;                    // save the starting loc.

    strlower(english);              // make it all lowercase

    ch = *english;
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            strcpy(piglatin, english);
            strcat(piglatin, "ay");
            break;
        
        case 'c':
        case 'p':
        case 'r':
        case 's':
        case 't':
        case 'w':
            if(*(english + 1) == 'h')
            {
                english += 2;
                strcpy(piglatin, english);
                append[0] = ch;
                strcat(piglatin, append);
                strcat(piglatin, "hay");
                break;
            }
        case 'q':
            if(*(english + 1) == 'u')
            {
                english += 2;
                strcpy(piglatin, english);
                append[0] = ch;
                strcat(piglatin, append);
                strcat(piglatin, "uay");
                break;
            }
        default:
            english++;
            strcpy(piglatin, english);
            append[0] = ch;
            strcat(piglatin, append);
            strcat(piglatin, "ay");
            break;
    }
    strcpy(e, piglatin);
    *e = toupper(*e);
}

void strlower(char *string)
{
    int len, x;

    len = strlen(string);
    for(x = 0; x < len; x++)
        *(string + x) = tolower(*(string + x));
}