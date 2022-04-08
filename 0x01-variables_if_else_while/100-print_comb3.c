#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int j;
	for( i = '0'; i < '10'; i++){
		for( j = '0'; j < '10'; j++){
			putchar(i);
			putchar(j);
			if(j != '9' && i != '9')
			{
				putchar(",");
				putchar(" ");
			}
		}
	}
	putchar('\n');
	return (0);
}
