#include <stdio.h>
#include <string.h>

int main(void)
{
    struct date 
    {
        int month;
        int day;
        int year;
    };

    struct family 
    {
        char name[20];
        struct date birthday;
    } me;

    strcpy(me.name, "Ran");
    me.birthday.month = 7;
    me.birthday.day = 13;
    me.birthday.year = 1987;

    printf("%s was born on %d/%d/%d\n", \
        me.name,\
        me.birthday.day,\
        me.birthday.month,\
        me.birthday.year);

    return 0;
}