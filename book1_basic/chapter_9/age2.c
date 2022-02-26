#include <stdio.h>

int main(void)
{
	int age;

	printf("please enter your age ");
	scanf("%d", &age);
	printf("You are %d years old\n", age);
	age += 25;
	printf("in twenty five years you'll be %d years old\n", age);
	if(age >= 100)
		printf("you probably be dead by then hehe\n");
	return 0;
}
