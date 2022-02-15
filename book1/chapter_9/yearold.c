#include <stdio.h>

int main(void)
{
	int age;

	printf("Enter your age in years: ");
	scanf("%d", &age);
	printf("you are %d years old.\n", age);
	age++;
	printf("on one year you'll be %d.\n", age);
	return 0;
}
