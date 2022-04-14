#include "main.h"
/**
 * print_more_numbers - print all numbers from 0 to 14 10 times
 * Return: 0 on success.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0')
		}
		++i;
	}
	_putchar('\n');
}
