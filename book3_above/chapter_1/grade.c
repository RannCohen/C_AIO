#include <stdio.h>

int main(void)
{
    char grades[] = {'A', 'A', 'B', 'C', 'A',
                     'B', 'C', 'C', 'B', 'A',
                     'D', 'D', 'B', 'B', 'A',
                     'A', 'A', 'B', 'A', 'B',
                     'A', 'F', 'B', 'B', 'B' };
    int student;

    puts("Class Grades");
    for(student = 0; student < 25; student++)
        {
            printf("Student #%d, %c\n", student + 1, grades[student]);
        }
    return 0;
}