#include <stdio.h>

int main(void)
{
	int agent;
	char code;

	printf("Enter your agent number: ");
	scanf("%d", &agent);
	while ((getchar()) != '\n');
	printf("Enter your single-digit code key: ");
	scanf("%c", &code);
	if(agent == 7 && code == 'B' || code == 'b')
	{
		puts("Welcome aboard, James Bond.");
		puts("you may commence with operation Freecell.");
	}
	else
	{
		puts("The authorities have been notified");
		puts("of this illigal access.");
	}
	return 0;
}
