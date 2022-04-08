#include <stdio.h>
/**
 * main - print numbers from 012 to 789.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if (!(i > j) > k || (i == j) == k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}

