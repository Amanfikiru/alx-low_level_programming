#include <stdio.h>

/**
 * main - print lowwercase letters in reverse order
 *
 * return 0 for sucess
 * **/
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
