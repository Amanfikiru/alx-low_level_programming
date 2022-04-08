#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int num = rand();
	if (num < 0)
		printf("%d is negative\n", num);
	else if (num > 0)
		printf("%D is positive\n", num);
	else 
		printf("%d is zero\n", num);
	return (0);
}
