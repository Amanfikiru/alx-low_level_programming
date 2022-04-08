#include <stdio.h>

/**
 * main - print lowwercase letters in reverse order.
 *
 * Return: 0 on success
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
