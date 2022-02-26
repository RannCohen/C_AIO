#include <stdio.h>

int main(void)
{
	char a, b, c;
	
	for(a = 'A'; a <= 'Z'; a++)
		for(b = 'A'; b <= 'Z'; b++)
			for(c = 'A'; c <= 'Z'; c++)
			printf("%c%c%c\t", a, b, c);
	return 0;
}
