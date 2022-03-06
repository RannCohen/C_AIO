#include "lotto.h"

int ball[BALLS];

int main(void)
{
    init();
    Select();
    sort();
    display();
    return(0);
}