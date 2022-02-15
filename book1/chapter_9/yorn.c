#include <stdio.h>

int main(void)
{
	char ch;

	printf("Would you like me to dend your password to the bad guys?\n");
	while(1)
	{	
		printf("Enter Y or N (Y/N)\n");
		ch = getchar();
		if(ch == 'N' || ch == 'n')
		{
			printf("Well, then: your password is safe!\n");
			break;
		}
		else if(ch == 'Y' || ch == 'y')
		{
			printf("Okay, sending your password!\n");
			break;
		}
		else
		{
			printf("you must enter Y or N!\n");
			fflush(stdin);
		}
	}
	return 0;
}
