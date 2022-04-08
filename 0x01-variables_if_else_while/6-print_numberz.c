#include <stdio.h>
/**
 * main - Prints the numbers from 0-9.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n = '0';

	while (n < '10')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
