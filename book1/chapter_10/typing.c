#include <stdio.h>

int main(void)
{
	char ch;

	puts("typing program");
	puts("type away: press '~' or '`' to quit");
	for(;;)
	{
		ch = getchar();
		if(ch == '~' || ch == '`')
		{
			break;
		}
	}
	return 0;
}
