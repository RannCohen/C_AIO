#include <stdio.h>

int main(void)
{
	int alpha = 5, beta;
	
	beta = alpha--;
	printf("alpha = %d\n", alpha);
	printf("beta = %d\n", beta);
	return 0;
}
