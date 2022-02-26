#include <stdio.h>

int main(void)
{
    int m[3][3] = {
        8, 1, 6,
        3, 5, 7, 
        4, 9, 2,
    };
    int i;

    puts("Presenting the Magic Square:\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d %d %d\n", m[i][0], m[i][1], m[i][2]);
    }
    putchar('\n');

    for(i = 0; i < 3; i++)
        printf("Sum for row %d is %d\n", i + 1, m[i][0] + m[i][1] + m[i][2]);
    for(int j = 0; j < 3; j++)
        printf("Sum of culomn %d is %d\n", j + 1, m[0][0] + m[1][1] + m[2][2]);
    printf("Sum for diagonal NW/SE is %d\n", m[0][0] + m[1][1] + m[2][2]);
    printf("Sum for diagonal SW/NE is %d\n", m[0][2] + m[1][1] + m[2][0]);
    return 0;
}