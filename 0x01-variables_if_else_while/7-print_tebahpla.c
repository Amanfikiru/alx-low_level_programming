#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse, followed by a new line
 * and putchar 
 *
 * Return: 0 on success
 */
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
